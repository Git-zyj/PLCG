/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51196
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
    var_20 = ((/* implicit */unsigned char) (+(((min((((/* implicit */unsigned long long int) (unsigned short)31749)), (13835137598390099107ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_21 = (~(((((/* implicit */_Bool) -1374154310)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31424))) : (6218807666671336282ULL))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (var_13)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */unsigned long long int) 1374154309)) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))))) ^ (7598846842371268143ULL)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_5 [i_0]))));
                var_24 *= ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (var_16)))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (arr_4 [i_0] [i_1] [i_0])))), (var_2)));
            }
        } 
    } 
}
