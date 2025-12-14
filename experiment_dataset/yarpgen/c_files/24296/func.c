/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24296
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
    var_14 = ((/* implicit */unsigned char) 31U);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_15 = var_3;
                    var_16 = ((/* implicit */short) (unsigned char)96);
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_17 = ((/* implicit */short) 4611686018427387903LL);
                    arr_10 [i_0] [i_3] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1077)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) 1781613137U)) : (((((/* implicit */_Bool) -1LL)) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7)))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 786686157)) ? (-1LL) : (15LL)))) ? (2007266314U) : (2147483647U)));
                        }
                        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */int) var_1);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 8442424234921656097LL)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)55907)) ? (((/* implicit */int) (unsigned short)55912)) : (((/* implicit */int) (short)22174)))))));
                            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) 96)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (short)-12574))));
                            arr_18 [i_0 + 1] [i_3] [i_3] [i_3] [i_4] [i_4] [i_6] = ((/* implicit */long long int) var_9);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) 61485763)) : (1073741820U)));
                        }
                        var_24 = ((/* implicit */short) var_0);
                    }
                    /* vectorizable */
                    for (short i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        arr_22 [i_7 - 1] [i_3] [i_3] [i_0 - 1] = (short)-8;
                        var_25 = ((/* implicit */short) var_8);
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)3)) ? (2305843009213693888LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
                        var_27 = ((/* implicit */long long int) (unsigned char)92);
                    }
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) 1048575U);
                        arr_30 [i_3] [i_3] [i_1] [i_3] = 8114858864697771762LL;
                        /* LoopSeq 3 */
                        for (int i_10 = 2; i_10 < 17; i_10 += 1) 
                        {
                            var_28 ^= ((/* implicit */short) 17592186044415LL);
                            var_29 = (unsigned char)164;
                        }
                        for (unsigned short i_11 = 3; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (6710639904559196495LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21317)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)511))) : (333365940U))))));
                            var_31 ^= ((/* implicit */long long int) 3961601360U);
                        }
                        for (unsigned short i_12 = 3; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            var_32 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2147483648U)) : (((((/* implicit */_Bool) (unsigned short)3749)) ? (5150934311710604091LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                            arr_38 [i_0] [i_3] [i_3] = 8114858864697771762LL;
                            var_33 = ((/* implicit */unsigned char) 333365964U);
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_42 [i_3] = ((/* implicit */long long int) (unsigned short)65535);
                        var_34 = 524047185580382315LL;
                        /* LoopSeq 3 */
                        for (short i_14 = 3; i_14 < 17; i_14 += 1) 
                        {
                            arr_46 [i_0] [i_3] [i_3] [i_3] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5764)) ? (((/* implicit */long long int) 2511674370U)) : (8114858864697771759LL)));
                            arr_47 [i_1] [i_3] [i_3] = ((/* implicit */short) -5058530455730308286LL);
                            var_35 *= ((/* implicit */unsigned short) (short)28210);
                            var_36 = 2146959360;
                        }
                        for (short i_15 = 2; i_15 < 17; i_15 += 3) 
                        {
                            arr_50 [i_0] [(short)5] [i_3] [i_15] = ((/* implicit */long long int) var_0);
                            var_37 = ((/* implicit */long long int) (short)11782);
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) -2146959361)) : (-8509234435640666910LL)));
                            var_39 |= ((/* implicit */short) var_1);
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) -1798099204)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (short)-25040)))) : (((((/* implicit */_Bool) (short)27538)) ? (((/* implicit */int) (short)30093)) : (2015338881)))));
                        }
                        for (long long int i_16 = 1; i_16 < 16; i_16 += 1) 
                        {
                            var_41 = ((/* implicit */int) var_8);
                            var_42 ^= ((/* implicit */int) (unsigned short)65535);
                            arr_54 [14LL] [i_1] [i_1] [i_3] [i_3] [i_13] [i_16 + 1] = ((/* implicit */long long int) (short)20260);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        arr_57 [i_3] [i_3] = ((/* implicit */short) (unsigned char)255);
                        var_43 = ((/* implicit */unsigned char) 3596416967317503262LL);
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 4) 
                    {
                        var_44 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)21261)) : (((/* implicit */int) (short)-20728))))) ? (((((/* implicit */_Bool) 2161727821137838080LL)) ? (((/* implicit */long long int) var_12)) : (var_6))) : (((/* implicit */long long int) var_13))));
                        var_45 *= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 4095U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)23006))));
                        arr_62 [i_3] [i_1] [i_1] [i_18] [i_18] = ((/* implicit */short) -405128829);
                    }
                }
                for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (short)1023))));
                    var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) 2305843009213693951LL))));
                }
                var_48 += ((/* implicit */unsigned short) 7);
                var_49 = ((/* implicit */unsigned int) 5150934311710604091LL);
            }
        } 
    } 
    var_50 ^= (unsigned short)65535;
    var_51 = ((/* implicit */unsigned char) (short)-1);
}
