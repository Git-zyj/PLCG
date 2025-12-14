/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194214
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
    var_15 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4590)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) var_4)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] = ((/* implicit */unsigned long long int) (short)28114);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((_Bool) var_14))), ((short)28103))))) + (((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)28134)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22472)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1 - 2] [i_2] [14]), (((/* implicit */unsigned short) arr_6 [i_2] [i_1] [i_0] [i_0]))))) || (((/* implicit */_Bool) (short)-28134))))) & (((/* implicit */int) min((arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]), (((/* implicit */short) var_11)))))));
                    arr_12 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1]))))));
                }
            } 
        } 
    } 
}
