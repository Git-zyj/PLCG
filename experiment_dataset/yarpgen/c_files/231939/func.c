/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231939
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
    var_10 = ((/* implicit */unsigned long long int) ((8186078981002124447ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
    var_11 = ((/* implicit */_Bool) var_3);
    var_12 = ((/* implicit */unsigned long long int) 2147483638);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((unsigned short) 0ULL))), (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_0 [i_0])))) || (((/* implicit */_Bool) max((arr_1 [i_1 + 2] [i_0]), (((/* implicit */int) (signed char)104))))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 - 2])) ? (max((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_2 [(unsigned short)11] [i_1 - 4] [i_1 - 2]))) : (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_1]))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11861581402229635573ULL)) ? (arr_2 [i_0 - 2] [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) < (max((((/* implicit */unsigned long long int) 4294967275U)), (11175404170299579289ULL)))))))));
            }
        } 
    } 
}
