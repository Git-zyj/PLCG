/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249545
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
    var_12 = var_5;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_0] [i_1] [(unsigned char)13] [19] = ((/* implicit */unsigned int) ((short) 2209598685U));
                                arr_16 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_1])) >= (((((/* implicit */_Bool) (unsigned short)47654)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_4])) : ((-(((/* implicit */int) (unsigned short)50037))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [(unsigned char)11] = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */signed char) ((_Bool) 9223372036854775807LL))), ((signed char)(-127 - 1))))), (max((arr_4 [i_1] [i_1] [i_2]), (924573217U)))));
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_6] [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_4 [i_1] [i_1] [i_1]))) - (((/* implicit */unsigned int) ((int) (short)7344)))))) ? (((/* implicit */int) var_11)) : (((int) arr_10 [i_5 - 2] [i_1] [i_5] [4] [i_1]))));
                                var_13 = ((unsigned int) ((unsigned int) (short)7341));
                                arr_25 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_10));
                            }
                        } 
                    } 
                    arr_26 [i_1] [21] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((short) var_5)))));
}
