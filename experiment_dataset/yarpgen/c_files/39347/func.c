/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39347
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
    var_16 = ((/* implicit */unsigned short) (unsigned char)250);
    var_17 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) 676078918);
                var_18 = ((/* implicit */short) (unsigned char)3);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] = -733394663381149402LL;
                            var_19 = ((/* implicit */unsigned long long int) (unsigned char)5);
                        }
                    } 
                } 
                arr_14 [i_1] [i_1] = 1884086996924529120LL;
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) -1051755513);
}
