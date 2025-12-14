/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3529
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
    var_10 = (+((-(((((/* implicit */_Bool) var_7)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) arr_0 [i_0 - 2]);
                var_12 = max((((var_6) ? (arr_0 [i_0 + 1]) : (7018289235674134256ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) 7018289235674134256ULL)) && (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))))), ((+(2147483634)))))));
                var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 + 1])) ? (arr_3 [i_1 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1 - 1])))), (((((/* implicit */_Bool) var_4)) ? (var_9) : (16727951599501075828ULL)))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 6; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))))))), (((((/* implicit */_Bool) ((int) arr_0 [i_0 - 2]))) ? (var_0) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_2] [i_0])))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 1772838176)) ? (((/* implicit */long long int) 1156596540)) : (-8881900645385063037LL)));
                }
            }
        } 
    } 
}
