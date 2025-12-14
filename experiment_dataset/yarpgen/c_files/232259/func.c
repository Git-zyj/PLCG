/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232259
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
    var_16 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29397)))))) || (((_Bool) var_15))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_0)), (2749847152U))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [(unsigned short)18] [i_2] &= ((/* implicit */unsigned int) (unsigned char)24);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min(((+(var_2))), (((/* implicit */unsigned long long int) max((min(((unsigned short)36146), (((/* implicit */unsigned short) (signed char)108)))), (((/* implicit */unsigned short) var_13))))))))));
                            arr_11 [i_2] [i_1] [i_2 + 3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) 2588474020143399461LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                            arr_12 [10] [i_1] &= ((/* implicit */short) ((unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2749847150U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) max((var_9), (var_14)))) >> (((935251780931513658LL) - (935251780931513658LL)))));
            }
        } 
    } 
}
