/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233521
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [(signed char)11] = min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_6 [i_0 - 3] [i_0 - 3] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-21)) >= (arr_4 [i_0]))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_3] |= ((/* implicit */unsigned short) (-((((!((_Bool)1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-2025273195) : (((/* implicit */int) (signed char)108))))) : (-1384419840449378040LL)))));
                        arr_13 [i_1] [1U] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(16383)));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_1 [i_1 - 1] [i_1 + 1]) / (arr_1 [i_1 - 1] [i_1 - 2])))))))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) min((arr_8 [i_0] [(_Bool)1] [i_3]), (((/* implicit */int) var_4))))) > ((~(var_3))))) ? (((((((/* implicit */int) arr_11 [i_2])) < (((/* implicit */int) var_5)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((short) (short)23587))))) : (((/* implicit */int) var_8))));
                        arr_14 [(unsigned char)12] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9822))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_2] [2LL] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))), ((~(var_12)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) ? (min((arr_18 [i_0] [i_1 - 2] [i_2] [i_4] [i_5]), (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_15 [i_5 + 2]))));
                            var_19 -= ((/* implicit */unsigned short) min((max((arr_20 [i_0] [i_1 + 1]), (arr_20 [(signed char)11] [i_1 + 1]))), (((((/* implicit */_Bool) arr_20 [i_0 + 2] [i_1 + 1])) ? (arr_20 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_5] [i_5] [i_5 + 3])))))));
                            var_20 = arr_6 [i_5 + 1] [7LL] [i_4];
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0 - 3])) < (((/* implicit */int) ((unsigned short) arr_0 [i_2]))))) ? (((/* implicit */int) ((_Bool) 589624654608492370LL))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_4]))))))));
                        }
                        for (int i_6 = 1; i_6 < 20; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [17] [i_4] [i_6] [i_0] = ((/* implicit */unsigned short) (~(max((arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]), (((/* implicit */int) var_8))))));
                            arr_26 [i_0] [i_1] [i_2] [i_4] [i_6 - 1] = (unsigned short)18;
                        }
                    }
                    arr_27 [i_0] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_23 [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_0 - 1]) : (((/* implicit */long long int) arr_2 [i_1]))))))));
                    arr_28 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7)))))));
                    var_22 ^= ((((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((/* implicit */int) arr_3 [i_0 - 3]))))) >= (((long long int) (-(((/* implicit */int) var_6))))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    arr_32 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_1))) ? ((+(13036621748081827049ULL))) : (((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]))));
                    arr_33 [i_0] [i_0] [i_7] = ((/* implicit */long long int) (short)-1746);
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) arr_20 [i_0 + 2] [i_9]);
                                arr_39 [i_1] [i_1] [i_7] [i_8] = (-(((/* implicit */int) (unsigned short)6133)));
                                arr_40 [i_0] [i_0] [(_Bool)1] [i_7] [i_8] [1U] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (arr_18 [i_0] [(unsigned short)19] [i_7] [i_8] [i_9]) : (((/* implicit */int) arr_3 [i_8]))))));
                                var_24 = ((/* implicit */long long int) ((signed char) arr_4 [i_0 + 2]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned char) var_6);
    var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8048519686717243442LL)) && (((/* implicit */_Bool) (unsigned short)65528))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 589624654608492370LL)))))))));
}
