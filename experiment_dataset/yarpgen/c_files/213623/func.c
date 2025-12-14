/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213623
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(0ULL))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((long long int) var_10))))));
    var_18 *= ((/* implicit */signed char) 2027788631);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_19 *= ((/* implicit */unsigned short) arr_3 [i_1] [i_0]);
                    var_20 += ((/* implicit */short) max((((/* implicit */int) ((short) 2147483647))), (max((((/* implicit */int) (unsigned short)18321)), ((-2147483647 - 1))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)70)) : (1958166788))) : (-2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)5)), ((short)15759)))) ? (min((arr_0 [i_0]), (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_4 [i_0] [i_0])))))))));
                }
                arr_8 [0ULL] [0ULL] &= ((/* implicit */short) (-(-6750345063913466326LL)));
                var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2])), (1345479324)))), ((+(0U)))));
                var_22 = ((/* implicit */long long int) (-(2147483635)));
            }
        } 
    } 
}
