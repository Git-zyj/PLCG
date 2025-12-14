/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29296
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [(short)17] = ((/* implicit */unsigned char) max((arr_1 [i_0]), ((!(((/* implicit */_Bool) ((var_14) & (var_14))))))));
                var_17 = ((/* implicit */_Bool) arr_4 [i_0]);
                var_18 = (unsigned short)65512;
                arr_6 [i_0] [(unsigned char)11] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)7885)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)-8))))))) >= (var_7));
                arr_7 [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) * (((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_1);
}
