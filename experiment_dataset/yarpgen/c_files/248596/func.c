/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248596
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_7 [i_1] [4ULL] |= ((/* implicit */signed char) (~(min((((/* implicit */int) (unsigned char)58)), (579925857)))));
                var_15 = ((/* implicit */unsigned short) (short)22982);
                var_16 ^= max((((((((/* implicit */_Bool) 9250692434192847705ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)18]))))) % (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)65535)))))), (((/* implicit */unsigned long long int) var_2)));
            }
        } 
    } 
    var_17 += ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (((unsigned int) (short)(-32767 - 1))))))));
}
