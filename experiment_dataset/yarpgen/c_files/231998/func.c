/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231998
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
    var_11 = ((/* implicit */unsigned short) 1140454092U);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_5)) < (var_3))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))));
                arr_7 [(unsigned char)5] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) 3986845336U)), (14411772683628023565ULL))), (((/* implicit */unsigned long long int) (short)7803))));
                var_14 |= ((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_5 [i_0 + 1]))));
                arr_8 [i_0] [11LL] [i_1] = ((/* implicit */long long int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) var_4))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) 8070450532247928832ULL));
}
