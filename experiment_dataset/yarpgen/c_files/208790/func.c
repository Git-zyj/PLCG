/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208790
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
    var_14 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [(signed char)4] = ((/* implicit */signed char) 8734724126615278862LL);
                var_15 = ((/* implicit */long long int) (~(1924252323)));
                arr_8 [i_0] [i_1] [4LL] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) -5125442770521453207LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))) < (arr_1 [i_0])));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
                var_17 -= ((/* implicit */unsigned short) (_Bool)0);
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))) * (((var_4) + (var_1)))))));
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)0);
}
