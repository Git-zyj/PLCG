/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209804
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (var_17) : (arr_4 [i_0] [i_0]))) : (((/* implicit */long long int) (~(var_0))))))) ? (((((/* implicit */unsigned long long int) arr_1 [i_1 + 1])) & (arr_3 [i_1 - 1]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (var_0)))) : (((unsigned long long int) var_8))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1]) & (((/* implicit */long long int) var_0))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_12))));
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) (unsigned short)53195)) ? (((/* implicit */int) (unsigned short)12341)) : (((/* implicit */int) (unsigned short)12341))))));
                        }
                        var_25 = ((int) (+(arr_9 [i_2] [i_1 + 1] [i_2])));
                        var_26 = ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]) & (arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1]))) : (((unsigned long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 1728050134)) ? (13615639277976274133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9375)))));
                            var_28 = ((/* implicit */unsigned short) var_8);
                        }
                        var_29 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_3])) ? (arr_2 [i_2]) : (var_8)))) ? (max((var_8), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_13))))))));
                    }
                    var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) max((var_5), (arr_5 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_31 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((unsigned long long int) var_10))));
    var_32 += ((/* implicit */int) (~((((~(var_10))) & (((/* implicit */long long int) ((((/* implicit */int) var_18)) & (var_0))))))));
}
