/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202684
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 9223372036854775807LL))) ? ((+((-9223372036854775807LL - 1LL)))) : ((-9223372036854775807LL - 1LL))));
                                arr_14 [i_0] [i_1] [i_2] = -9223372036854775807LL;
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-6596391386449088384LL)))) ? ((+(-9223372036854775782LL))) : (min((-9223372036854775803LL), (((/* implicit */long long int) var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) -9223372036854775783LL)))))) : ((+(((/* implicit */int) ((unsigned short) -9223372036854775805LL)))))));
                }
            } 
        } 
    } 
}
