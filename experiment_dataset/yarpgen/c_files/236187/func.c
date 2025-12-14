/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236187
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
    var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) (_Bool)0)))))));
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) 485546831U);
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((_Bool) var_12))) != ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))) ? ((+((~(13378597334405835391ULL))))) : (min((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))));
                var_16 = ((/* implicit */_Bool) max((((int) (+(((/* implicit */int) var_2))))), (((/* implicit */int) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_2)))) <= (((/* implicit */int) var_3)))))));
}
