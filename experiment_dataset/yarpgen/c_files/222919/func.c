/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222919
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), ((+(arr_1 [i_1] [i_1])))))) - (max((((/* implicit */unsigned long long int) ((2109711194U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-23692)))))), ((+(arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11627517892478881582ULL)) ? (7078539063889741663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) 761260436599452559ULL)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 2])) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54287)) ? (6819226181230670033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-341)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_2]))))));
                            }
                        } 
                    } 
                    arr_15 [(signed char)8] [(signed char)8] [i_2] [i_1] = ((/* implicit */short) min((min((((unsigned int) 3702676896U)), (4030880639U))), (((/* implicit */unsigned int) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) (~(7078539063889741673ULL))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) var_0)) ? (11368205009819809942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63488)))))))));
    var_20 = ((/* implicit */signed char) var_16);
}
