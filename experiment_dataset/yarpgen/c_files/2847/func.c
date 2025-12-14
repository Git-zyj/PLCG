/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2847
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) (~(2327821781U)));
                arr_5 [i_0] [i_0] [0U] = ((/* implicit */int) (-(12298639883920884170ULL)));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12925))))) ? (max(((+(arr_1 [i_0]))), (((/* implicit */unsigned int) (unsigned char)8)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_1 - 1]))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max(((~(max((((/* implicit */unsigned long long int) (short)-12901)), (var_4))))), (var_11)));
    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) min(((short)-12934), ((short)-23267))))));
    var_17 = ((/* implicit */unsigned long long int) (+(((int) ((var_4) == (((/* implicit */unsigned long long int) -32692458389345625LL)))))));
}
