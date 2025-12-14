/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26901
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) * (((/* implicit */int) var_16)))) * (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) (signed char)29))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) + (((var_4) / (((/* implicit */unsigned int) 2004160019)))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2045125479)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_10))))) ? ((-(((/* implicit */int) (unsigned short)17507)))) : (((/* implicit */int) arr_0 [i_2]))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)43033))));
                    arr_8 [13U] [i_1] [i_2 - 2] [i_2 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)13373)) : (((/* implicit */int) (signed char)72))))) / (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_4) : (((/* implicit */unsigned int) 1733099763))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)17507)) ^ (((/* implicit */int) arr_7 [i_0] [i_0]))))) >= ((~(arr_3 [i_0] [i_0])))))) : (((((/* implicit */int) ((((/* implicit */int) (signed char)-19)) <= (910949861)))) | (((/* implicit */int) var_17))))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_8))))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) <= (max((11967127196971560169ULL), (((/* implicit */unsigned long long int) (short)21468)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) 11967127196971560169ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (var_8)))) : (((((/* implicit */_Bool) (short)-10762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (arr_11 [i_3])))))));
                    arr_14 [i_0] [i_3] [i_4] = ((/* implicit */int) (!(((var_12) > (((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_3] [i_6] = ((/* implicit */long long int) (unsigned char)80);
                                var_24 = ((/* implicit */unsigned int) ((((long long int) arr_4 [i_3 - 1])) >> (((var_9) - (1557025913U)))));
                                var_25 = ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 23; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_27 = ((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_9 + 1] [i_10])) ? (((((/* implicit */_Bool) arr_27 [i_7 + 4] [i_8] [i_9] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17488459282324477524ULL))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 + 2])) ? (arr_26 [i_7 + 2] [i_9 - 1] [i_10]) : (arr_26 [i_7 + 2] [i_9 - 1] [i_10])));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) var_18);
            arr_30 [i_7] [i_7] [i_8] = ((/* implicit */signed char) 6479616876737991446ULL);
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9250)))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((short) arr_28 [i_13 + 1] [i_13 + 2] [i_13] [i_13])))));
                            var_32 = ((/* implicit */unsigned int) var_12);
                            var_33 = ((/* implicit */signed char) 0U);
                            arr_37 [i_13] [i_13] [i_13] = ((/* implicit */long long int) arr_22 [i_7 + 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (unsigned short i_15 = 2; i_15 < 23; i_15 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (var_9)))));
                            arr_42 [i_7] [i_8] [i_11] [i_14] [i_15] = ((/* implicit */long long int) (unsigned short)53198);
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) 18441732153652106925ULL))));
                            var_36 = ((/* implicit */unsigned long long int) ((int) var_8));
                            var_37 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 2292400730U)) ? (arr_24 [i_7] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                        }
                    } 
                } 
                var_38 ^= arr_28 [i_7] [i_7 + 4] [i_7 - 1] [i_7 - 1];
            }
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    arr_50 [i_7] [i_17] [i_16] [i_16] = var_1;
                }
                for (signed char i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                {
                    arr_53 [i_7] = var_14;
                    arr_54 [i_7 + 4] [i_8] [i_16] [i_16] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_40 [i_7 + 4] [i_7 + 1] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1])))) / (4535388177905275515LL)));
                    var_40 = ((/* implicit */int) ((((unsigned int) arr_31 [i_8] [i_16])) < ((+(4294967284U)))));
                }
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    for (unsigned short i_20 = 1; i_20 < 22; i_20 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)191)))) ^ (((/* implicit */int) ((signed char) var_16)))));
                            arr_61 [i_7 - 1] [i_8] [i_16] [i_7 - 1] [i_19] = ((/* implicit */int) ((((6450227035429045135LL) ^ (9223372036854775807LL))) != (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                var_42 *= ((/* implicit */unsigned long long int) (~(var_9)));
                var_43 = (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)75)) && (((/* implicit */_Bool) 214246280U))))));
            }
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (short i_23 = 2; i_23 < 22; i_23 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */int) 0U);
                            var_45 = ((/* implicit */signed char) ((var_3) >> (((arr_52 [i_7 + 4] [i_7 + 1] [i_7 + 1] [i_8] [i_23 - 1] [(_Bool)1]) - (188367975U)))));
                            var_46 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (-9223372036854775786LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (1193549682807520062LL)));
                            arr_70 [i_22] [i_8] [i_22] [i_8] [i_8] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)31419)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))));
                        }
                    } 
                } 
            } 
        }
        for (short i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
        {
            var_47 += ((((((/* implicit */unsigned int) ((/* implicit */int) max(((short)28604), (((/* implicit */short) (signed char)127)))))) != (1023542690U))) ? (((/* implicit */int) (short)1793)) : (((2147483647) / (((((/* implicit */_Bool) (unsigned short)24170)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)0)))))));
            var_48 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 11342073126531333076ULL)) ? ((-(var_4))) : (((((/* implicit */_Bool) 3356309425U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (2292400708U))))));
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(var_17)))))))));
        }
        var_50 = ((/* implicit */long long int) ((unsigned int) var_8));
        arr_73 [17] = ((/* implicit */int) var_17);
    }
}
