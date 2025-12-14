/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37435
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 3])))) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned char)19)))) + (43)))));
                arr_5 [i_0 - 2] [i_1] [i_1] = ((/* implicit */int) max((2525469408925267282LL), (((/* implicit */long long int) 4294967295U))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_13 [i_0 + 3] [i_1] [i_2 + 3] [i_3] [i_1] [i_3] = ((/* implicit */_Bool) arr_8 [12LL] [i_2 - 1] [i_2 + 1] [i_2 + 4]);
                        arr_14 [i_0] [i_0] [i_1] [17] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1556125327U)), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) (unsigned short)31130)) ? (8820999190456808335LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6522))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (5U))))));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [17LL] [i_2] [17LL] [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)18] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0])) ? (12ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (9223372036854775807LL)))) : (max((arr_8 [i_0 - 1] [i_1] [i_2 + 4] [i_2]), (((/* implicit */unsigned long long int) var_15)))));
                        var_18 *= arr_0 [5LL];
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_16 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 3])), (var_7))) >> (((max((((/* implicit */long long int) (+(((/* implicit */int) var_14))))), (max((4656151064395806970LL), (((/* implicit */long long int) (_Bool)1)))))) - (4656151064395806920LL)))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4])))) ? (min((arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4]), (arr_8 [i_4 + 1] [i_4 + 1] [i_0 - 1] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_8 [i_4 + 1] [(unsigned short)11] [i_0 - 1] [(unsigned char)7])) ? (arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_2 [i_2] [15])), (((((/* implicit */_Bool) arr_12 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)39907), (((/* implicit */unsigned short) arr_3 [i_2 - 2] [i_0])))))) : (var_9))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((16363084951686623161ULL), (((/* implicit */unsigned long long int) (signed char)70))))) ? (arr_7 [i_0] [(unsigned char)18]) : ((-(arr_0 [i_0 - 1]))))))));
                    var_23 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)63))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */short) (+((~(max((((/* implicit */unsigned long long int) var_15)), (var_9)))))));
    var_25 = ((/* implicit */signed char) var_10);
    var_26 = ((/* implicit */signed char) var_8);
}
