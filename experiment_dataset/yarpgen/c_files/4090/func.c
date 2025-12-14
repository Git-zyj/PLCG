/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4090
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] = ((/* implicit */int) ((unsigned int) (+((+(((/* implicit */int) (signed char)-10)))))));
                            var_11 = ((/* implicit */signed char) arr_12 [i_0] [(_Bool)1] [i_2] [i_0]);
                        }
                    } 
                } 
                arr_14 [i_0] [16LL] [i_1] |= (((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)15174)))))) / (((((/* implicit */_Bool) ((arr_1 [0ULL] [i_1]) / (((/* implicit */int) arr_6 [i_1]))))) ? (max((((/* implicit */int) var_5)), (arr_4 [12U] [i_1] [i_0]))) : (arr_12 [i_0] [i_0] [i_1] [i_1]))));
                var_12 = ((/* implicit */unsigned int) ((max(((-(((/* implicit */int) (short)15174)))), (((/* implicit */int) arr_3 [i_0])))) / (((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_0] [i_0] [i_1])) ? (var_2) : (((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) (short)15161);
    var_14 ^= ((/* implicit */int) ((((/* implicit */int) ((((15180775019140388755ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >= (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) == (((/* implicit */int) ((((/* implicit */int) (short)-15175)) > (((/* implicit */int) (short)2797)))))));
    var_15 = max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (short)15174)));
}
