/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213761
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
    var_20 = max((((/* implicit */unsigned long long int) var_14)), (min((((var_18) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (+(4169409540U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0]);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 125557756U)) ? (var_0) : (((/* implicit */int) (short)28389))))) ? (max((4169409530U), (((/* implicit */unsigned int) (short)10421)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] = max((max((((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_0])), (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [12] [i_0] [i_0]))) : (4169409539U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4169409523U)) ? (((/* implicit */int) (short)2047)) : (-1383996259)))));
            }
        } 
    } 
}
