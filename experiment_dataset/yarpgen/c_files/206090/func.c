/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206090
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((var_0) & (var_0))) <= (var_11))))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_9 [i_2 + 1] [i_1])))));
                        arr_12 [i_0] [(_Bool)1] [i_2] [i_3 - 1] = ((/* implicit */int) (~(((arr_7 [i_3 + 1] [i_3 + 2] [i_3] [i_3]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])))))));
                    }
                } 
            } 
        } 
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_3))))))) ? ((~(((((/* implicit */int) var_1)) & (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_6))))))));
        arr_13 [i_0] = ((/* implicit */unsigned int) ((3383711870665623424ULL) != (3383711870665623423ULL)));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_4] [i_4])))) & (max((((/* implicit */unsigned int) arr_0 [i_4] [i_4])), (var_0)))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((15063032203043928188ULL), (9782467856466567819ULL))))));
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_17 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? ((+(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 1]))))));
        arr_19 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) ((signed char) (((+(var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_17 [i_5] [(unsigned char)3])))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */int) max((max((4294967295U), (((/* implicit */unsigned int) (signed char)51)))), (((/* implicit */unsigned int) ((arr_23 [i_6]) * (((/* implicit */int) ((_Bool) arr_22 [i_7] [i_7] [i_6]))))))));
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_23 [i_7]) / (((/* implicit */int) var_4)))))));
        }
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15063032203043928193ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11519))) : (1266126567U)))) ? (((/* implicit */unsigned int) arr_21 [i_6])) : (((922496558U) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_21 [i_6])) * (15063032203043928204ULL))))))));
        arr_25 [16ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_22 [i_6] [i_6] [i_6])))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14272))) : (15063032203043928204ULL)))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_21 += (+(var_5));
                            arr_35 [i_11] [(short)15] [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1))))) * (((/* implicit */int) ((signed char) var_13)))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_9] [i_10 - 1] [i_11])) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (unsigned char)171)))) / (var_6)));
                            arr_36 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) & ((+(((/* implicit */int) var_1))))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) & (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            var_24 = (+(5654404674583589465LL));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) 15063032203043928195ULL)) ? (var_7) : (arr_22 [8U] [i_9] [i_12]))) | ((~(var_11))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_41 [i_6] [i_6] = ((/* implicit */int) ((short) arr_28 [i_13] [i_10] [i_10 - 2] [i_10 + 2]));
                            arr_42 [i_6] [i_6] = ((/* implicit */unsigned char) var_7);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((0) * (((/* implicit */int) var_10))))) <= (var_0)));
                            var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_27 [i_13] [(signed char)6] [i_13])) ? (var_2) : (((/* implicit */unsigned long long int) var_0))))));
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_13] [i_10 + 2] [i_13] [i_10 + 2])) * (((/* implicit */int) arr_28 [i_10 + 2] [i_10 + 2] [i_10 - 2] [i_10 - 3]))));
                        }
                    }
                    var_29 = ((/* implicit */unsigned long long int) var_9);
                    arr_43 [i_6] [i_8] [i_9] [i_9] = ((((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) ((var_11) != (var_11)))) : (((/* implicit */int) var_9)))) << (((int) (!(((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_8] [i_6]))))));
                }
            } 
        } 
        arr_44 [i_6] = ((/* implicit */unsigned short) max((((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6]))))) - (1))))), (((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6] [0LL] [i_6] [i_6]))))))));
    }
    var_30 *= ((/* implicit */unsigned char) (signed char)-95);
}
