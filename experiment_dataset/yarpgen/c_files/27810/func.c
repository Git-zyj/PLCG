/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27810
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
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (var_14)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16)))))));
    var_21 -= ((/* implicit */unsigned long long int) ((unsigned char) var_3));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (35184372088831ULL))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((int) var_8)) / (((/* implicit */int) (unsigned short)65535)))));
                var_23 += ((/* implicit */signed char) ((((/* implicit */int) var_16)) % (var_14)));
                arr_6 [i_1] = ((/* implicit */int) 35184372088835ULL);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) var_12);
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (11U) : (((/* implicit */unsigned int) 2147483647)))))));
                    var_25 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                    arr_11 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) | (var_19))))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_3] [i_1] [i_5 - 1] = ((/* implicit */unsigned char) ((((var_8) + (((/* implicit */int) var_6)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))));
                                arr_19 [i_5 - 3] [i_1] [i_5 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((((/* implicit */int) var_11)) + (((((/* implicit */int) var_5)) - (2147483647))))) : (((((((/* implicit */int) (unsigned char)29)) - (((/* implicit */int) var_10)))) - (((/* implicit */int) (unsigned char)239))))));
                                var_26 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) * (((unsigned long long int) ((int) (short)32760)))));
                                var_27 += ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_23 [i_0 - 1] [2ULL] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) * (((((/* implicit */_Bool) 13711676226422522239ULL)) ? (((/* implicit */unsigned long long int) 3151174193302662346LL)) : (13711676226422522256ULL)))));
                        arr_24 [i_0] [i_1] [i_1] [i_6] [i_3] = ((/* implicit */signed char) ((int) var_3));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 1; i_7 < 7; i_7 += 3) 
                        {
                            var_28 -= ((/* implicit */long long int) ((int) (short)12288));
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)(-127 - 1)))))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_30 |= ((/* implicit */_Bool) var_13);
                            var_31 = ((/* implicit */signed char) var_9);
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) ? (var_3) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) 9ULL)) && (((/* implicit */_Bool) (short)6149))))) : (((/* implicit */int) ((((/* implicit */_Bool) 11U)) || (((/* implicit */_Bool) 4294967285U)))))))));
                            arr_30 [i_0] [i_1] [i_1] [(unsigned char)5] [3] [i_0 - 1] = ((/* implicit */int) ((short) ((short) var_10)));
                            var_33 = ((/* implicit */short) var_2);
                        }
                        for (unsigned short i_9 = 3; i_9 < 6; i_9 += 2) 
                        {
                            var_34 ^= ((/* implicit */short) ((signed char) ((((/* implicit */int) var_2)) << (((var_8) - (214823421))))));
                            arr_34 [i_1] [i_6] [i_1] = ((/* implicit */signed char) var_18);
                            arr_35 [i_0] [i_1] [i_0 - 1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((long long int) var_18)) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */int) var_12)))))));
                        }
                        var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) * (var_3))) | (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_16)) - (4748))))) : (((/* implicit */int) ((signed char) (short)-32756)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_18))));
                            arr_38 [i_0] [i_1] [i_3 + 1] [i_6] [i_10 - 1] [i_10] [i_10] = ((/* implicit */int) var_13);
                            arr_39 [i_1] [i_1] [i_3] [i_0] [i_0 - 1] [i_3] [i_1] &= ((/* implicit */unsigned int) -1);
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_37 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_8))) + (((unsigned int) var_15))));
                            var_38 = ((/* implicit */short) var_14);
                            arr_43 [i_0 + 1] [i_1] [i_3] [i_1] [(signed char)4] = ((/* implicit */short) var_6);
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) max((((short) var_3)), (var_17))))));
                        }
                    }
                    for (int i_12 = 2; i_12 < 8; i_12 += 1) 
                    {
                        var_40 += ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32752)) : (var_14))) - (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((signed char) 2147483647))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_18))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 6; i_13 += 4) 
                        {
                            var_41 = -1;
                            arr_48 [i_1] [i_1] [i_3] [i_12] [i_0] [i_1] = 4026509752081514679ULL;
                        }
                        /* vectorizable */
                        for (short i_14 = 1; i_14 < 6; i_14 += 2) 
                        {
                            arr_51 [i_14 - 1] [i_12] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned int) ((unsigned char) var_8));
                            var_42 |= ((/* implicit */signed char) ((short) var_7));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) 
                        {
                            var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((int) (signed char)64)) * (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (short)-25491)) : (((/* implicit */int) (unsigned char)235)))))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) var_18))) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) var_19))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)31))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 1; i_16 < 9; i_16 += 1) 
                        {
                            var_45 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (short)-32765))));
                            var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (11U)));
                        }
                        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)25491)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-1)))) << ((((~(((/* implicit */int) var_7)))) + (266)))));
                        var_48 ^= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 6; i_17 += 2) 
                    {
                        arr_59 [i_1] [i_3 + 3] [i_17] = ((/* implicit */signed char) var_1);
                        arr_60 [i_1] [i_1] [i_3] [5ULL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((1006632960) + (((/* implicit */int) (short)-29614)))) : (((/* implicit */int) var_10)))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((unsigned char) -1))))))));
                        var_49 = ((/* implicit */signed char) var_11);
                        var_50 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))) + (2ULL)))));
                        var_51 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_11))))) - (var_8)));
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) + (((/* implicit */int) var_13)))) % (((/* implicit */int) var_10)))))));
                        var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11)))));
                        var_54 ^= ((((((/* implicit */_Bool) ((var_14) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (short)25500)) ? (((/* implicit */unsigned int) var_18)) : (var_19))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) var_12))))));
                    }
                    arr_64 [i_1] = ((/* implicit */unsigned int) var_17);
                }
            }
        } 
    } 
    var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (var_19))))))));
}
