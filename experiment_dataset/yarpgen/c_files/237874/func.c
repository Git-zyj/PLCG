/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237874
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
    var_16 += ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)127)))), ((~(((/* implicit */int) ((var_12) == (var_15))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)13697)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)121)))) / (((((/* implicit */int) (unsigned char)255)) - (var_12)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_1)) : ((-(var_5)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_18 = ((((/* implicit */int) (short)-10694)) <= (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((short) 16653065332528255304ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (max((((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (short)31393)))), (min((var_15), (var_1))))))))));
                        var_20 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_13 [i_0 - 3])) : (((/* implicit */int) arr_2 [i_0 - 3])))), (max((((/* implicit */int) arr_5 [i_0 - 1])), (((((/* implicit */int) (signed char)76)) >> (((((/* implicit */int) (unsigned char)221)) - (200)))))))));
                        var_21 = (signed char)-1;
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) var_3);
    }
    for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_22 = (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)193)) ? (var_6) : (var_6))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_23 = ((/* implicit */signed char) max((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193)))))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) arr_5 [i_5 + 1]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        arr_27 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))) == (var_5))) ? (arr_24 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_6])) : (((/* implicit */int) arr_13 [i_5]))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5 - 1] [i_5 + 1]))) | (var_5)))));
                        var_25 = (_Bool)0;
                        arr_28 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */short) ((unsigned long long int) arr_21 [i_5] [i_5]));
                    }
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) arr_11 [i_5] [i_5])) + (3280634850U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)62)))))), (((/* implicit */unsigned int) ((unsigned char) ((18U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))))))))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (signed char i_10 = 3; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) var_1);
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((max((((7887597774321787858ULL) - (8375620374915153129ULL))), (((/* implicit */unsigned long long int) (unsigned char)211)))), (((/* implicit */unsigned long long int) (signed char)-94)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = arr_7 [i_5] [i_5] [4LL];
        /* LoopNest 2 */
        for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
        {
            for (int i_12 = 3; i_12 < 16; i_12 += 1) 
            {
                {
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (var_15))))));
                    var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (arr_23 [i_12] [i_11] [i_12]) : (((/* implicit */unsigned int) var_15))))))), (0ULL)));
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 4; i_13 < 17; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_14 = 1; i_14 < 16; i_14 += 3) 
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)-795)), (9766014593209108015ULL)))))) ? ((+(((((/* implicit */_Bool) -1322433837)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) : (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */short) var_4)), ((short)32751)))), (((((/* implicit */_Bool) (short)6816)) ? (((/* implicit */int) (signed char)-20)) : (var_12))))))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((_Bool) max(((short)32751), (((/* implicit */short) arr_6 [(_Bool)1] [(_Bool)1])))))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_7)))));
                arr_51 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0))))) : (((unsigned int) 18446744073709551615ULL)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_16] [i_13 + 1])))));
            }
            var_35 = ((/* implicit */unsigned char) var_0);
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_13 - 2] [(_Bool)1] [i_13 - 1] [i_13])) | (((/* implicit */int) arr_3 [i_13 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_13 - 4])))) : (((((/* implicit */_Bool) arr_33 [i_13 + 1] [(short)8] [i_13 - 2] [i_13 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_13 - 3] [(short)6] [i_13 + 1] [i_13]))) : (11407386918907635079ULL))))))));
            var_37 = ((/* implicit */signed char) (+((+((+(-1820202359)))))));
            arr_52 [i_15] [i_15] = var_14;
        }
        /* vectorizable */
        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            var_38 = (((+(-1343825691))) ^ ((-(((/* implicit */int) arr_37 [i_13])))));
            /* LoopSeq 2 */
            for (unsigned char i_18 = 2; i_18 < 16; i_18 += 4) /* same iter space */
            {
                var_39 += (unsigned char)255;
                arr_57 [i_18] [i_17] [i_18] [i_18] = ((arr_40 [i_17] [i_17] [i_17]) & (arr_40 [i_17] [i_17] [i_17]));
                var_40 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_13] [i_13] [i_17]))))));
            }
            for (unsigned char i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_48 [i_17] [i_19] [i_17] [i_17]) / (((/* implicit */int) arr_0 [i_13] [i_19])))))));
                var_42 = ((_Bool) (short)19706);
                var_43 = var_0;
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_11 [i_17] [i_17]))));
            }
        }
        for (int i_20 = 3; i_20 < 15; i_20 += 1) 
        {
            var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_13 - 3] [16])) == (((/* implicit */int) (signed char)106)))))));
            var_46 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)193))));
            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_45 [i_20])) - (((/* implicit */int) (signed char)-106)))), (((/* implicit */int) arr_18 [(short)6])))) + ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)255)))))))))));
        }
        var_48 = ((/* implicit */unsigned long long int) (-(min((min((4294967295U), (((/* implicit */unsigned int) arr_41 [i_13 - 1] [i_13])))), (((/* implicit */unsigned int) ((_Bool) 1160592084U)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            for (signed char i_22 = 0; i_22 < 18; i_22 += 3) 
            {
                for (signed char i_23 = 1; i_23 < 15; i_23 += 2) 
                {
                    {
                        var_49 = ((/* implicit */signed char) (short)24332);
                        arr_72 [i_21] [i_21] [i_13] [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) min((((((arr_14 [i_23] [i_22] [i_21] [i_13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) ((((/* implicit */int) arr_60 [i_13] [i_21] [i_21])) == (((/* implicit */int) arr_43 [i_13]))))))), (((/* implicit */int) (short)-19703))));
                        arr_73 [i_23] [i_22] [i_22] [i_13] = ((/* implicit */signed char) ((unsigned char) var_10));
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(24ULL)))) ? (((14157386803492135062ULL) - (arr_70 [i_13] [i_22]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)74)) - (((/* implicit */int) (signed char)-106)))))))) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) >= (arr_36 [i_13] [i_13] [i_13]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) <= ((+(7039357154801916536ULL))))))));
                        var_51 = ((/* implicit */unsigned long long int) min((((max((((/* implicit */unsigned int) (_Bool)1)), (arr_31 [i_13] [i_21] [i_22]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_13] [i_21] [i_22]))))), (((((/* implicit */int) arr_21 [i_13 + 1] [i_21])) <= (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_35 [i_13 - 1] [i_21] [i_13 - 1] [i_13])) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) var_15))));
    var_53 = ((/* implicit */_Bool) var_15);
}
