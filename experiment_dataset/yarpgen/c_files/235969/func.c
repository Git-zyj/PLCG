/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235969
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_12)))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */int) arr_4 [i_0]))))));
                var_15 = ((/* implicit */unsigned short) arr_3 [i_0]);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) max(((short)19072), (((/* implicit */short) (_Bool)1))))) ? (min((((/* implicit */unsigned int) var_14)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))) == (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) min(((short)-21484), (((/* implicit */short) (unsigned char)113)))))))))))));
            }
        } 
    } 
    var_17 = var_2;
    var_18 = ((/* implicit */unsigned int) var_4);
}
