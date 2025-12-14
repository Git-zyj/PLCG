/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33759
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
    var_20 = ((/* implicit */_Bool) (-(max((min((var_8), (((/* implicit */long long int) (signed char)7)))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_16);
        var_22 = ((/* implicit */_Bool) 2795096302444519942ULL);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_2))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        var_24 = var_9;
    }
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-2617)), (15651647771265031644ULL)));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_15))));
        var_27 += ((/* implicit */int) var_5);
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (-(2094041327)))), (min((2795096302444519968ULL), (((/* implicit */unsigned long long int) -453480792)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    }
}
