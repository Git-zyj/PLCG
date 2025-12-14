/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227279
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20942)))))))), (((long long int) max((((/* implicit */unsigned long long int) var_12)), (4611684918915760128ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) ((short) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((4611684918915760128ULL) > (((/* implicit */unsigned long long int) 17372472U))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = min((((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1])) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 1])))), (((/* implicit */int) (!(((_Bool) 4611684918915760128ULL))))));
                            var_20 = ((/* implicit */unsigned int) 13835059154793791488ULL);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 17372472U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) var_12)))));
}
