/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230083
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
    var_17 *= ((/* implicit */unsigned short) var_16);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) + ((-(arr_1 [i_0 + 1])))))) ? ((~(((arr_5 [i_0] [i_0]) >> (((((/* implicit */int) (unsigned char)205)) - (196))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned char)50)))) == ((-(((/* implicit */int) var_8))))))))));
                var_18 = var_5;
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 293396495U)) ? (((/* implicit */int) ((short) (short)-32228))) : (min((2147483647), (((var_1) & (((/* implicit */int) var_5))))))));
    var_20 *= var_8;
}
