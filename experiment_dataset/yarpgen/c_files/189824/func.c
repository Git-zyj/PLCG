/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189824
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 = arr_0 [i_0];
        var_16 += arr_0 [(unsigned char)6];
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) -1636007565)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 4436054664253837976ULL))))))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (arr_4 [i_1 + 3])))) ? (((/* implicit */int) arr_3 [(unsigned short)4] [(unsigned short)4])) : (max((((((/* implicit */_Bool) arr_4 [0U])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) var_0))))));
        arr_5 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) -1993042536);
    }
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_13 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */signed char) var_11);
                    var_19 = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
        var_20 |= ((/* implicit */unsigned short) (+(1231059192)));
        var_21 = ((/* implicit */short) 1830750957U);
    }
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5 - 1] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)30047)), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_11 [i_5])) ? (5294339494849526918ULL) : (((/* implicit */unsigned long long int) 3858271097U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2655))))))))));
        arr_17 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((((/* implicit */short) var_10)), ((short)2655)))), (var_7)))), (((unsigned long long int) var_13))));
        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_5);
}
