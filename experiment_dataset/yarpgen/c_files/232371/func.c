/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232371
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
    var_10 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 140737488355320ULL)))) ? (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_3))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((var_0) >= (var_2)))))) : (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))))), (min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_4))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) var_4);
                    arr_7 [i_2] = ((/* implicit */unsigned long long int) ((min((((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) min((var_3), (var_5)))))) * (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
                    arr_8 [i_0] [i_1] [(signed char)10] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) << (((((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (7826199648599238496LL)))));
                    var_12 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))) - (((/* implicit */int) var_9))))), (var_3)));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) / (var_2)))), (min((18446744073709551596ULL), (20ULL)))));
        arr_12 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 4; i_4 < 11; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_21 [i_5] = ((/* implicit */unsigned int) min((19ULL), (18446744073709551595ULL)));
                        arr_22 [i_5] = ((/* implicit */int) min((var_2), (((((var_0) << (((((/* implicit */int) var_6)) - (20130))))) | (var_7)))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_7)))) ? (var_8) : (((/* implicit */int) var_1))))), ((+(min((var_7), (((/* implicit */long long int) var_5))))))));
}
