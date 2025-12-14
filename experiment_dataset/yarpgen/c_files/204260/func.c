/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204260
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
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_1)) != (-4566843498559498311LL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (736116683U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)14] [i_0]))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0] [(signed char)6] [i_0]), (((/* implicit */unsigned char) arr_1 [i_0]))))))));
                var_13 -= ((/* implicit */long long int) ((int) 5714139532624210369ULL));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_1])) + (2147483647))) << (((((/* implicit */int) (unsigned short)1684)) - (1684)))))))) > (((((/* implicit */_Bool) arr_3 [i_3] [(short)20] [i_3 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (12732604541085341254ULL) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) var_6))))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_3 - 1] [(short)18] [i_2]))))) | (((unsigned long long int) arr_4 [i_2 + 1] [i_3 - 1] [(signed char)18])))))));
                            var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 13ULL)) ? (18446744073709551604ULL) : (15553125932393172380ULL))) | (max((2ULL), (12732604541085341232ULL)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (arr_5 [i_0] [i_0])));
            }
        } 
    } 
}
