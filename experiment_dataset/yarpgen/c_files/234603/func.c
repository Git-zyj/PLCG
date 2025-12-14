/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234603
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
    var_14 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (unsigned char)0))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [(unsigned short)9] [i_2] [i_3]), (arr_5 [i_0] [i_0 - 3] [i_0])))) ? ((-(((/* implicit */int) arr_5 [14ULL] [i_1 - 2] [i_1 - 3])))) : ((~(((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))));
                            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])) > (((/* implicit */int) var_13))))), (min((((/* implicit */short) arr_2 [i_0 - 1] [i_0])), ((short)-32749)))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 3] [i_0] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((arr_6 [i_3] [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 3])))) : (min((arr_6 [i_2] [i_1 - 2] [i_0] [i_3]), (((/* implicit */unsigned long long int) (unsigned char)252))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
