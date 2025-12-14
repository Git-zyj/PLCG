/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46846
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [(signed char)11] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)111), ((signed char)(-127 - 1))))) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) (signed char)0)) : (var_8)));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (signed char)19))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) + (2428857034376843372ULL)));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)-14)), (max((var_7), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-1)), (-11))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (30U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))))) ? (((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 3776198292U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_3] [i_3] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3])))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                var_15 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((short) 17628288200438063486ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [(_Bool)1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))))) * (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)64))))) ? (var_9) : (((/* implicit */unsigned int) ((2147483636) - (((/* implicit */int) (signed char)49)))))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) 2147483647)) : ((~((~(arr_10 [i_3] [i_3])))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)13)))) ? (var_6) : (((/* implicit */unsigned long long int) max((arr_15 [i_3 + 1] [i_3] [i_4]), (arr_15 [i_4] [0ULL] [i_3 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)255));
}
