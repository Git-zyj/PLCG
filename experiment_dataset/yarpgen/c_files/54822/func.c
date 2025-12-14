/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54822
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) ((int) 4294967292U));
                    var_15 += (unsigned char)0;
                    var_16 += ((/* implicit */short) (unsigned char)244);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            {
                var_17 = ((short) ((((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_3])) ? (arr_12 [i_4] [i_3] [i_3]) : (arr_12 [i_3] [i_4] [i_3])));
                arr_14 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))) : (11042117286830021357ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)2))))))))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (int i_7 = 4; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) min(((~(arr_21 [i_7] [i_7] [i_7 - 4] [i_7 + 2]))), (max((((/* implicit */unsigned long long int) (unsigned char)252)), (arr_21 [i_7] [i_7] [i_7 - 2] [i_7 - 3])))));
                                arr_25 [i_3] [i_6] [i_5] [i_7] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])))))) % ((~(9299404967815836165ULL)))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]))) > (((((/* implicit */int) arr_23 [i_6] [i_7] [i_7] [i_7 - 3] [i_7 + 2])) % (((/* implicit */int) (short)13426))))));
                                var_19 = ((/* implicit */short) ((_Bool) max((((/* implicit */int) ((unsigned char) arr_16 [i_3]))), (arr_19 [i_7] [i_7] [i_7] [i_7 - 3] [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
