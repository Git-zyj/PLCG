/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240849
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((signed char)-114), (((/* implicit */signed char) var_8))))), (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) : (max((var_1), (((/* implicit */unsigned long long int) (signed char)-100))))))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114))))))));
                arr_5 [14U] [14U] [(_Bool)1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_5)))))) ? (max((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10022))) : (var_5))), (((/* implicit */unsigned long long int) min(((signed char)-108), (((/* implicit */signed char) arr_1 [i_1] [(signed char)8]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [9] [0U])) + (((/* implicit */int) arr_0 [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 2668663381U))) ? (((/* implicit */unsigned long long int) var_7)) : (arr_13 [i_2] [i_3] [i_3] [i_2])));
                    arr_14 [i_2] = ((/* implicit */unsigned char) (~(var_5)));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        var_13 = (((-(((/* implicit */int) (short)8)))) == ((+(((/* implicit */int) (signed char)-118)))));
                        arr_18 [i_2] [i_2] [i_2 - 2] [i_2] [i_2] = ((/* implicit */int) 2668663377U);
                        arr_19 [i_2] [i_3] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_2 - 4] [i_2 - 4] [3U] [i_2 - 2] [i_4])));
                    }
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        arr_24 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : ((+(arr_21 [i_2] [i_2] [14U] [15U])))));
                        arr_25 [i_2 - 2] [i_3] [i_4] [i_4] [i_6] [(signed char)12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [(signed char)5] [i_2 + 2])) ? ((+(((/* implicit */int) var_8)))) : (var_0)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_29 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_7] [i_7] [i_4] [3] [i_2] [i_2]))));
                        arr_30 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 2] [8ULL] [i_2 + 2] [i_2] [i_2])))));
                        arr_31 [i_2] [(short)6] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_27 [i_2]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_14 += ((/* implicit */short) var_5);
                        arr_34 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) (+(arr_23 [i_2] [i_2 - 4])));
                        var_15 = ((/* implicit */signed char) var_4);
                        arr_35 [i_4] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_2] [(signed char)0] [(signed char)0] [i_4] [i_8] [i_2 - 3]))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) var_2))));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned char) arr_33 [i_2] [i_2 + 2] [i_2] [i_2] [(short)1])), (min((((/* implicit */unsigned char) var_3)), (arr_20 [i_2 - 1] [(signed char)8] [(signed char)8] [i_2] [17U] [i_3])))));
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)1171)), (1626303915U)))) ? (var_0) : ((+(((/* implicit */int) arr_11 [i_9] [i_9] [i_2 - 1]))))));
                    arr_39 [i_2] [i_3] [i_9] = ((/* implicit */short) ((unsigned int) var_0));
                }
                var_19 = ((unsigned short) (~(arr_37 [i_2 + 1] [i_2 - 1])));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_20 -= ((/* implicit */signed char) max((((/* implicit */int) arr_27 [i_3])), (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_36 [i_2 - 2] [i_2 + 2])) : (((/* implicit */int) (_Bool)1))))));
                    arr_43 [i_2] [i_2] [i_10] = ((/* implicit */int) arr_32 [i_2] [14U] [i_2] [i_2] [14U]);
                }
            }
        } 
    } 
}
