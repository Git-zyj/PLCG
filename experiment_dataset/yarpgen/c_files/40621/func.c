/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40621
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-1683059795657875413LL)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) <= (((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_18 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0])))) - (((/* implicit */int) ((_Bool) ((arr_7 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))))));
                    var_19 = arr_8 [i_1] [i_1] [i_1] [i_0];
                }
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) var_4);
}
