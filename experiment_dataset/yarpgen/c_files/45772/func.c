/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45772
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_8 [i_1] = ((/* implicit */short) var_14);
                            var_17 = ((/* implicit */unsigned short) ((2981950709U) > (2981950688U)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-16195)) ? (4694115676102332867ULL) : (((/* implicit */unsigned long long int) 1065353216))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (var_4)))));
                var_20 -= ((/* implicit */unsigned short) ((unsigned long long int) max((arr_2 [i_0] [i_1 + 1] [i_1]), (arr_2 [i_0] [i_0] [i_1 - 1]))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) min(((~(var_14))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)1484)) : (((/* implicit */int) var_13))))))) ? (1313016608U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))));
    var_22 |= ((/* implicit */int) var_12);
}
