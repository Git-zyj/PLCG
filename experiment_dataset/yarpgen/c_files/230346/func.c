/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230346
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
    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4456880078376021219ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)51002)))) % (min((((/* implicit */long long int) (signed char)27)), (var_13))))) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))) >> (((((((/* implicit */_Bool) (unsigned char)1)) ? (8444249301319680LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-8114))))) - (8444249301319629LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2896421296U)) ? (((/* implicit */int) (unsigned short)43572)) : (((/* implicit */int) (unsigned short)4017))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) & (-8444249301319680LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? ((+(((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */signed char) max((arr_1 [i_3 + 1]), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-5517))))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_7)))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) 2);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 8444249301319669LL)) ? (((/* implicit */int) max((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0]))))) : (((-1213015809) / (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_24 = var_8;
}
