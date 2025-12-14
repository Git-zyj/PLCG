/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210056
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
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(min((arr_5 [i_2] [i_1] [i_0]), (arr_0 [i_0] [i_2])))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) -2147483643)) | (2763621356987826066ULL)))))) : (max((max((((/* implicit */long long int) var_1)), (arr_2 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)30)))))))));
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                {
                    var_14 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -2147483643)), (var_4)))))))) > (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (arr_3 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
                    arr_10 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(arr_8 [i_0] [i_0]))))))));
                    var_15 = ((/* implicit */signed char) var_9);
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 2147483643)) ^ (4107221413U)));
                }
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) ((min((((/* implicit */long long int) 2235403354U)), (var_2))) + ((-(arr_2 [i_0])))));
                    var_18 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_1 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) -2147483643)) : (arr_13 [i_4] [i_1] [i_1] [i_0])))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(var_10))), (((/* implicit */unsigned int) min((-2147483617), (((/* implicit */int) arr_16 [i_0] [i_1] [i_5])))))))) ^ (max((((((/* implicit */_Bool) -2147483642)) ? (2121319348409260682ULL) : (((/* implicit */unsigned long long int) 2147483617)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_2))))))));
                    arr_19 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(1912634349U)));
                    arr_20 [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_7))))), ((~(arr_11 [i_0] [i_0] [i_5] [i_0]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (var_6)))) && (((/* implicit */_Bool) var_9))))))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (18187878006726486735ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0]))));
                    arr_24 [i_6] [i_6] [i_6] = arr_0 [i_1] [i_6];
                    var_20 = ((/* implicit */short) arr_21 [i_0] [i_6] [i_6] [i_6]);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_21 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 1912180121))))));
                                var_22 = ((/* implicit */long long int) (~(var_5)));
                                var_23 = ((/* implicit */long long int) (-(arr_3 [i_0] [i_6] [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_9 = 4; i_9 < 13; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        var_25 = ((/* implicit */long long int) (~(arr_26 [i_9 - 1] [i_6] [i_6] [i_9])));
                        var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 9223372036854775798LL))));
                        var_27 = ((/* implicit */_Bool) arr_14 [i_6] [i_1] [i_6] [i_6]);
                    }
                    for (int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) var_10);
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_3 [i_6] [i_1] [i_6]))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) (~(((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (32179)))))));
                        var_31 = ((/* implicit */unsigned int) -1019803175);
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) var_4);
                        var_33 = 5853038727191379484ULL;
                        arr_41 [i_6] = (((-(((/* implicit */int) var_11)))) / (((/* implicit */int) var_0)));
                    }
                }
                var_34 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_2)) <= (11070621569145902470ULL))) ? (((/* implicit */unsigned long long int) arr_25 [i_1])) : (max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6016514908947097099ULL))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))));
}
