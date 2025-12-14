/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43346
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
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((538009269619851943LL), (((/* implicit */long long int) (unsigned char)199))))) ? (((-538009269619851943LL) - (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51145)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    var_15 = arr_4 [i_0] [i_0];
                    arr_7 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)85)) || (((/* implicit */_Bool) (unsigned char)7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_4] = ((/* implicit */short) arr_10 [i_4] [i_2] [6] [i_0]);
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3] [i_2 - 2])))) | (((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 4; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) : (18446744073709551615ULL))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551607ULL)))))));
                    arr_17 [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_7))))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [(short)10] [(_Bool)1] [i_0] [2ULL])))))))) ? ((+(((/* implicit */int) arr_1 [6ULL])))) : (((/* implicit */int) arr_8 [i_5] [(unsigned char)11] [i_0] [i_0]))));
                    arr_18 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-43))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (int i_8 = 4; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 13895781767939311130ULL))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2]))) * (arr_14 [i_0] [i_1] [1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7])))));
                                var_20 = ((/* implicit */long long int) arr_20 [i_6] [i_6] [i_8]);
                                var_21 &= ((/* implicit */unsigned char) ((long long int) 8462080862267816767ULL));
                                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))));
                                var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned char)247))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((min((arr_8 [i_0 + 1] [8ULL] [i_6] [i_6]), (((/* implicit */unsigned short) ((_Bool) arr_0 [(signed char)8]))))), (var_3))))));
                    var_25 &= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_24 [i_0 - 2] [i_1] [i_6] [i_6]), (((/* implicit */unsigned short) var_11)))))));
                    arr_27 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14867967525461873395ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (3578776548247678220ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)179)) == (((/* implicit */int) var_12))))))))));
                    arr_28 [4ULL] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) 558677630))));
                }
                for (unsigned char i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) (((+(12371680493507265439ULL))) <= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [(signed char)5] [(unsigned char)5]))))))))));
                    var_27 = ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [7ULL] [i_9] [i_9 + 1])), (var_9)));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)46257)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_10))));
                    arr_35 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) var_3))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_30 = ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : ((~(var_8))));
                        arr_40 [i_0] [i_0] [7ULL] [i_11] = ((/* implicit */unsigned short) var_7);
                        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 - 4])) ? (((/* implicit */int) arr_12 [i_0 - 4] [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_16 [i_11] [i_0 + 2] [i_11]))));
                        arr_41 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0] [1ULL] [i_0] = ((/* implicit */long long int) 16479651775036115185ULL);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 2; i_12 < 11; i_12 += 2) 
                        {
                            var_32 = var_8;
                            var_33 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(unsigned char)7] [i_0 + 2] [i_0 + 2]))) * ((+(2185608696554470653ULL))));
                        }
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_48 [i_0 + 1] [i_1] = ((/* implicit */long long int) var_13);
                        arr_49 [(unsigned char)4] [i_10] [i_1] [i_0] = ((/* implicit */unsigned long long int) -6583294557126554506LL);
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_0 + 2] [i_0 - 2] [i_0 + 2])))))));
                        var_35 = var_9;
                    }
                    var_36 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 4; i_15 < 10; i_15 += 2) 
                    {
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) 7549437061095674105LL))), (min(((unsigned short)2959), (((/* implicit */unsigned short) var_13)))))))));
                                arr_59 [(unsigned short)2] [(unsigned short)9] [i_15 + 1] [11LL] [2ULL] = ((/* implicit */long long int) ((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_0] [i_1] [i_14] [6ULL] [i_16] [i_16])) << (((arr_29 [i_1] [i_1] [i_1]) - (11081167813937615800ULL)))))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_14] [(unsigned char)4]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_33 [i_0])) : (9170891696156890662ULL)))))));
                                arr_60 [i_0] [i_0] [i_0] [i_0] [(unsigned short)7] [(unsigned char)1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_53 [i_0 + 3] [i_15 - 2]))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [2LL] [i_16]))) % (-6583294557126554504LL)))) ? ((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_14])))) : (((/* implicit */int) arr_20 [i_0 - 1] [i_15 + 1] [i_14]))));
                                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) var_6))));
                            }
                        } 
                    } 
                    var_40 = var_7;
                }
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)140)) ? (((((((/* implicit */int) var_5)) + (2147483647))) << (((var_10) - (1676141363255386690ULL))))) : ((~(((((/* implicit */int) var_5)) / (((/* implicit */int) var_5))))))));
    var_42 = ((/* implicit */signed char) var_9);
}
