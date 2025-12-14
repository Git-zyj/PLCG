/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244919
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)230), (((/* implicit */unsigned char) var_8))))) >> (((max((((/* implicit */int) var_2)), (8257536))) - (8257530)))))), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1))), (((/* implicit */long long int) var_11))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
        var_19 = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_20 ^= ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (1021455507)))), ((~(var_16)))))));
        var_21 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_3 [(short)3]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((arr_2 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1 + 3]))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1391975515)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)8))))))));
        var_22 = ((/* implicit */_Bool) arr_1 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 *= ((/* implicit */unsigned char) arr_7 [i_2]);
        var_24 ^= ((/* implicit */_Bool) arr_7 [i_2]);
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_25 = ((/* implicit */short) -1391975516);
                    var_26 = ((/* implicit */int) arr_8 [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_27 += ((/* implicit */unsigned char) -1391975516);
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((arr_11 [8LL]) - (8080287567701972213LL))))))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5] [i_5])) == (((/* implicit */int) arr_9 [i_5] [i_5]))));
        arr_17 [i_5] = ((/* implicit */long long int) (!((!(arr_3 [i_5])))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (var_3) : (((/* implicit */int) (short)-9426))));
    }
}
