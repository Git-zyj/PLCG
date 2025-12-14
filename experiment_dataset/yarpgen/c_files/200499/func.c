/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200499
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */unsigned long long int) ((int) var_4));
                    var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_7 [i_0])))))) ? (max((((/* implicit */long long int) ((((/* implicit */long long int) var_10)) > (var_2)))), ((-(var_2))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)31209)))))));
                    var_14 = ((/* implicit */long long int) (unsigned short)31209);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_5))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34320))) <= (arr_4 [(short)12])))), (((var_4) + (var_4)))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */short) ((var_3) / (var_3)));
}
