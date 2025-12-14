/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43316
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
    var_20 -= ((/* implicit */unsigned short) 2078911397);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) max((((/* implicit */long long int) var_5)), (((((long long int) (short)7)) + (((/* implicit */long long int) -2078911377))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1998306355482590762ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775791LL))))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
                }
                var_23 = arr_7 [i_1] [i_1] [i_1];
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((long long int) var_12)))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) 222099057)) ? (1018806974120013153ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((2078911392) < (((/* implicit */int) arr_3 [i_1 + 1])))))))))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [(signed char)4]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
