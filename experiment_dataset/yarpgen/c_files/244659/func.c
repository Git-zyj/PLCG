/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244659
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 -= ((/* implicit */short) var_4);
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 *= ((/* implicit */short) arr_5 [i_2]);
                var_19 ^= ((/* implicit */long long int) (((-(((/* implicit */int) max((arr_6 [i_2]), (arr_2 [i_2])))))) > (((/* implicit */int) arr_2 [i_3]))));
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (short)-21190))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_15), (((/* implicit */unsigned char) arr_2 [i_3]))))) + ((+(((/* implicit */int) (signed char)0))))))) ? (1419118174) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1]))));
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) (~(var_2)))), ((~(6967153117963807099ULL))))));
}
