/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216577
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
    var_16 += ((/* implicit */signed char) var_10);
    var_17 = ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) arr_6 [i_1 + 1] [i_1]))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_4 [i_0 + 4])) ? (((/* implicit */int) arr_4 [i_0 + 4])) : (((/* implicit */int) arr_4 [i_0 + 2])))) - (1582)))));
                    var_18 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)8])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_2] [i_0] [i_0])))) % (((((/* implicit */_Bool) arr_0 [i_2 + 1] [11LL])) ? (((/* implicit */int) arr_8 [(short)10] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_13)))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_7 [i_0 - 1] [i_0 + 4]))), (((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 4])))))))));
                    arr_10 [i_0 + 4] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((int) 3567909005U)) : (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
}
