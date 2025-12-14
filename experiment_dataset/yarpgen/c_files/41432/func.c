/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41432
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_14 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_13))), ((-(12884901888LL)))))));
                            var_15 &= ((/* implicit */unsigned int) ((var_0) < (((/* implicit */long long int) (~(((/* implicit */int) (short)18117)))))));
                        }
                    } 
                } 
                var_16 &= ((/* implicit */signed char) (((((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [6U] [i_1] [i_0])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18098)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_4);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) var_5)) : (((max((((/* implicit */long long int) (short)18117)), (-12884901889LL))) & (min((((/* implicit */long long int) (short)18098)), (var_0)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_2))))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_10))))));
}
