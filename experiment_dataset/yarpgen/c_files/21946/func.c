/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21946
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1089059803U) >> (((((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) | (1002504300300242213LL))) - (1002504300300242283LL)))))) ? ((~((~(((/* implicit */int) (unsigned short)31650)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)42370)) % (-2096068755)))))))));
                    var_21 = ((/* implicit */unsigned int) 1002504300300242213LL);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) (unsigned char)110)), (((/* implicit */long long int) arr_2 [i_1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] [1LL] [i_2] = ((/* implicit */long long int) (unsigned short)33886);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)238))))) ? (((((/* implicit */int) (_Bool)0)) << (((-75275243) + (75275252))))) : (((/* implicit */int) ((((/* implicit */long long int) var_19)) > (9160328097395940632LL)))))) ^ (((int) ((var_5) * (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 24; i_4 += 2) 
        {
            {
                arr_14 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)87))));
                var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) <= (arr_8 [9ULL]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) != (9160328097395940632LL)))) : (((/* implicit */int) ((signed char) (_Bool)1))))) <= (((((/* implicit */int) arr_11 [i_4 - 2])) >> (((9223372036854775807LL) - (9223372036854775794LL)))))));
            }
        } 
    } 
}
