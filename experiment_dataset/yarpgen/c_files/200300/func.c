/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200300
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
    var_11 &= ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0))))) || (var_8));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((0) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7)))))));
                var_12 = ((/* implicit */int) (_Bool)0);
                var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((arr_2 [i_0]), (((/* implicit */signed char) (_Bool)0)))), (max((arr_1 [i_1]), (((/* implicit */signed char) arr_3 [i_1] [i_0 + 2] [i_1 + 1]))))))) ? ((+(((((/* implicit */_Bool) -486597113)) ? (5327106701735720624LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21440))))))) : (max(((+(var_5))), (((/* implicit */long long int) arr_4 [i_1] [i_0 + 2]))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19225)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3182723784361178759LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_9);
}
