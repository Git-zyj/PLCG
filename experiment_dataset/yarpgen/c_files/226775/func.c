/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226775
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_3) - (1207936367U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_3)))) : (((((/* implicit */_Bool) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (signed char)-87))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -467768446)) == (var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [(short)4] [(unsigned short)10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) < (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_1])) > (var_1))))))) > ((~(((/* implicit */int) ((short) arr_2 [i_0] [i_1] [(signed char)5])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -467768446))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [1U] = ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */unsigned long long int) arr_1 [(short)7])), (1ULL)))), (min((((/* implicit */unsigned long long int) 2248299624U)), (18446744073709551590ULL)))));
                    arr_11 [6ULL] [6] [i_1] [i_2] = ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]);
                }
                /* vectorizable */
                for (signed char i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_17 = ((/* implicit */int) ((unsigned int) var_3));
                    arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3 + 1] [i_1])) : (((18446744073709551612ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25)))))));
                }
                arr_16 [(unsigned short)0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */int) var_8)))))))), (((unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned short)6] [i_0])) ? (15982560068895855501ULL) : (((/* implicit */unsigned long long int) arr_4 [(unsigned short)7])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_4);
}
