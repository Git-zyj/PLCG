/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207209
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((379229489) > (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15713)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53622))) : (arr_1 [i_0])));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)0))));
        var_16 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)15714);
        var_18 = ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) arr_4 [i_1])) : (arr_3 [i_1 + 2]));
    }
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)123)) : (((((((/* implicit */int) var_12)) < (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) min((((((/* implicit */int) (short)-1)) / (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)206)) : (max((((/* implicit */int) (_Bool)1)), (-692483410)))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17005)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */short) arr_6 [i_2]);
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) * (18092994939390113771ULL)));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_2])))) + ((-(((/* implicit */int) arr_2 [i_3])))))))));
        }
        var_25 = ((/* implicit */_Bool) -5019110718578003313LL);
        var_26 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) arr_2 [i_2])))))));
    }
}
