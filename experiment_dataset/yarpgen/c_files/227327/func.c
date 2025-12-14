/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227327
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((2147483647) << (((((18446744073709551612ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33067))))) - (18446744073709518551ULL))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = arr_0 [i_0 + 1] [i_0 + 2];
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (arr_1 [i_0])))))), ((~(((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_4 [i_0] [(signed char)16] [i_1])))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7))))))));
                var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [(unsigned short)17] [i_1])) > (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) > (max((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_2 [i_1]))))))));
            }
        } 
    } 
}
