/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236358
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
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_18 ^= min((-3865584299327277806LL), (((arr_5 [i_0] [i_1] [16LL] [i_3]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 3] [i_2] [i_0 - 1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((_Bool) ((_Bool) ((var_11) - (arr_7 [14LL] [i_1] [i_1])))));
                            var_20 = ((/* implicit */long long int) max((var_20), (max((var_3), (((/* implicit */long long int) ((((/* implicit */int) var_5)) == (((((/* implicit */int) var_13)) - (((/* implicit */int) (_Bool)1)))))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(7492977909899212095LL)))))))))));
                            var_22 *= ((/* implicit */_Bool) (-(((7492977909899212095LL) >> (((-3865584299327277809LL) + (3865584299327277829LL)))))));
                            var_23 = (-(((long long int) ((arr_1 [i_0 + 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    var_24 = ((/* implicit */long long int) min((var_24), (arr_0 [i_1 + 3] [13LL])));
                }
            } 
        } 
    } 
}
