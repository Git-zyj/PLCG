/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44331
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
    var_20 = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551596ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_10)))))) >> (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_1 + 3] [i_1]))))));
                arr_4 [i_0] [(short)13] = min(((-((+(((/* implicit */int) arr_0 [i_1])))))), (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((var_15) > (var_10)))), ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))))) == (((((/* implicit */int) (_Bool)1)) << ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) (-(((var_17) ? (((/* implicit */int) (short)14538)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)4095)))))) : (((((var_13) <= (((/* implicit */int) (unsigned short)65535)))) ? ((-(var_13))) : (((int) var_3)))));
}
