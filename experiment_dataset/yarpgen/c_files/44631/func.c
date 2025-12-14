/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44631
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
    var_16 &= ((/* implicit */unsigned int) var_4);
    var_17 = min(((~(((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))))))), (((/* implicit */unsigned long long int) (unsigned short)6087)));
    var_18 = ((/* implicit */unsigned int) ((((min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 145813878U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) + (2147483647))) >> (((((/* implicit */int) var_5)) + (112)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 3749337985987683786LL))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) (~(var_12)))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+((-(((/* implicit */int) ((unsigned char) 2723396789U))))))))));
                                arr_16 [14] [i_3] [i_2] [i_3] [(signed char)14] = ((/* implicit */unsigned int) (((~(arr_3 [i_4 - 1]))) << (((((arr_3 [(signed char)4]) + (1745480256))) - (22)))));
                                var_22 = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
