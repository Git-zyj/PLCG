/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44767
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
    var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)82))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) var_1)) ? (var_17) : (var_1)))))));
    var_19 = ((/* implicit */int) (~(var_12)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) var_8);
        arr_2 [i_0] = var_0;
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_5 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_1])), ((-(((/* implicit */int) (unsigned char)152))))))) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)173)))))));
        var_21 = ((/* implicit */_Bool) arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)7253))));
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            arr_13 [i_2] [i_3] [i_2] = ((/* implicit */short) ((arr_1 [i_3 + 1] [i_3 - 2]) ? (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 2]))));
            var_22 = ((/* implicit */unsigned int) (+(var_5)));
        }
        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) arr_12 [i_2]);
            var_24 -= ((/* implicit */unsigned long long int) var_3);
            arr_16 [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((long long int) var_12))));
        }
        arr_17 [i_2] = ((/* implicit */short) arr_9 [i_2]);
        var_25 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2]))));
        var_26 = ((/* implicit */short) var_5);
    }
}
