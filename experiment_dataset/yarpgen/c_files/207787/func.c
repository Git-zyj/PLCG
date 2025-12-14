/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207787
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] |= ((/* implicit */short) ((unsigned int) var_2));
                    arr_7 [i_2] [5LL] [i_1] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2 + 1])) ? (var_4) : (arr_0 [i_2])))))));
                    var_17 = ((long long int) ((((/* implicit */int) arr_2 [i_2 + 1])) + (((/* implicit */int) arr_2 [i_2 + 2]))));
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) ((signed char) ((_Bool) 4294901760ULL))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 4; i_3 < 12; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */long long int) arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_3] [8] [10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) arr_2 [i_4])), (arr_5 [i_6] [i_3] [(signed char)8] [i_3])))))) || (((4294901760ULL) != (4294901789ULL)))));
                        arr_23 [i_3] [(_Bool)1] [i_3] [i_3 + 3] [(signed char)7] = ((/* implicit */int) min(((-(((((/* implicit */_Bool) arr_19 [i_3] [i_3] [(unsigned char)3] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_0 [i_3]))))), (min((arr_0 [i_3 + 2]), (((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */long long int) var_14)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (18446744069414649849ULL) : (((/* implicit */unsigned long long int) var_12)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294901789ULL) > (((/* implicit */unsigned long long int) 7860444272237444539LL))))))));
        var_19 = ((/* implicit */unsigned short) 0LL);
        var_20 = ((/* implicit */unsigned long long int) (signed char)-16);
        var_21 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [(unsigned short)6] [i_7 - 2] [i_7] [i_7]))))) ? ((~(var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775791LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))));
        var_22 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_14 [9])) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_23 = ((/* implicit */short) arr_19 [7ULL] [i_8] [i_8] [i_8]);
        var_24 = ((/* implicit */int) var_13);
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 9223372036854775791LL))) || (((/* implicit */_Bool) var_16))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_8] [i_8])))))));
    }
}
