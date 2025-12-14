/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196673
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
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)65516))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)29))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = max((((/* implicit */unsigned short) arr_2 [(signed char)0] [i_1])), (var_10));
                    arr_8 [i_2] = ((/* implicit */short) (+(((-106543088) & (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2]))))));
                    arr_9 [i_2] = ((/* implicit */unsigned short) var_5);
                    arr_10 [i_0] [i_2] [i_2 - 3] = ((/* implicit */short) var_13);
                }
            } 
        } 
    } 
}
