/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36376
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
    var_14 = ((((/* implicit */_Bool) ((long long int) min((var_11), (var_9))))) ? (((unsigned long long int) ((long long int) var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */signed char) (_Bool)1)), (var_1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (max((9223372036854775807LL), (6609198810648010914LL))) : (-2440378482309444191LL));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 -= ((/* implicit */unsigned int) (-(9223372036854775806LL)));
            arr_7 [i_0] [i_0] [(short)2] = ((/* implicit */long long int) ((_Bool) ((unsigned int) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672)))))));
            var_17 = ((/* implicit */long long int) arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1]);
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_0 + 2]))))), (arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 2])));
    }
    for (long long int i_2 = 3; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((((-6609198810648010914LL) - (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (var_7))))), (min((((/* implicit */long long int) arr_9 [i_2 - 1])), ((((-9223372036854775807LL - 1LL)) - (-6609198810648010902LL)))))));
        var_19 = ((/* implicit */signed char) ((long long int) max((arr_3 [i_2] [i_2 - 2] [i_2]), (((/* implicit */unsigned char) arr_9 [i_2])))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_5 [i_2 + 1])))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_21 |= ((((/* implicit */_Bool) min((var_3), (var_7)))) ? (((-4742639478788332211LL) | (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4782120869288105246ULL)) ? (-164396333) : (((/* implicit */int) (signed char)109))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_24 [(unsigned char)7] [i_3] [2LL] = (~(3LL));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((long long int) -305576584)))));
                            arr_25 [i_2 + 1] [i_4] [i_5 + 1] [i_6] = ((/* implicit */short) ((unsigned long long int) arr_6 [i_5 + 1] [i_2 - 3]));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_7] [i_5] [i_4] [i_3] [i_3] [i_2] = (+(arr_6 [i_5 - 1] [9ULL]));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19037))) ^ (2383620219998031774LL)));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_10))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_3] [i_4] [(_Bool)1] [(signed char)13] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)27445)))) ^ (((/* implicit */int) ((unsigned char) arr_20 [i_2] [i_3] [i_4] [i_5] [(signed char)16] [i_2])))));
                            var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((4742639478788332230LL), (((/* implicit */long long int) (unsigned short)1))))) ? (2147482624) : ((~(var_2)))))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned short) arr_11 [i_2 + 1]));
                            var_27 ^= (((-(((/* implicit */int) arr_18 [i_5] [i_5])))) ^ (((/* implicit */int) var_10)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) 1889073954U);
                            arr_38 [i_2 + 2] [12LL] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((unsigned long long int) (short)16384)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (((/* implicit */int) arr_35 [i_5 - 1] [i_3] [i_2] [(unsigned short)1] [i_2] [(signed char)5] [i_4])) : (((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) var_6)))))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            arr_41 [5ULL] [(unsigned char)16] [i_4] [i_5 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((var_12) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((_Bool) 18446744073709551611ULL))) : ((+(((/* implicit */int) arr_35 [i_11] [(unsigned short)7] [i_5] [i_4] [i_4] [i_3] [i_2])))))));
                            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) + (var_7)))));
                            arr_42 [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned int) arr_1 [i_2]);
                            arr_43 [i_2 - 2] [i_3] [i_4] [i_5 - 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) 9121708225045215041LL))))))) : (((/* implicit */int) arr_3 [i_4] [i_5] [i_11]))));
                        }
                    }
                } 
            } 
        } 
    }
}
