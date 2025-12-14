/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249039
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
    var_17 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(var_6)))))) ? (((/* implicit */unsigned long long int) max((((var_16) ? (((/* implicit */int) var_12)) : (var_9))), (((((/* implicit */_Bool) 515175712U)) ? (((/* implicit */int) (unsigned short)46741)) : (1583844476)))))) : (min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))), (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) var_9))) : ((~(((/* implicit */int) var_4))))))));
            arr_7 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)56332)) || (((/* implicit */_Bool) (unsigned short)18794)))), ((!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_5)) : (var_9))))))));
        }
        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((8887164745507204661ULL), (((/* implicit */unsigned long long int) (unsigned short)18794)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)59407)) + (((/* implicit */int) (unsigned char)22))))) : ((-(arr_2 [i_0])))));
        arr_8 [i_0] &= ((/* implicit */unsigned short) ((unsigned long long int) max((((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((_Bool) 5206538238742409366ULL))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (short)-29128))));
    }
}
