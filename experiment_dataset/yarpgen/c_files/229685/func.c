/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229685
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_20 *= ((/* implicit */signed char) ((arr_4 [i_2] [9]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40822)))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) -1306704383)))));
                    arr_9 [9ULL] [i_0] [i_0] = ((/* implicit */int) (+(((((arr_0 [i_2 - 1]) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                    var_21 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) * (arr_3 [(unsigned char)5]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (((-((-(((/* implicit */int) (short)17686)))))) < (((/* implicit */int) var_15))));
}
