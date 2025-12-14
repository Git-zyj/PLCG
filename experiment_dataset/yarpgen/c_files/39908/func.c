/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39908
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) var_13);
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 8; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1 + 3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 + 3])) ? (((((/* implicit */_Bool) arr_0 [i_1 + 4] [i_2 - 1])) ? (arr_0 [i_1 + 2] [i_2 + 3]) : (arr_0 [i_1 + 2] [i_2 + 3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_2 - 3])))))));
                            var_16 += ((/* implicit */short) var_2);
                        }
                    } 
                } 
                var_17 = arr_7 [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) arr_19 [i_5] [6U] [i_1] [i_1] [(_Bool)1] [i_0])), (var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9))))))))) : (max((max((((/* implicit */long long int) var_5)), (var_6))), (((/* implicit */long long int) min((var_13), (var_7))))))));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2])))) >> (((((/* implicit */int) max((arr_14 [i_1 - 1]), (arr_14 [i_1 + 1])))) - (207)))));
                            arr_21 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_15 [i_4] [(unsigned char)3] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_4])) : (((/* implicit */int) arr_1 [i_4] [i_0])))), (((/* implicit */int) max((arr_1 [i_1 + 1] [i_1 + 1]), (((/* implicit */short) arr_15 [i_0] [i_1 + 1] [i_4])))))));
                            arr_22 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_0])) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */short) var_7)), (var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = var_2;
    var_21 = ((/* implicit */int) var_2);
    var_22 ^= ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) != (((/* implicit */int) var_2)))))));
}
