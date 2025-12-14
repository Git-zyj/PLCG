/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211293
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((2347576615U), (((/* implicit */unsigned int) ((unsigned char) ((2347576615U) * (2347576615U))))))))));
    var_16 &= (-(min((((/* implicit */unsigned int) (-(var_5)))), (max((((/* implicit */unsigned int) (short)10622)), (3668676160U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [8] [(unsigned short)9]);
                var_17 = ((/* implicit */unsigned long long int) 3668676157U);
                var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(8979570882940928063LL)))) ? (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) arr_0 [i_0]))))) : (max((0ULL), (((/* implicit */unsigned long long int) 2347576613U))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)65)) ? (((((/* implicit */_Bool) min((arr_5 [i_0] [i_1]), (626291162U)))) ? (max((3668676138U), (((/* implicit */unsigned int) (short)-16202)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))))) : (((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */int) arr_4 [i_0] [4U])))))));
                var_20 = ((/* implicit */_Bool) ((((_Bool) 9181794369674769261ULL)) ? (3668676164U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 11334677724051566273ULL);
    var_22 ^= ((((/* implicit */_Bool) ((unsigned short) min((4294967293U), (((/* implicit */unsigned int) var_2)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)52250)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_0))), (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) var_11)))))))));
}
