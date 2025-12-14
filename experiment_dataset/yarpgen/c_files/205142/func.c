/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205142
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
    var_15 = ((/* implicit */signed char) (-((-((+(((/* implicit */int) (signed char)-4))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-((+((-(-2622485363298132682LL))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-((-((~(((/* implicit */int) arr_10 [(signed char)0] [i_2] [i_2] [i_2] [i_2] [(signed char)1]))))))));
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-6858))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */short) (+((-(((/* implicit */int) (signed char)3))))));
                    arr_16 [i_2] = (+((+((+(2622485363298132688LL))))));
                    var_20 ^= ((/* implicit */signed char) (+((-((+(((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), ((+((-((+(var_3)))))))));
}
