/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203053
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
    for (int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_0 - 2])) ? (4864041775982204112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_1])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (1546845951) : (var_6)))) <= (((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))) & (var_12))))));
                    var_20 *= ((/* implicit */_Bool) (~(((unsigned int) arr_6 [i_2] [i_2 + 2] [i_0 - 1] [i_0 + 4]))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (signed char)59)), ((short)9546)))) - (((/* implicit */int) var_2))));
                }
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) min(((signed char)-103), ((signed char)66)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)118))))) : (min((((/* implicit */unsigned int) arr_3 [1ULL] [i_0] [i_0])), (566184013U))))) - (4294967193U)))));
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11169))) - (-2349802351927999230LL)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_6);
    var_24 = ((/* implicit */long long int) 1120182674U);
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) << (((2401363927U) - (2401363917U)))))))) ? (max((((/* implicit */long long int) var_15)), ((~(-3442871119519922610LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
