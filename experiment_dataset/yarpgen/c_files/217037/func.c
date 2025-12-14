/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217037
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
    var_20 = ((/* implicit */unsigned char) ((var_1) << ((((~(var_18))) + (1701646185)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_7))));
                        var_22 = ((/* implicit */_Bool) (short)8192);
                        arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_2])) ^ (((((/* implicit */_Bool) arr_2 [i_1])) ? (-19) : (((/* implicit */int) arr_0 [i_2]))))));
                    }
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_4 - 2] [i_4 - 2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) arr_0 [i_1])))) / (arr_10 [i_2] [i_4 - 1] [i_1 - 1] [i_2] [i_1 - 1])));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_5 + 1] [i_4 - 1])) + (((/* implicit */int) arr_4 [i_1] [i_5 + 1] [i_5 - 1]))));
                            arr_17 [i_1] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */short) (+((+(((/* implicit */int) arr_6 [i_1] [i_4] [i_2] [i_1]))))));
                            var_24 = ((/* implicit */short) min((var_24), (((short) arr_0 [i_5 - 1]))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) 2305843009213562880ULL);
                            arr_20 [i_4 + 1] [i_4 + 1] [i_1] [i_2] [i_1] [i_1 + 1] [i_0] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) var_12)))));
                        }
                        arr_21 [i_1] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 1 */
                        for (int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_4 - 1] [i_0] [i_4 - 2] [i_4 - 1])))))));
                            arr_24 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) var_1));
                        }
                    }
                    var_27 = ((/* implicit */_Bool) ((var_15) / (((((/* implicit */_Bool) -1745260907)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 4; i_8 < 16; i_8 += 4) 
                    {
                        arr_28 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                        var_28 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1])));
                        arr_29 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 3] [i_0] [i_8 + 1] [i_8])) != ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    var_29 = ((/* implicit */short) 23LL);
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1276490174U)) ? (var_1) : (((/* implicit */unsigned int) max((((((/* implicit */int) (short)16380)) % (((/* implicit */int) var_8)))), (((/* implicit */int) (short)-8173)))))));
                    arr_33 [i_1] = ((/* implicit */short) (-(max((max((4), (((/* implicit */int) var_3)))), (((/* implicit */int) min(((short)2777), (((/* implicit */short) arr_13 [i_0] [i_1] [i_1] [i_9])))))))));
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_19 [i_0] [i_9] [i_9] [i_0] [i_0])))))) ? (((/* implicit */int) ((signed char) (short)-2778))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8589934576ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)53685))))) ? (((/* implicit */int) (short)-26324)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_0]))))));
                }
                arr_35 [i_1 + 2] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_1] [i_1 - 3] [i_1 + 2] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_0] [i_0]))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 1]))))) ? (min(((+(11619570568967972709ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_18)) - (9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_18), (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((short)26813), ((short)-26324))))))) ? (var_13) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_9)) : (var_7))), (((/* implicit */long long int) (~(-1))))))));
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                {
                    arr_45 [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_11] [i_11])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10] [i_11])))))) ? ((((-(0U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10] [i_11] [i_10] [i_10])))));
                    arr_46 [i_11] [i_11] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [i_10]))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), ((+(var_1)))))));
                }
            } 
        } 
    } 
}
