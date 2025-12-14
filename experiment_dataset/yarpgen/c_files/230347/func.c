/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230347
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
    var_17 |= ((/* implicit */short) (((+(-4333247920686757585LL))) >= (((/* implicit */long long int) (((~(((/* implicit */int) (_Bool)1)))) - (var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 4333247920686757584LL))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((+(((4333247920686757595LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (signed char)88)))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) -4333247920686757585LL))))) <= (8110918766630171792LL)));
                            var_21 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) -4333247920686757565LL)))))));
                            var_22 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1971908814U)))))) <= (((-637648479540869263LL) - (-5710741911527700432LL))));
                        }
                    } 
                } 
                var_23 = (~(((unsigned long long int) ((((/* implicit */int) (unsigned short)49597)) > (((/* implicit */int) (short)20427))))));
            }
        } 
    } 
}
