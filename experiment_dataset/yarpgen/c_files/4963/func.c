/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4963
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) arr_3 [i_1]);
                var_19 = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((min((arr_8 [i_0] [i_2 + 2] [i_1] [i_0]), (((/* implicit */long long int) min((arr_1 [i_3]), (((/* implicit */int) var_4))))))), (var_13)));
                            var_21 ^= ((/* implicit */unsigned short) 514539129152004796LL);
                            var_22 = ((/* implicit */signed char) var_10);
                            var_23 ^= ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_4)) == (arr_1 [i_3])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (var_6)))))), (((((/* implicit */_Bool) (+(var_17)))) ? (((arr_8 [i_1] [i_2] [i_1] [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43748))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 |= ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_1))))))));
    var_25 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
}
