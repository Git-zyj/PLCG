/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191114
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_2 + 1]));
                    var_15 = ((/* implicit */unsigned long long int) min((arr_2 [i_2 + 1] [i_2 - 2]), (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1])) ? (4534593898598236038LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) var_5))))), (((unsigned char) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned char)189))))) : (((((/* implicit */unsigned long long int) 1152886320234758144LL)) % (var_11))))) : (((((/* implicit */_Bool) var_8)) ? (max((10898549978441405784ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (~((+((-(6278151797712850340ULL))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) min((4534593898598236038LL), (((/* implicit */long long int) (unsigned char)64))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) min((-1092476687), (((/* implicit */int) arr_10 [i_3]))))) : (min((9223372036854775807LL), (((/* implicit */long long int) arr_10 [(unsigned char)7]))))))) / (arr_9 [i_3]))))));
        var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */_Bool) 7548194095268145827ULL)) ? (((/* implicit */int) var_10)) : (((-534795769) | (((/* implicit */int) arr_10 [i_3])))))) << (((((/* implicit */int) arr_10 [i_3])) - (164)))))));
        arr_14 [(unsigned char)12] &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_9 [i_3]))) == (((/* implicit */int) arr_8 [18ULL] [i_3]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min(((-(arr_9 [i_4]))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) - (min((arr_15 [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4]))))))));
        var_20 |= (+((+(-302295402))));
    }
}
