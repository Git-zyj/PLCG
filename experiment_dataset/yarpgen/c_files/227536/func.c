/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227536
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) 1112524436);
                var_10 -= min((396572529U), (((/* implicit */unsigned int) -1112524437)));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)204)), ((-9223372036854775807LL - 1LL))))) : (7757319132858802947ULL))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) var_1))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (3522594948432633117ULL)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)56)))))))));
}
