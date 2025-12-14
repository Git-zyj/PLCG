/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207324
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (13303386467988567060ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)165)))), (((/* implicit */int) (signed char)-91)))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 3] [i_1 - 2]))) : (var_1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (4610560118520545280ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((unsigned long long int) arr_6 [1LL] [i_1 + 3] [i_1] [i_0]));
                    var_19 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0])))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [5ULL] [i_0] [(unsigned short)1] [i_2])) ? (arr_5 [i_1 - 3] [i_1 + 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */unsigned int) (~(arr_0 [i_1 - 2])));
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)91)) - (((/* implicit */int) (short)8191))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_12))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-8191))) - (-9223372036854775799LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_5])) : (((/* implicit */int) (_Bool)0)))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63327)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_14 [i_0] [i_1 - 3] [(signed char)7] [i_4] [i_5]))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [(signed char)4] [i_3] [i_1 + 3] [(unsigned char)14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_4] [i_5]))) : (var_2))) : (((/* implicit */unsigned long long int) ((int) var_9))))))))));
                                var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_7 [i_1] [3LL])), (var_1))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) (unsigned char)0))), (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_6] [i_0])), (var_15))))) / (min((((/* implicit */long long int) (short)-8192)), (var_7)))))));
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) arr_10 [8U] [i_1] [i_1] [i_6])))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22238))) & (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((arr_15 [i_0] [i_0] [i_6] [i_1]) - (18134380523204119725ULL))))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_13))));
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) max(((+(4610560118520545307ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_1 + 3])))))));
                        var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_12))))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8173))))) ? (((/* implicit */unsigned long long int) max((arr_9 [i_0] [16LL] [i_7] [i_9]), (((/* implicit */unsigned int) arr_14 [9LL] [i_1 - 2] [i_1 - 2] [i_9] [i_7]))))) : (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24)))))))));
                        var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)7))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1] [(_Bool)1] [i_9])), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_9] [i_0] [i_1 + 3] [i_1 - 3] [i_0] [i_9]))) ^ (arr_5 [i_1 - 1] [i_1 + 3]))))));
                    }
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_1] [i_1] [(unsigned short)14]))));
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_6))));
                }
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-15))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_10))))) : (var_8))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), (var_14)))) ? (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((((/* implicit */int) (signed char)98)) - (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) min(((unsigned char)49), ((unsigned char)60)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)2199))))) : (((1151657125234115601ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_37 = var_9;
    var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (-(((/* implicit */int) var_3))))))));
}
