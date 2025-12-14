/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213074
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (1991011825U)))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))))), (((((((/* implicit */long long int) var_5)) % (-33162267307093536LL))) << (((1108477840) - (1108477835)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))));
                var_13 = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_1))))) && (((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */signed char) min((max((var_5), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(0U)))))))));
                            var_16 *= ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0] [i_0] [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
}
