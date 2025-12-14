/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44385
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
    var_11 *= ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 + 2]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_5))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */short) arr_3 [i_1] [i_1 - 1])), (var_5))))));
            }
        } 
    } 
    var_12 = ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32614))));
    var_13 = ((/* implicit */unsigned char) (((-(((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)230)))))) / ((((-(((/* implicit */int) var_2)))) - (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
}
