/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243498
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
    var_11 = ((/* implicit */unsigned short) (+(-414066081)));
    var_12 ^= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [8ULL])) % ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0 + 3])))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((min((16348871602096843187ULL), (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)35284)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_3), (((/* implicit */unsigned int) (-(-1579766810))))));
    var_15 -= ((/* implicit */int) var_9);
}
