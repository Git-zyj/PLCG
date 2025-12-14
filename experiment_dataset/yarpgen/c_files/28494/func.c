/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28494
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
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((4785439417340768367ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) % (((/* implicit */int) (short)-22950))));
    var_22 = var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (arr_0 [i_0 + 3])))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64419))) : (max((((/* implicit */unsigned int) var_8)), (arr_2 [(short)6]))))) : (arr_2 [i_1 + 2])));
                var_24 &= ((((/* implicit */_Bool) (unsigned short)1117)) || ((_Bool)1));
                arr_5 [i_0 + 3] [i_1 - 1] [i_0] = ((/* implicit */signed char) (unsigned char)48);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1 + 1] [(unsigned short)4] [i_0] = (-((-(((/* implicit */int) arr_6 [i_0])))));
                    arr_11 [i_0] [7LL] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_7 [i_0 + 4] [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0])))), (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 1] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_0 + 2] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_1 [i_0] [i_3]))))));
                        var_26 = ((/* implicit */unsigned short) max((arr_2 [i_2]), (arr_2 [i_1 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_0 + 2] [4ULL]))) & (arr_2 [8ULL])))));
                            arr_16 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) arr_14 [i_0 + 3] [i_2] [i_2] [i_3] [i_1 - 1] [i_4 - 1] [i_1 - 1]))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (signed char)4)), (max((arr_4 [i_1 + 2] [i_0 - 1] [i_0 + 1]), (arr_4 [i_1 + 1] [i_0 + 2] [i_0 + 2])))));
                            var_29 ^= ((/* implicit */unsigned long long int) arr_9 [(unsigned char)10] [i_0 + 4]);
                        }
                        arr_21 [i_3] [i_1 + 1] [i_0 + 4] [i_0] = ((/* implicit */short) min((min((min((arr_17 [(_Bool)1] [i_1 + 1] [i_2] [i_0]), (11709671177840982564ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1128)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [(unsigned short)14] [i_2] [2ULL] [i_0 + 1]))))))))));
                        arr_22 [5ULL] [i_0] [(unsigned short)0] [i_0] [i_0 - 1] = min((arr_17 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0]), (arr_17 [i_0 + 4] [i_0 - 1] [i_0 - 1] [i_0]));
                    }
                }
                for (unsigned short i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) arr_2 [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 3] [i_6] [i_0 - 1] [i_0 + 3] [8U]))) : ((-(min((((/* implicit */unsigned long long int) arr_14 [i_6 + 1] [i_6 + 1] [i_1 + 1] [i_0 + 2] [9LL] [i_0 + 1] [i_0 - 1])), (6402671489629458524ULL)))))))));
                    var_31 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)13665)), (max((((/* implicit */long long int) (unsigned short)61440)), (-8866752142915174033LL)))));
                    var_32 = ((/* implicit */unsigned short) min((max((max((var_15), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_7 [i_0 + 4] [(_Bool)1] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65532))))), (min((((/* implicit */unsigned int) var_18)), (arr_9 [i_0 + 3] [(unsigned short)14]))))))));
                }
            }
        } 
    } 
}
