/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249150
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) var_9);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) (unsigned char)250);
                            arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2] [i_3]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_2] [i_2 - 1] [i_1] [i_2 - 1] [i_2] [i_2 - 1])), (arr_8 [i_1] [i_2 - 2] [i_2] [i_3] [i_3] [i_1])))) : (((/* implicit */int) ((min((arr_6 [i_1] [i_1]), (((/* implicit */int) var_7)))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) var_3)))))))));
                            var_14 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                            var_15 = ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_3]);
                            arr_12 [i_2] [i_2] [i_2] [i_1] [14] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_9 [i_3] [i_1] [i_1] [i_2 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            {
                arr_20 [i_4] [i_4] [i_5] = ((/* implicit */long long int) max((((int) ((((/* implicit */_Bool) arr_8 [i_4] [i_5] [i_4] [i_5] [i_4] [i_5])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_4]))))), (((/* implicit */int) max((var_5), (((/* implicit */signed char) arr_3 [i_5] [i_4])))))));
                var_17 = ((/* implicit */unsigned char) arr_3 [i_4] [i_4]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
}
