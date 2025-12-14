/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212453
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 2999295738640916119LL))))))));
    var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) 1331658723U)))));
    var_19 -= ((/* implicit */short) var_3);
    var_20 = var_4;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((int) ((short) (unsigned short)59568)));
                            var_22 = ((/* implicit */long long int) (((+((~(arr_6 [i_0]))))) >> (((min((arr_10 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]), (arr_8 [i_1 + 1]))) + (627449795)))));
                            var_23 |= ((/* implicit */long long int) (-((~(arr_10 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2])))));
                            arr_13 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 2] [i_1 - 2])) ? (arr_7 [2U] [i_1 - 2] [i_1 + 1]) : (arr_7 [i_0] [i_1 - 1] [i_1 + 2])))));
                        }
                    } 
                } 
                var_24 -= (+(((/* implicit */int) (((~(arr_10 [i_0] [i_0] [i_0] [1] [i_1 + 2]))) <= (min((((/* implicit */int) arr_1 [i_0])), (var_12)))))));
                var_25 = arr_8 [i_1 - 2];
            }
        } 
    } 
}
