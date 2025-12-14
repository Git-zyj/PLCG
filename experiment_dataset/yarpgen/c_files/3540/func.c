/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3540
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
    var_13 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2726113872U)) ? (2726113872U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((unsigned long long int) 61440ULL)))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) >> (((/* implicit */int) (unsigned char)13)))), (((int) var_1)))))));
    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-18)) ? (1568853423U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))))) & (var_4)));
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_1 [i_2]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned char)13;
                                var_17 = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    arr_14 [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) (+(2653832400U)));
                }
            } 
        } 
    } 
}
