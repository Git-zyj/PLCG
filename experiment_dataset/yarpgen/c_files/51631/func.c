/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51631
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 6046454279060504321ULL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (((((/* implicit */long long int) var_11)) - (var_1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 4; i_2 < 15; i_2 += 2) 
                {
                    var_17 ^= ((/* implicit */short) var_14);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 ^= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_0 [i_2 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (max((3848290697216LL), (((/* implicit */long long int) (unsigned short)41469))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))), (((var_15) & (var_15))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (unsigned char)255))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (var_10) : (2110805762U))) : (((/* implicit */unsigned int) var_4)))) >> (((((/* implicit */int) arr_11 [i_0] [i_2 + 1] [i_0 - 3] [3LL] [i_0 - 3] [i_0 - 3] [i_2])) % (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_0 - 1] [i_1] [0] [i_0 - 1] [11LL]))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [i_0]))));
                }
                var_22 = ((unsigned char) (~(((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)36709)) - (36689)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_12);
}
