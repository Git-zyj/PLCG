/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27366
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_11 = min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 4]))))), (0LL));
                            var_12 = ((/* implicit */int) var_7);
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_2))), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_2] [i_2] [i_2 + 2] [i_2 - 2])))))) : (((((/* implicit */int) var_7)) >> (((8769313746571223488ULL) - (8769313746571223487ULL))))))))));
                        }
                    } 
                } 
                var_14 |= ((/* implicit */short) var_2);
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_5);
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (max(((~(-4859513935778898020LL))), (((/* implicit */long long int) ((unsigned short) var_7)))))));
}
