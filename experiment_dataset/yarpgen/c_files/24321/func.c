/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24321
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
    var_20 = var_7;
    var_21 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) (signed char)0);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 3; i_4 < 12; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_2] [(signed char)14] = ((/* implicit */long long int) var_14);
                            }
                            /* LoopSeq 1 */
                            for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                            {
                                var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 974754210408006846LL)) ? (arr_15 [i_0] [i_0] [i_2] [i_1] [i_5 + 1]) : (var_16))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3])) + (((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1])))) : ((-(((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 3] [i_1] [i_1])))))))));
                            }
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (((signed char) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) arr_14 [i_1] [i_1 - 4] [i_1 - 4] [i_1 - 1] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
}
