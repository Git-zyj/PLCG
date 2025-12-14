/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40281
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned short) var_9);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */signed char) (((-(((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [10LL] [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                                var_20 -= ((/* implicit */unsigned int) (-(((arr_5 [i_1] [i_1] [i_2] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))));
                                var_21 *= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (var_11))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_5 [i_2] [1] [1] [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_14 [i_5] [i_6 - 1])) : (min((var_14), (((/* implicit */unsigned long long int) arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1])))))))));
                arr_18 [i_5] = ((((((/* implicit */_Bool) 5036559931266345809ULL)) ? (var_18) : (((/* implicit */unsigned long long int) arr_17 [i_5])))) >> (((((((/* implicit */_Bool) arr_17 [i_5])) ? (var_18) : (((/* implicit */unsigned long long int) arr_17 [i_5])))) - (8973042218794540013ULL))));
            }
        } 
    } 
}
