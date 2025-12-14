/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3862
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
    var_19 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(var_2)))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26983))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))))));
                    var_20 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)5914)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (short)26983)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */int) ((unsigned long long int) 2014571670U));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 + 1] [(signed char)8])) >> (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                            arr_18 [i_1] [(signed char)4] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (short)20491);
                            arr_19 [i_4] [i_1] [i_1] [12LL] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)25809))));
                            arr_20 [i_1] [i_2] [i_1] = ((/* implicit */int) (signed char)109);
                        }
                        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [19] [i_3 - 1])) ? (arr_21 [i_0] [i_1] [i_0] [i_3 - 1] [i_1] [i_2] [i_3 - 1]) : (((/* implicit */int) arr_6 [i_5 - 2] [i_5 - 2] [i_1]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_0])) + (((/* implicit */int) (signed char)-110))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-109)) && (((/* implicit */_Bool) (short)26975))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17046)) ? (((/* implicit */int) (unsigned short)37705)) : (((/* implicit */int) (unsigned short)59609))));
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            {
                arr_29 [i_6] = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_5 [i_7 + 3] [i_7 + 3] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7]))) : (2280395625U))) - (((/* implicit */unsigned int) arr_4 [i_7] [i_7] [i_7]))))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_6])) * ((~((-(((/* implicit */int) (unsigned short)5914))))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            arr_35 [(short)16] [(short)16] [i_8] [i_9] [17] = ((/* implicit */signed char) arr_27 [(unsigned short)10] [(signed char)7] [i_6]);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                            {
                                arr_38 [i_6] [i_7 - 2] [i_8 + 1] [7ULL] [i_10] = ((/* implicit */int) var_1);
                                var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)26983)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_9] [i_6] [i_9]))))));
                            }
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                            {
                                arr_41 [i_11] [i_9] [i_8 + 4] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_27 [i_6] [5U] [i_11 - 1]))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15393162788864ULL)) ? (4503599560261632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
                                var_28 = ((/* implicit */signed char) (-2147483647 - 1));
                                arr_42 [i_8] = (unsigned short)18574;
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))));
}
