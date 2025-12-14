/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233461
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */long long int) var_6)) - (var_9))) : (((/* implicit */long long int) var_11))))) : (((unsigned long long int) (short)-32748))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] |= (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32748))))));
        var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (min((var_3), (arr_0 [i_0] [i_0]))) : ((-(((/* implicit */int) var_1)))))), ((-((-(var_6)))))));
        arr_3 [14ULL] [i_0] = ((/* implicit */unsigned char) (!(((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_10))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((int) -8089305048040252751LL))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_10) ? (var_0) : (var_9))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) (short)-32758)), (-8089305048040252745LL)))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32759))) : (-8089305048040252751LL))))))));
}
