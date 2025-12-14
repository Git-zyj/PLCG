/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238589
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
    var_14 = ((/* implicit */unsigned char) var_13);
    var_15 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
                var_17 &= ((/* implicit */_Bool) ((long long int) (unsigned char)23));
                arr_6 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_3))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            {
                var_19 |= ((/* implicit */_Bool) (~((~(arr_10 [i_3 - 2] [i_3 - 3])))));
                var_20 *= ((/* implicit */short) var_5);
            }
        } 
    } 
}
