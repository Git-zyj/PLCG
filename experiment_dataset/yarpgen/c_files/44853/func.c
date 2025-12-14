/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44853
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL)))) ? (((unsigned long long int) max(((short)16), (((/* implicit */short) (signed char)40))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */short) (signed char)40)), (arr_2 [i_0 - 1] [i_0] [i_0]))), (((/* implicit */short) ((_Bool) (signed char)-40)))));
                var_20 = (+(max((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) (signed char)40)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 3) 
                {
                    arr_7 [i_0] [i_1] [(signed char)8] &= ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (short)-16))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            arr_13 [i_0 - 1] [i_4] [i_2] [i_4] [i_1] [i_2 + 3] = ((/* implicit */unsigned short) arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2 + 4]);
                            arr_14 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) var_8));
                            arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_13))))));
                            arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-40);
                        }
                        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_4))));
                            var_23 = arr_8 [(short)0] [i_1];
                        }
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_1] [i_6] [i_6 + 1] [i_2 + 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))));
                            var_24 = ((/* implicit */short) ((arr_12 [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (unsigned short)23835))));
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), ((_Bool)1)));
                            arr_26 [i_1] = ((/* implicit */unsigned char) (short)-1);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56163)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
                        }
                    }
                }
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_10 [i_8] [i_0] [2ULL] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1] [i_8])))))) ? (((/* implicit */int) ((unsigned short) (signed char)-52))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-21741)) && (((/* implicit */_Bool) (signed char)111)))))));
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)111)), (arr_19 [i_0 + 1] [4ULL] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */int) arr_3 [i_0 + 1])) | (((/* implicit */int) var_11))))));
                    arr_29 [(signed char)3] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((arr_0 [i_1] [i_8]) >> (((((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_8] [i_8])) & (((((/* implicit */int) (short)36)) - (((/* implicit */int) var_15)))))) - (263)))));
                    var_29 *= ((/* implicit */_Bool) min(((unsigned short)44014), (((/* implicit */unsigned short) (_Bool)1))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_11))) < (((/* implicit */int) var_0))));
}
