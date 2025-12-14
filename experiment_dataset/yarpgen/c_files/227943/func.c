/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227943
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_0 [i_2] [i_3])))))))) ? (((unsigned long long int) max((((/* implicit */unsigned char) var_6)), (var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                        var_15 |= ((/* implicit */signed char) ((unsigned short) max((max((var_10), (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_3]))))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 4225401170U)) ? (((/* implicit */int) (unsigned short)275)) : (((/* implicit */int) ((_Bool) ((unsigned char) arr_5 [i_0] [i_2]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (((-(arr_14 [i_0] [i_2] [i_4]))) == (min((arr_14 [14] [i_1] [i_1]), (arr_14 [i_0] [i_1] [i_2])))));
                        arr_16 [i_4] &= ((/* implicit */unsigned int) var_1);
                        arr_17 [i_4] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)50828);
                    }
                    var_16 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)104))))), (min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) var_14)) : (arr_2 [i_1]))), (((unsigned long long int) (unsigned char)225)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) (~(3310738265U))))));
}
