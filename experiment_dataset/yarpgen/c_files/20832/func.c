/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20832
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (1573969234571224686ULL) : (arr_4 [i_1 + 3] [(unsigned short)11] [i_1])))));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1407592563)))) ? (((/* implicit */unsigned long long int) (~(arr_3 [i_1] [i_1 - 2])))) : ((~(((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 3119902092U))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [5ULL] [i_1 - 2] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4782338176752525388LL))))) : ((~(((/* implicit */int) (signed char)78))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) (unsigned short)2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18))))) : (var_2)))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(18446744073709551613ULL)))))) ? (var_3) : (var_1)));
}
