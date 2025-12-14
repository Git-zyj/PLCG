/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206250
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
    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (+(-6952251254460045687LL)));
                    var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])))))));
                    arr_9 [i_0] = ((/* implicit */short) max((-6952251254460045674LL), (((/* implicit */long long int) arr_1 [i_2]))));
                    arr_10 [17U] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(18446744073709551615ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((6952251254460045686LL), (((/* implicit */long long int) (short)(-32767 - 1)))));
}
