/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230157
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = max(((~(((((/* implicit */_Bool) 8529398925924259038ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_10)) : (8529398925924259038ULL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 2180697047U)) || (((/* implicit */_Bool) 2114270249U))))) ^ (var_10)))) ? (((/* implicit */unsigned int) var_2)) : (max((arr_8 [i_0] [i_0] [i_0] [i_0]), (var_3)))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (911626289U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_11);
}
