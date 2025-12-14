/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193974
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) var_7);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1]))))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (1630968861U)));
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_1 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned int) var_7))))), (arr_0 [i_0] [i_0 - 2])));
    }
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!((!(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)192))) == (var_12))))))))));
    var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)68))))) ? (var_8) : ((-(((/* implicit */int) var_2)))))), (-1541286382)));
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_9 [i_1 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_6 [i_1]))) | (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) 1373042254)))))))));
        var_16 ^= ((/* implicit */unsigned char) var_6);
    }
}
