/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214818
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_6)))) >= ((~(((/* implicit */int) var_5))))))));
        arr_3 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (var_4)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_2 - 4] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2] [i_2] [i_0]) : (var_9))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) >= (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_3])))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((max((var_9), (((/* implicit */unsigned long long int) ((var_4) >= (var_2)))))) | (max((var_3), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] |= ((/* implicit */int) (-(((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_2])) : (arr_5 [i_0] [i_1] [i_2 + 2]))) ^ ((-(arr_5 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    }
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_11)) : (var_9)))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_3)))) ? (((var_8) ? (((/* implicit */int) var_7)) : (var_4))) : (((/* implicit */int) var_0)))) : ((~(max((((/* implicit */int) var_5)), (var_2))))));
}
