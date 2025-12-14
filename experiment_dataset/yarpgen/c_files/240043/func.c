/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240043
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (-((-(((long long int) arr_2 [i_3]))))));
                            var_12 = ((/* implicit */unsigned char) ((((arr_4 [i_2] [i_2] [i_2]) <= (((8946730384636882187LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))))))) ? (((/* implicit */int) ((unsigned char) (+(arr_4 [i_0] [i_0 + 2] [i_0]))))) : (((/* implicit */int) arr_0 [i_0]))));
                            var_13 = (~((-(arr_7 [i_3] [i_0 - 2] [i_1 - 2] [i_2]))));
                            arr_9 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((-3433449824755086788LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) arr_8 [i_3] [(unsigned char)19])) : (((((/* implicit */int) arr_5 [(unsigned char)15] [(unsigned char)15] [i_0] [i_0])) >> (((arr_7 [i_0] [i_0] [i_0] [i_0]) + (2281838857290453167LL)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_16 [i_5] [i_1] [16LL] [(signed char)12] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [(unsigned char)23] [i_1] [i_0]);
                        var_15 = (unsigned char)0;
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_7 [i_6] [i_4] [(unsigned char)23] [(unsigned char)23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [12LL] [i_6]))) : (-3630277678205638344LL)))));
                        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_6] [i_1] [i_1] [i_0]))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) (~(arr_4 [16LL] [i_0] [i_0])))))));
                        /* LoopSeq 4 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_10 [i_0] [i_0] [i_0] [i_0]));
                            var_19 -= ((/* implicit */unsigned char) ((signed char) arr_10 [7LL] [i_6 - 2] [i_0] [i_0]));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_18 [i_0] [i_1] [i_0] [i_6 + 1]))));
                            var_21 = ((unsigned char) -3433449824755086779LL);
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_6] [i_6] [i_6] [i_6 - 2] [i_1] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                            var_22 *= ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)191))))));
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [(unsigned char)21] [i_1] = ((/* implicit */unsigned char) (~(((long long int) arr_15 [(signed char)3] [i_1] [i_1] [i_1]))));
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) arr_24 [i_0 + 1])) : (((/* implicit */int) ((unsigned char) (unsigned char)191)))));
                        }
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_24 *= ((signed char) (+(arr_27 [i_6] [i_6] [i_6])));
                            arr_34 [i_0] [i_1 - 2] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1 - 2] [i_0])) >= (((/* implicit */int) (signed char)117))));
                            arr_35 [i_1] [(signed char)3] [i_1 - 1] [i_6] [(signed char)2] [(signed char)2] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_4 [i_1 + 1] [i_0 + 2] [i_0 + 2]));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [i_1 - 1] [(unsigned char)20] [(unsigned char)20] [i_1 - 1] [i_0]))))))))));
                        }
                    }
                }
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-((-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))))));
                arr_36 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) 2823818235071622372LL));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) min((var_27), (((long long int) var_9))));
}
