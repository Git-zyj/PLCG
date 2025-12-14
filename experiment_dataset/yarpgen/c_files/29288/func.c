/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29288
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((arr_0 [i_0] [(unsigned char)0]), (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)15)) + (((/* implicit */int) arr_3 [(unsigned char)1] [10ULL] [i_2])))) - (arr_1 [i_0]))))));
                    var_11 += ((((((/* implicit */_Bool) ((arr_4 [i_0] [(signed char)2] [(unsigned short)12]) >> (((-995868671465338543LL) + (995868671465338547LL)))))) || (((/* implicit */_Bool) 8)))) ? (((/* implicit */int) ((unsigned short) min((arr_2 [6]), (((/* implicit */long long int) arr_1 [(signed char)6])))))) : (arr_6 [6ULL]));
                    var_12 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)2185)) ? (995868671465338550LL) : (((/* implicit */long long int) arr_4 [12U] [i_1] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_2 [i_0]))))) != (((((arr_2 [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])) << (((arr_4 [i_0] [i_1] [i_0]) - (2976546620U))))) - (834666496)))))))) : (((/* implicit */long long int) ((min((((((/* implicit */_Bool) (unsigned short)2185)) ? (995868671465338550LL) : (((/* implicit */long long int) arr_4 [12U] [i_1] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) & (arr_2 [i_0]))))) != (((((((arr_2 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((((((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])) << (((((arr_4 [i_0] [i_1] [i_0]) - (2976546620U))) - (914431647U))))) - (834666496))) + (833036329))) - (41))))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 995868671465338543LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned short)51828)) ? (var_1) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)138)))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 995868671465338543LL)) || (((/* implicit */_Bool) -995868671465338552LL)))) ? (((/* implicit */unsigned int) ((int) var_1))) : (((unsigned int) (unsigned char)115)))))));
}
