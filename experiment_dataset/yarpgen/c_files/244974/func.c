/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244974
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)3)))))));
                var_18 = ((/* implicit */signed char) ((((arr_5 [i_1] [i_0 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17591)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))) : (((arr_6 [i_0 - 1] [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [(short)3]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)1)))))) & (max((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) (unsigned short)49626)))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) == ((-(arr_6 [i_0 + 1] [i_0 + 1]))))))) - (var_12)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            {
                arr_12 [i_2 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_3])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((((/* implicit */int) arr_19 [i_6] [i_6] [(short)14] [i_5] [i_6] [i_3])) >= (((/* implicit */int) arr_14 [i_3] [(short)10] [i_6 - 2])))), ((_Bool)0))))));
                                var_21 |= ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                } 
                arr_20 [i_2] [i_2 + 1] = ((/* implicit */_Bool) (short)-30497);
            }
        } 
    } 
    var_22 |= ((var_12) << (((var_7) - (1206136728493656389ULL))));
}
