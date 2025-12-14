/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29871
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_13))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)19358)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-80)), (((short) var_3)))))) : (var_13)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((min((((((/* implicit */_Bool) arr_3 [3ULL] [i_1] [i_0])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned long long int) arr_2 [8LL] [i_1])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)83)) - (((/* implicit */int) (signed char)83))))) ? (((((/* implicit */_Bool) (signed char)-85)) ? (-7887486854947580502LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */long long int) 3526695506U))))));
                var_18 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_8)) - (15280)))))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-7887486854947580502LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32765))))))) : (arr_4 [i_1 - 2])))));
                var_19 &= ((/* implicit */unsigned long long int) var_1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)107)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_0 [i_3]))))));
                            var_21 = ((/* implicit */_Bool) arr_5 [(_Bool)1]);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 4])) ? (((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_1 - 2])) ? (arr_8 [i_1 - 4] [i_1 - 4] [i_1 + 3] [i_1 - 4]) : (((/* implicit */int) (signed char)-73)))) : (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), (var_1)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-20527)) : (((/* implicit */int) var_1))))))) ? (((var_12) * (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
}
