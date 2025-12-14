/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229436
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (max(((-(((/* implicit */int) var_1)))), (((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_12) - (1393778939)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_17) : (((/* implicit */int) arr_2 [(signed char)19] [i_0])))) + (2147483647))) >> (((/* implicit */int) ((arr_0 [i_0] [i_0]) || (((/* implicit */_Bool) var_6))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)21205)) ? (962576441) : (((/* implicit */int) (short)-8))))))) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_2 - 1])) : (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [4LL])))), ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))));
                        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) min((((short) var_15)), (arr_6 [9] [i_1 - 2] [i_1 - 3])))) & (var_2)))));
                        var_22 = ((/* implicit */long long int) arr_6 [i_2 + 1] [i_1] [(signed char)21]);
                    }
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1638031227434729502ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) : (5434188118004390258LL)))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) var_4);
}
