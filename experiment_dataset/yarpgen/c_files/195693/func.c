/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195693
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) var_9);
        var_11 = ((/* implicit */_Bool) (+(((var_0) & (((/* implicit */long long int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned long long int) var_5);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)102)) * (((/* implicit */int) (unsigned char)102))))) <= ((+(var_7)))));
                    var_14 ^= (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_2])));
                }
            } 
        } 
        arr_10 [i_1] [i_1 + 4] = ((/* implicit */long long int) arr_2 [i_1 + 1]);
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (+((-(arr_1 [i_4])))));
        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) != (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)192))))));
    }
    for (short i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_17 = var_1;
        var_18 = ((/* implicit */unsigned long long int) arr_2 [i_5]);
    }
    var_19 += ((/* implicit */unsigned short) (((-((~(var_6))))) * ((+((~(var_7)))))));
    var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)108))))));
}
