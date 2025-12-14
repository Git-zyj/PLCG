/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48184
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_3) / (13179505850375529516ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (var_5))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_6)), (var_3))))))));
    var_11 = (((~(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) 268435424)) : (1774930426U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0])) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))))) : (min((((1774930426U) / (2520036870U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(_Bool)1])) & (((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_13 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
                    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) arr_2 [i_0]));
                    arr_6 [i_0] [4] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [4ULL]))) | (arr_4 [i_2] [i_2] [i_2])))));
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                {
                    var_15 = ((/* implicit */signed char) (+(12854236533943905932ULL)));
                    var_16 *= ((/* implicit */_Bool) arr_8 [6U] [i_1] [i_3 - 2]);
                }
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((unsigned int) arr_7 [i_0] [i_1] [i_4 + 1])), (((/* implicit */unsigned int) arr_2 [i_0]))))), (((long long int) ((unsigned char) arr_12 [i_0] [(unsigned char)2])))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [i_4] [i_1] [i_0]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0])), (2520036864U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_0])), ((unsigned short)30802))))))) : ((-(((var_2) - (((/* implicit */unsigned long long int) var_8))))))));
                    var_18 += ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_1] [(_Bool)0]))) : (var_2))), (((/* implicit */unsigned long long int) max((arr_5 [i_0] [(unsigned char)4] [(unsigned char)4]), (((/* implicit */unsigned char) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_9 [i_4])), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) << (((/* implicit */int) arr_5 [(unsigned char)0] [(unsigned char)0] [i_4 - 1]))))))))));
                    var_19 = ((/* implicit */int) arr_12 [i_0] [(unsigned short)2]);
                    arr_14 [(short)0] [i_0] [(short)0] = ((/* implicit */int) ((_Bool) var_0));
                }
            }
        } 
    } 
}
