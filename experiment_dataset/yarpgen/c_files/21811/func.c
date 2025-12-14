/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21811
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
    var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_1)), (((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) min((var_6), (var_6)))) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_0 + 3] [i_0] [i_0])), (max((((((/* implicit */_Bool) arr_7 [i_0] [0ULL] [i_0])) ? (18213292161813435512ULL) : (arr_6 [i_1] [i_1] [i_1] [i_0]))), (18213292161813435526ULL)))));
                    arr_9 [i_2] [(_Bool)1] [i_1] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((arr_4 [i_0 - 1] [i_0 - 1]) ? (18213292161813435512ULL) : (arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_6 [(short)2] [8ULL] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_1])) : (233451911896116104ULL)))))) ? (arr_6 [i_0 + 1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1])))))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) min((6689619495782390201LL), (((/* implicit */long long int) (short)10086))))), (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_1] [i_1])), (arr_6 [i_0] [i_0 - 2] [i_0] [i_1]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])), (18446744073709551594ULL))))))))));
                }
            } 
        } 
    } 
}
