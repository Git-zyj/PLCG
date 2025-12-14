/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225967
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
    var_19 |= max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (var_9)))) ? (var_13) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_4)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
                            arr_14 [i_0] [(unsigned short)3] [i_0] [i_3] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [8LL])))))));
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_18 [i_0 - 2] [i_0 - 3] [i_0] [i_0 + 1] [i_5] [i_0] |= ((((/* implicit */_Bool) (+(var_4)))) ? ((((_Bool)1) ? (-7296192885564522882LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5))))));
                            arr_19 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) (~(var_3)));
                            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)12289)) >> (((/* implicit */int) (_Bool)1))));
                            var_22 &= ((/* implicit */short) arr_6 [i_0] [i_1]);
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_1]))) ? (arr_1 [i_0 + 1] [i_3 - 1]) : (((/* implicit */int) arr_10 [i_1]))));
                        arr_20 [i_0 + 1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (arr_8 [i_1])));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((min((arr_8 [i_0 - 1]), (((/* implicit */long long int) -1894282829)))), (((/* implicit */long long int) arr_2 [i_1])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), ((~(((((/* implicit */_Bool) arr_21 [i_1] [i_7] [i_2])) ? (((/* implicit */int) arr_21 [i_0] [i_7] [i_0 - 2])) : (arr_25 [i_0 + 1] [i_0 + 1] [i_7] [i_7] [i_0] [i_0])))))));
                            arr_27 [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) arr_1 [i_2] [i_0 + 1]);
                            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_2 [i_1]))));
                            var_28 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_1] [i_0])))) ^ (((int) 1955908359))));
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [19ULL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) (-(arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 3] [i_0])));
                            var_30 = (i_0 % 2 == zero) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_8] [i_8] [i_0] [i_0] [i_1] [i_0]) + (7296192885564522874LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_8] [i_8] [i_0] [i_0] [i_1] [i_0]) - (7296192885564522874LL)))))));
                        }
                        arr_31 [i_2] [i_0] [i_2] [i_6 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [(_Bool)1])) : (arr_7 [i_0] [i_0])));
                        var_31 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0 + 1] [i_0 - 2]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_0 - 3] [i_1] [i_1] [12] [i_2] [i_9] &= ((/* implicit */unsigned long long int) ((arr_29 [i_0 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_2] [i_1])))));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0 - 3] [i_0]);
                        var_32 = ((/* implicit */signed char) var_18);
                        arr_36 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    }
                    arr_37 [i_2] [i_0] [i_2] = ((/* implicit */signed char) (((!((_Bool)1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                    var_33 = ((/* implicit */int) (-(((arr_9 [i_0 - 2] [14U] [i_2] [i_0] [i_2] [i_0]) - (arr_9 [i_0 - 1] [i_0 - 1] [12U] [i_0] [i_2] [i_2])))));
                    arr_38 [(unsigned char)12] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) arr_7 [i_1] [i_0]);
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((((var_5) ? (arr_0 [i_1]) : (var_18))) <= (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned short) var_16))))))) ? (((/* implicit */unsigned int) 1955908359)) : ((((-(var_9))) << (((var_6) - (52745822U))))))))));
                }
            } 
        } 
    } 
}
