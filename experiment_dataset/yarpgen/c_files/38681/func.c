/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38681
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */short) min((((/* implicit */long long int) var_12)), (arr_3 [i_1 + 1] [i_1])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] = var_1;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_5] = ((/* implicit */int) min((((((((/* implicit */_Bool) 3977791033U)) ? (((/* implicit */unsigned long long int) var_6)) : (var_8))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((arr_8 [i_5] [i_1] [i_4 - 2]) - (633861377901181158ULL)))))))), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 2] [i_1] [i_4 - 2] [i_5]))));
                            arr_16 [i_5] = ((/* implicit */_Bool) ((short) min(((_Bool)1), (((_Bool) 3977791033U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (var_3))))));
    var_17 = ((/* implicit */unsigned long long int) (~((~((~(1280660005)))))));
}
