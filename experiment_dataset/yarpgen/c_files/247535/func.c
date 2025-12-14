/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247535
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
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned short) arr_1 [i_0 + 4] [i_1 + 1]))));
                var_10 = ((/* implicit */short) max(((-(((/* implicit */int) arr_1 [i_1] [i_0])))), (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (short)15335)) >> (((/* implicit */int) (_Bool)1))))))));
                var_11 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [(unsigned short)14])) - (((/* implicit */int) min((((/* implicit */signed char) arr_3 [(signed char)14] [i_1])), (arr_0 [i_0])))))) >= (((/* implicit */int) arr_2 [(_Bool)0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned short) var_1);
                            var_13 = ((short) max((((/* implicit */int) min((var_5), (((/* implicit */short) arr_3 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1]))))));
                            var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_5 [i_0 + 2] [i_1] [i_2] [i_1]), (arr_5 [i_1] [i_2] [i_0] [i_1])))), (((unsigned short) arr_9 [i_3] [i_1] [i_2] [i_1] [i_0]))));
                            arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = var_8;
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_3))))));
}
