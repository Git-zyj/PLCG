/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237609
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
    var_18 |= ((/* implicit */unsigned int) var_4);
    var_19 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        var_20 = ((signed char) (~(((/* implicit */int) (unsigned char)56))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 2])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
        var_22 = ((/* implicit */unsigned long long int) var_16);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_23 -= ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)5)) + (arr_6 [i_1] [i_2] [i_2])));
            arr_8 [i_1] [i_2] |= ((/* implicit */unsigned short) ((signed char) arr_7 [i_1] [i_2]));
        }
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [9] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))));
        var_25 |= ((/* implicit */signed char) (unsigned short)65531);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_3] [i_3]));
        arr_14 [i_3] = ((/* implicit */unsigned int) arr_7 [(signed char)4] [i_3]);
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned short)65524)) - (((/* implicit */int) arr_10 [i_4] [i_4])))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) 2U)))))));
    }
}
