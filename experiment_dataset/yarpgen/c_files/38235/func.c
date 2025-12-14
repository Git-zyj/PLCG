/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38235
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned short) (short)16128)), (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */int) (signed char)24);
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3806590094U)), (1008357517602509693LL)))) ? (((long long int) (short)4557)) : (min((((/* implicit */long long int) (signed char)96)), (-1165494845903000466LL)))));
                                arr_12 [i_4] [17U] [i_2 - 4] [i_2] [i_1] [i_1] [i_0] = (signed char)69;
                            }
                        } 
                    } 
                } 
                arr_13 [14] [14] = ((/* implicit */int) ((short) ((_Bool) (_Bool)1)));
                arr_14 [i_1] = ((int) (!(((/* implicit */_Bool) (short)-16128))));
                var_20 = ((/* implicit */int) (+(max((((/* implicit */long long int) (short)-22941)), (1008357517602509680LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-1421526864174374857LL)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)345)), (7)))) : (var_15)))) ? (((long long int) 4182938813422040200LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(var_4))))))))));
}
