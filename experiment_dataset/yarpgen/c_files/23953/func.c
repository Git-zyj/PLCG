/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23953
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
    var_18 = ((/* implicit */unsigned int) ((9223372036854775808ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15629)))));
    var_19 = ((/* implicit */unsigned char) ((max((((((/* implicit */int) var_17)) >> (((((/* implicit */int) var_7)) - (17534))))), (((/* implicit */int) var_5)))) + (((/* implicit */int) var_17))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8)) & (((/* implicit */int) (short)-1545))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */int) arr_12 [i_0] [(unsigned char)8] [i_0])) < (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_11 [i_0] [3U] [i_0] [i_0] [i_0]))))))), (max((((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [4LL] [i_2] [i_1 - 1])) >= (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0]))))), (max((((/* implicit */short) arr_9 [i_0] [i_0] [i_0])), (arr_3 [1LL])))))));
                            arr_13 [i_0] [i_0] |= arr_2 [i_0];
                            var_22 = ((/* implicit */int) arr_2 [(short)10]);
                        }
                    } 
                } 
                arr_14 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_9 [i_0] [(unsigned char)8] [i_0])))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) & (((/* implicit */int) arr_11 [8ULL] [i_0] [i_0] [i_0] [(_Bool)1])))))))) ? (min((arr_2 [i_1]), (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned int) min((((/* implicit */int) max(((short)-5858), (((/* implicit */short) (_Bool)1))))), (382355664))))));
                var_23 |= ((/* implicit */short) arr_1 [9LL] [i_1]);
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((arr_7 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0]))))), (arr_10 [i_0] [i_0] [i_1 - 1]))))) % (max((((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [i_0])) + (23972))))), (((/* implicit */long long int) arr_10 [i_1 + 2] [5ULL] [i_0]))))));
            }
        } 
    } 
    var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) <= (((((/* implicit */int) (short)5488)) ^ (((/* implicit */int) (short)-4922)))))))) + (((var_9) & (((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_3))))))));
}
