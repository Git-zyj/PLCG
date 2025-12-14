/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230743
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
    var_16 *= ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (!(((var_0) && (arr_6 [i_0 + 4] [i_0] [i_0 + 4])))));
                                var_18 = ((/* implicit */int) var_7);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4128927046U)) || (((/* implicit */_Bool) 4128927032U))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0 + 4] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0]);
                    var_20 *= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [21U] [i_1] [5U])) + (var_4)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_10))))))));
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 3721256454U))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_0 + 2] [7] [i_0])))) : (((var_12) ? (((/* implicit */long long int) (-(arr_3 [i_0 - 1] [i_2])))) : (arr_9 [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) 1693765876723992722ULL);
}
