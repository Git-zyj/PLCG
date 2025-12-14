/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4750
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] [i_0] = arr_2 [i_0];
    }
    var_19 = var_6;
    /* LoopSeq 4 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_20 = ((/* implicit */long long int) (signed char)81);
        arr_8 [i_1] = ((/* implicit */unsigned short) (signed char)56);
        arr_9 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_5 [i_1]))))))));
        arr_10 [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_6 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)20014))) ? (max(((~(((/* implicit */int) (signed char)71)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : ((-(((/* implicit */int) (signed char)-73)))))))));
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_2]))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (signed char)-25))));
        arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_2])), (arr_0 [i_2])))) : (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_14))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        arr_19 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_3])), (var_3))))) / ((((_Bool)1) ? (arr_17 [i_3]) : (arr_17 [i_3])))));
        var_22 *= (signed char)-62;
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_3])) > (((/* implicit */int) arr_14 [i_3])))))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
    {
        var_23 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) arr_1 [i_4]))))) > (arr_12 [i_4]))) ? (((arr_22 [i_4]) % (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4])) - (((/* implicit */int) arr_11 [i_4]))))));
        arr_23 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_4])) < (((/* implicit */int) (signed char)73)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))));
        var_24 ^= ((unsigned short) (+(((/* implicit */int) arr_14 [i_4]))));
    }
}
