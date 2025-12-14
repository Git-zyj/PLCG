/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53034
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
    var_11 ^= ((/* implicit */_Bool) var_9);
    var_12 = var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) var_9);
            arr_7 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42466)))));
            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]))));
        }
        var_14 = arr_1 [i_0 + 2] [i_0];
        arr_8 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_0] [i_0 - 2] [i_0 - 2]));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_15 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((unsigned long long int) (unsigned short)42459)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27788)) % (((/* implicit */int) (signed char)127))))))))));
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)42456)))) : (-1191051314816436812LL)))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        arr_17 [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) (short)7941))) >= (-1191051314816436804LL))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_14 [i_3]) : (arr_14 [i_3])))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_14 [i_3]) : (arr_14 [i_3]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_3)) : (arr_14 [i_3])))));
        arr_19 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_9))) == (((/* implicit */int) (unsigned short)42450))));
    }
    var_18 = ((/* implicit */signed char) var_8);
}
