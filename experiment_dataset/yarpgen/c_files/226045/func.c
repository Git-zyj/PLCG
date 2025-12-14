/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226045
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
    var_20 = ((/* implicit */unsigned long long int) ((int) max((var_10), (((/* implicit */long long int) var_13)))));
    var_21 = ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) var_15))));
    var_22 = ((/* implicit */short) var_16);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = var_18;
        var_23 = ((/* implicit */short) (~(((unsigned int) ((unsigned long long int) 18446744073709551593ULL)))));
        var_24 = arr_1 [i_0];
        var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((unsigned char) max((var_14), (arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) / (((/* implicit */int) ((_Bool) min((var_4), (((/* implicit */short) arr_1 [(unsigned short)4]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_26 = ((/* implicit */long long int) var_13);
        arr_8 [(unsigned char)5] &= arr_2 [(short)8] [17LL];
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */_Bool) var_6);
        arr_12 [i_2] = ((/* implicit */int) ((((0ULL) << (((((/* implicit */int) (short)3303)) - (3241))))) + (min((((/* implicit */unsigned long long int) ((unsigned short) var_8))), (4561547775810517584ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_23 [(unsigned char)9] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        var_27 *= ((/* implicit */unsigned long long int) ((long long int) ((arr_20 [i_3] [(signed char)13] [(short)5] [i_6]) ^ (((/* implicit */int) (short)960)))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] [i_3 + 1] = ((14ULL) >> (((18446744073709551615ULL) - (18446744073709551566ULL))));
    }
    var_28 = ((max((((/* implicit */unsigned long long int) 1073741824)), (4561547775810517584ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
}
