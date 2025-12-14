/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227076
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_2 [17ULL] = ((/* implicit */int) var_0);
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((11039942536992916294ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17224))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) (unsigned char)228))))) ? (((/* implicit */int) ((_Bool) (unsigned char)134))) : (0)))));
        var_15 = ((/* implicit */unsigned char) var_2);
        arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (arr_4 [i_1])))), (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */unsigned int) 1472298982)) : (4294967282U)))));
        arr_7 [i_1] = ((/* implicit */signed char) 4294967290U);
        arr_8 [i_1] |= arr_5 [(unsigned char)2];
    }
    var_16 = ((/* implicit */unsigned char) var_0);
}
