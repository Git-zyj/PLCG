/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51217
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
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
            var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
        }
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_3 [i_0]))))));
        var_14 += ((/* implicit */_Bool) (unsigned char)151);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (var_5)))));
    }
    for (unsigned char i_2 = 4; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) 13094637459684344913ULL);
        var_16 = ((/* implicit */unsigned int) (unsigned char)148);
    }
    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3 - 3] [i_3] = (-((~((~(3188962977U))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) 3188962970U))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        var_18 = ((/* implicit */_Bool) 18446744073709551615ULL);
        var_19 *= ((/* implicit */unsigned long long int) (-((~((+(0U)))))));
    }
    var_20 = ((/* implicit */long long int) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) 0U)))))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max(((-(var_3))), (((/* implicit */int) (unsigned char)3))))) * ((~(min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_8)))))));
}
