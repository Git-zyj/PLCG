/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238325
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
    var_18 = var_10;
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                    arr_9 [8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_6) >= (var_15)))))) + (26)))));
                    arr_10 [i_0] [i_1] [i_2 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2656735507U))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [8U] [18U] [i_3] [i_4] = ((/* implicit */_Bool) min((var_14), ((+((-(var_7)))))));
                                arr_18 [i_0] [i_2 + 2] [i_0] [(unsigned short)6] [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (min((((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))), (var_15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
