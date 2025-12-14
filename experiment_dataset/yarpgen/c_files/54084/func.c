/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54084
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0 - 1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (max((0ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)36186)), (var_15))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    arr_13 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_10)) ^ (var_12))), (((int) arr_6 [i_3 + 1] [i_3 - 2] [i_1]))));
                    var_21 -= (unsigned short)15393;
                    arr_14 [i_3 - 1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)18))));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    arr_19 [i_4 + 1] [i_4] [i_1] = ((18242110465024710160ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                    var_22 = ((/* implicit */unsigned short) ((var_13) + (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (var_12))))));
                    arr_20 [i_4 - 3] [i_4 - 2] [i_4] = ((/* implicit */short) var_15);
                    var_23 = ((/* implicit */unsigned short) var_18);
                }
                arr_21 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))))))))) * (min((((/* implicit */unsigned long long int) 3807373950419644677LL)), (min((204633608684841458ULL), (((/* implicit */unsigned long long int) 5541347337136522155LL))))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (-617412797) : (((/* implicit */int) var_10))))) ? (min((((/* implicit */int) (_Bool)1)), (-3))) : (((/* implicit */int) ((unsigned short) arr_0 [i_1]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) var_17))), (((((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
}
