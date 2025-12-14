/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198392
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
    var_12 &= ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2])))));
                arr_4 [i_0] [i_0] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))) + (2147483647))) << ((((((+(((/* implicit */int) (short)(-32767 - 1))))) + (32792))) - (24)))))) : (((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))) - (2147483647))) + (2147483647))) << ((((((+(((/* implicit */int) (short)(-32767 - 1))))) + (32792))) - (24))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((-6400476741603685411LL), (-6400476741603685410LL)));
            }
        } 
    } 
    var_14 *= ((/* implicit */short) var_11);
    var_15 = ((/* implicit */short) (+(((/* implicit */int) ((-6400476741603685425LL) == ((+(-6400476741603685430LL))))))));
}
