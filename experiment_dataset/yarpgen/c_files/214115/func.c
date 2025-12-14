/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214115
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((3616451420U), (((/* implicit */unsigned int) 0))));
        var_10 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25284)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((long long int) min((var_2), (((/* implicit */long long int) var_3))))), (((/* implicit */long long int) (+(3U))))));
    }
    for (unsigned short i_1 = 3; i_1 < 6; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)59))))) ? (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_2] [i_2] [i_3])) ? (var_2) : (var_7))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_7)))))))))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_8 [i_1 + 1] [0LL])) + (((/* implicit */int) arr_8 [i_2] [(unsigned short)2])))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [i_1 + 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_1])))))) <= (((/* implicit */int) arr_2 [i_1 - 1])))))));
                    var_13 = (((((-(((/* implicit */int) (unsigned short)40260)))) + (2147483647))) >> (((var_1) - (1118625652))));
                    arr_12 [i_2] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (unsigned char)17)))));
                }
            } 
        } 
        arr_13 [i_1 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)10861))));
    }
    var_14 = ((/* implicit */unsigned short) var_5);
}
