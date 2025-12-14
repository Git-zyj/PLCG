/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3066
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = (~(((((/* implicit */_Bool) 7851286141373733438ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */int) (unsigned short)17425)))));
                var_12 = min((((/* implicit */int) (((+(3))) <= (((/* implicit */int) arr_1 [i_0]))))), (-1234899377));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 1]);
            }
        } 
    } 
    var_13 = ((/* implicit */short) -36202474);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) 1234899377)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15590))) : (var_7)))))) ? (max((var_8), ((+(var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_1))))));
}
