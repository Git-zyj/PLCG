/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219511
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
    var_18 = ((/* implicit */long long int) var_3);
    var_19 = ((/* implicit */int) var_14);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_0))));
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */int) (short)(-32767 - 1))) - (-55916520))) == (((/* implicit */int) (short)-32758)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8766246123419457494LL)) ? (8766246123419457493LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) 8766246123419457493LL);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_23 *= ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) % (((((/* implicit */_Bool) (unsigned char)169)) ? (8766246123419457493LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(_Bool)1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) var_8);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_2])), ((short)-13574)))) ? (((long long int) (-(8766246123419457493LL)))) : (((/* implicit */long long int) 4294967295U))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (_Bool)0);
                        var_28 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_10)) / (((((/* implicit */_Bool) (signed char)127)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) var_0)))))), (arr_11 [i_2] [i_2])));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (((arr_12 [i_2] [(signed char)8]) ^ ((~(arr_15 [6LL] [i_2] [i_2] [i_2]))))))))));
        var_30 = ((short) (short)-9723);
        var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2] [i_2])) : (var_15))) >> ((((-(max((((/* implicit */int) var_16)), (2097151))))) + (2097181)))));
    }
}
