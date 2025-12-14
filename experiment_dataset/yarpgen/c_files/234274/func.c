/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234274
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
    var_10 = ((/* implicit */short) ((((min((((/* implicit */int) var_7)), (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6)))))) + (2147483647))) >> (((((/* implicit */int) var_1)) + (3844)))));
    var_11 = ((/* implicit */short) min((var_11), (max((var_0), (((/* implicit */short) var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) max((min((arr_0 [(short)7]), (((/* implicit */short) var_2)))), (((/* implicit */short) ((var_9) > (((/* implicit */int) var_2)))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_1] [(unsigned char)17] [i_3]);
                            var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned char) (short)-17077))) ? (min((((/* implicit */int) var_4)), (var_9))) : (((/* implicit */int) (short)-17077)))), (max((min((((/* implicit */int) var_6)), (arr_8 [i_0] [19] [i_2] [i_2]))), (((/* implicit */int) (unsigned char)20))))));
                            var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_7 [i_2])) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_4))))));
                            var_15 = var_8;
                        }
                    } 
                } 
            }
        } 
    } 
}
