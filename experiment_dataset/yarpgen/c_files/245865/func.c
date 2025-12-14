/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245865
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((min((var_10), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) (unsigned short)36921))))))), (var_8))))));
    var_13 |= ((/* implicit */unsigned long long int) min((var_9), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : (var_7)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = arr_3 [i_1] [i_1] [i_1];
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_15 *= (+((-(arr_11 [i_3] [i_3]))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])));
    }
    for (long long int i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((arr_5 [i_4] [i_4]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_4])))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                {
                    var_18 = (+(((((/* implicit */_Bool) (signed char)60)) ? (11044243037739690657ULL) : (11044243037739690630ULL))));
                    arr_22 [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), ((+(((((/* implicit */_Bool) arr_10 [i_4 + 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3968)))))))));
                    var_19 &= (((!(((/* implicit */_Bool) (+(18277166104703206274ULL)))))) ? (min((max((arr_3 [i_4] [i_4] [i_5]), (var_10))), ((-(arr_21 [16LL] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11044243037739690653ULL)))))));
                }
            } 
        } 
        arr_23 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [11LL] [11LL] [i_4 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4 + 1])))))));
    }
}
