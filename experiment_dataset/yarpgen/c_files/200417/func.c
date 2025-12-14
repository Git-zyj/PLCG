/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200417
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
    var_16 = ((/* implicit */long long int) 9899487886052486187ULL);
    var_17 = ((/* implicit */unsigned char) 7978397675970217036ULL);
    var_18 = ((/* implicit */long long int) (unsigned char)0);
    var_19 = ((/* implicit */short) (-(6095882485554777254LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (var_8)));
                var_21 ^= ((/* implicit */unsigned char) (-(var_15)));
                var_22 = ((/* implicit */signed char) var_13);
                arr_8 [i_0] [i_0] = var_9;
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                            arr_15 [i_0] [5LL] [i_2] [i_0] = var_3;
                        }
                    } 
                } 
            }
        } 
    } 
}
