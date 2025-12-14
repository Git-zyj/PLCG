/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21661
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
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_0 + 2] [i_1 + 1]);
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (arr_3 [i_1] [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_0 + 2]))))));
                    var_12 = ((/* implicit */int) min((((/* implicit */long long int) var_1)), (min((-1090580109229596041LL), (((/* implicit */long long int) (short)511))))));
                    var_13 = (+(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_2 [23LL] [i_2])) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_5)), (var_6)))))));
                    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(unsigned char)14] [i_0 + 1] [(unsigned char)14] [12ULL])) ? (((/* implicit */int) ((arr_7 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_1 + 1]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0] [i_0]))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_2] [i_0 + 2])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_7)) >= (((max((var_3), (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
}
