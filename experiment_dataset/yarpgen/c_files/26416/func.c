/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26416
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
    var_15 = ((/* implicit */unsigned int) ((max((min((1LL), (20LL))), (var_9))) >> (((var_9) + (3921051081710319244LL)))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((int) -21LL)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((int) var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) arr_5 [i_0]);
                    var_19 -= ((/* implicit */unsigned char) min(((signed char)53), (var_11)));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [(short)13] [(short)13] [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [(unsigned char)12])) & (((/* implicit */int) var_11))))) : (((long long int) (unsigned char)127))));
        arr_12 [i_3] = ((/* implicit */unsigned char) ((signed char) arr_6 [i_3] [i_3]));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_14) << (((((/* implicit */int) var_6)) - (181)))))))) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])))))))));
        arr_13 [i_3] = ((/* implicit */int) ((((max((var_9), (-3LL))) + (9223372036854775807LL))) << (((max((7506507311295126241ULL), (((/* implicit */unsigned long long int) 1818429784U)))) - (7506507311295126241ULL)))));
    }
    var_21 = min((((((/* implicit */_Bool) 131071)) ? (((/* implicit */unsigned long long int) (~(8784494080391671644LL)))) : (var_2))), (((/* implicit */unsigned long long int) 4065204430U)));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_12))));
}
