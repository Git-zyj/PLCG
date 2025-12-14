/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45396
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned short) var_0);
                    var_11 ^= ((/* implicit */_Bool) var_4);
                    var_12 = ((min((arr_3 [i_1] [(signed char)3]), (min((((/* implicit */unsigned int) var_5)), (arr_3 [(unsigned char)6] [(unsigned char)6]))))) + (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26863)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [14ULL])) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (var_7))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_7)) + (31246)))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [12U])) / (((/* implicit */int) arr_10 [i_3]))))) : (min((arr_12 [i_3] [i_4] [i_4]), (arr_12 [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_12 [(signed char)4] [i_4] [i_4])) ? (arr_12 [i_3] [i_3] [i_3]) : (arr_12 [i_3] [i_3] [i_4])))));
                arr_13 [i_3] [i_3] = var_6;
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)254)), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (var_10)))))));
}
