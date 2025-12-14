/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190919
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
    var_16 = ((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((short) 1922698735U)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 = min(((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((8719976540820607818LL), (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1]))) < (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    var_18 *= ((/* implicit */short) (~(arr_0 [i_1])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */long long int) var_13);
}
