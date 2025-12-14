/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27077
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_1 + 1]))))));
                    arr_7 [6ULL] [i_2] [i_2] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)1304)))), (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1 + 1]))))) ? (((((((/* implicit */_Bool) 4210960618039154806ULL)) || (((/* implicit */_Bool) 14235783455670396809ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))) : (4210960618039154806ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_5 [i_0] [i_2] [i_2])), (((int) (short)-1297)))))));
                    var_12 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) (short)-1305)) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                }
            } 
        } 
    } 
}
