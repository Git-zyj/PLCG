/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31896
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (short)13065);
                arr_6 [i_1] [i_0] = ((/* implicit */int) var_2);
                var_20 += ((/* implicit */_Bool) arr_0 [i_0]);
                arr_7 [i_1] = ((/* implicit */short) arr_0 [i_1 + 1]);
            }
        } 
    } 
    var_21 = var_10;
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (((-6543996982349258220LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
