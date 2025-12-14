/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34782
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
    var_16 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_17 = ((/* implicit */_Bool) min((var_2), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) == (max((var_1), (((/* implicit */unsigned long long int) var_5)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [8U] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_2))))))), (max((-1609458775104961353LL), (((/* implicit */long long int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */short) var_5)))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-32764))))) ? (max((((/* implicit */unsigned long long int) (signed char)-1)), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [20])) ? (((/* implicit */long long int) 0U)) : (var_8))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) var_12)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) arr_7 [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [(short)4])) || (((/* implicit */_Bool) (short)17206)))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max(((+(-8087853902954762234LL))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) var_10)) ^ (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-102)))))))));
}
