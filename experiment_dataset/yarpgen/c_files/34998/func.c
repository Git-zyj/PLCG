/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34998
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (+(var_3)))) / (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_0 + 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_3 [i_0])))))) * (((/* implicit */unsigned long long int) ((var_13) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3466)) / (1132099681)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_9 [i_0 + 1] [i_1] [16ULL] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_2])))) ? (((((/* implicit */unsigned long long int) (~(arr_2 [i_1])))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned char)19] [i_1]))) * (0ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)8258))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (arr_1 [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_1 [i_1 + 1] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)23)), (3036000029U)))) - (4635476416942036891LL)))));
                                var_20 |= ((unsigned long long int) (-(((/* implicit */int) ((_Bool) var_4)))));
                                var_21 = ((/* implicit */short) var_11);
                                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 8)), (var_3)))), (max((arr_13 [i_1 + 1] [i_1] [i_0 + 2] [i_0 + 2] [i_4]), (((/* implicit */unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) arr_8 [i_0] [(short)7]);
                        var_24 += ((/* implicit */unsigned long long int) ((arr_14 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))) * (4684360946596667231ULL)));
                            arr_24 [i_0] [i_0] [i_6] [i_6] = (+(((((/* implicit */int) arr_12 [(_Bool)1] [i_1 + 2])) & (((/* implicit */int) var_15)))));
                            arr_25 [i_0] [8ULL] |= ((/* implicit */long long int) arr_23 [i_7] [i_1 + 1] [i_5] [i_0 + 1] [i_7] [(_Bool)1]);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_13 [i_0] [19U] [19U] [i_6 - 1] [(unsigned char)8]))));
                            var_27 = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_8] [i_8 - 1] [i_5 - 1] [i_5 + 3] [i_1 + 2]));
                        }
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_5] [4U]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) -26)) & (4224290708325390752LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_8 [15U] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_30 = ((((arr_26 [i_1 - 1] [(unsigned char)21] [i_1 - 1] [i_9 - 1] [i_10]) ? (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_12))))) : (arr_21 [i_10]))) << (((max((max((((/* implicit */unsigned int) (unsigned short)32847)), (var_1))), (((/* implicit */unsigned int) (short)-1223)))) - (4294966070U))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_18 [i_10]) % (max((3176456519292718928ULL), (((/* implicit */unsigned long long int) var_10))))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((var_10), (((/* implicit */signed char) arr_30 [i_0] [1] [2LL] [(signed char)14])))))))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_10] = max(((!(((/* implicit */_Bool) ((4611686018427387903ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32688)))))))), (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */long long int) (-2147483647 - 1))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (var_3))))))));
                            var_32 = ((/* implicit */long long int) ((unsigned int) var_5));
                        }
                        var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_39 [i_12] [i_0] [i_5] [6LL] [i_0] [i_0 - 2] |= ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)-1243)))));
                                var_34 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8064))))) != (1258967266U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_35 += ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_14), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_17))))))) ? (var_11) : (((/* implicit */long long int) var_16))));
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
        {
            for (long long int i_15 = 2; i_15 < 10; i_15 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) min((arr_1 [i_14 - 2] [i_15 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_7 [i_16] [(_Bool)1]), (arr_15 [i_13] [i_16] [(_Bool)1] [i_16] [i_13])))), (((((/* implicit */_Bool) 8321499136ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (2738618205U))))))));
                        arr_49 [i_13] [8U] [i_15] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (1258967266U))), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), ((_Bool)1)));
                        var_38 = ((/* implicit */unsigned long long int) arr_41 [i_15]);
                        var_39 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_13] [i_15])) >> (((var_3) - (2193122991U)))));
                    }
                    var_40 &= arr_45 [i_15] [i_14] [i_15] [i_15];
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 3; i_18 < 11; i_18 += 1) 
                    {
                        for (short i_19 = 1; i_19 < 11; i_19 += 1) 
                        {
                            {
                                arr_57 [i_13] [8ULL] [i_15 + 1] [i_15] [i_18 - 3] [i_19] [8ULL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_40 [i_14 - 2])))), (((((/* implicit */_Bool) arr_1 [i_14] [i_14])) ? (((/* implicit */int) arr_46 [i_15 + 1] [i_15] [i_15] [i_13] [i_13] [i_14])) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-14461))))) ? (((/* implicit */unsigned long long int) (-(var_3)))) : (((((/* implicit */unsigned long long int) var_13)) % (var_0)))))));
                                var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) & ((((+(((/* implicit */int) (short)1246)))) & (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13762383127112884385ULL)) ? (15237277952543640842ULL) : (((/* implicit */unsigned long long int) 4226581814U))));
                    arr_58 [i_13] [i_13] [i_13] [i_15 - 1] = ((/* implicit */short) min((max((var_13), (((/* implicit */unsigned int) arr_55 [i_13] [i_14 + 2] [i_14 + 2] [i_13] [i_13] [i_13] [i_13])))), ((+(var_5)))));
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned char) var_5);
}
