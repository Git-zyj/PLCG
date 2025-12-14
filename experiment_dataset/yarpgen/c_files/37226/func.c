/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37226
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30483))) : (arr_12 [i_3 - 1] [i_3] [3ULL] [i_1] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [(short)9] [i_0])))));
                        arr_13 [i_0] [(short)6] [i_2] [i_3 - 1] = ((/* implicit */int) ((arr_1 [i_0 + 1]) & (arr_1 [i_0 - 1])));
                    }
                } 
            } 
        } 
        var_15 = ((unsigned char) (short)30483);
        var_16 = (+(((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 - 1])));
        var_17 += ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-25312)))) ? (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) ((short) arr_6 [i_0] [i_0] [8ULL])))));
        /* LoopSeq 3 */
        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                arr_19 [i_5] [(short)8] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1]))));
                var_18 = (-(((/* implicit */int) arr_18 [i_4 + 2] [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_19 = (+(((/* implicit */int) arr_23 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 1])));
                            arr_25 [i_5] [i_5] [i_5] [i_0] [(unsigned short)10] [i_0] [i_5] = arr_0 [i_0] [i_4];
                        }
                    } 
                } 
                arr_26 [i_0] [i_4 - 1] [i_5] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 1] [i_4 + 1])))))) : ((-(var_1)))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */short) arr_29 [i_0] [11ULL]);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_4 + 1] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_4 - 1] [i_0 - 1]))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 1362575710733157654ULL))) ? (((/* implicit */long long int) arr_14 [i_0])) : (arr_3 [i_0] [(unsigned short)9] [i_0])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    {
                        arr_39 [i_4 - 1] [i_0] [i_4 - 1] = ((/* implicit */unsigned long long int) arr_35 [i_0] [i_4] [i_0] [2] [i_4] [i_11]);
                        arr_40 [i_0] [i_0] [i_10] [i_0] [i_4 - 1] [i_11] = ((/* implicit */long long int) 2147483645);
                        arr_41 [i_0] [i_0] [i_10] [i_11] = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_13] [i_12] [i_12])) ? (((/* implicit */int) arr_24 [i_0] [i_12] [i_13] [i_12 - 1] [i_12 + 1] [i_0 + 1])) : (((/* implicit */int) (short)-32762))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_12 - 1])) : ((~(((/* implicit */int) arr_10 [i_0 + 1] [i_12 - 1] [13ULL])))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            var_25 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_38 [i_12 - 1] [i_12 + 1] [i_12 + 1] [(unsigned short)7]))));
                            arr_54 [i_0] [i_12 - 1] [i_13] [i_13] [i_0] [i_14] [i_15] = ((/* implicit */int) ((unsigned short) 2198956146688ULL));
                            var_26 *= arr_24 [i_0 + 1] [i_12] [(unsigned char)6] [i_14] [(unsigned char)6] [i_15];
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_12 + 1] [i_16]))));
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)15360)) > (((/* implicit */int) (short)13739)))))));
            }
            arr_57 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_12 [(short)6] [i_12 + 1] [i_12] [i_12 + 1] [i_17]))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)-43)))))))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_18] [i_12])) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_36 [i_0 + 1] [i_0 - 1]))));
                        arr_63 [i_0 + 1] [i_0] [i_0] [i_17] [i_18] = ((/* implicit */unsigned char) arr_30 [i_0] [i_0 - 1] [i_12] [i_12 + 1]);
                        arr_64 [i_18] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_0 + 1] [i_12 + 1]))));
                    }
                } 
            } 
        }
        for (short i_19 = 3; i_19 < 12; i_19 += 4) 
        {
            var_32 = ((((/* implicit */_Bool) arr_44 [i_0 - 1])) ? (((/* implicit */int) arr_50 [i_0 - 1] [i_19 - 1])) : (((/* implicit */int) arr_44 [i_0 - 1])));
            arr_67 [i_0] [i_19 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32762))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (arr_7 [i_0 - 1] [i_0 + 1] [(short)8]))))));
        }
    }
    for (unsigned long long int i_20 = 2; i_20 < 18; i_20 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)15)), ((short)-14730)))) ? ((((!(((/* implicit */_Bool) (short)16384)))) ? (((/* implicit */int) min(((unsigned short)4034), (((/* implicit */unsigned short) arr_68 [i_20] [i_20]))))) : ((-(((/* implicit */int) (unsigned char)229)))))) : ((-(((/* implicit */int) var_10))))));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) var_3))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 2) 
    {
        var_36 = (short)32758;
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 2; i_23 < 11; i_23 += 4) 
            {
                {
                    arr_79 [i_23] [i_22] [i_21] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [i_23 - 2])) ? (((/* implicit */int) arr_2 [i_23 + 2])) : (((/* implicit */int) arr_2 [i_23 + 2]))))));
                    arr_80 [i_23] [(unsigned char)3] [i_22] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)739))))) ? (((/* implicit */int) min((arr_74 [i_23 + 2] [i_22]), (((/* implicit */unsigned short) arr_43 [i_23 + 1]))))) : ((-(((/* implicit */int) arr_74 [i_23 + 1] [i_22]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 13; i_24 += 2) 
        {
            for (short i_25 = 1; i_25 < 12; i_25 += 1) 
            {
                {
                    arr_88 [i_21] [i_24] [i_21] [i_21] = ((/* implicit */unsigned char) 30038271465610906LL);
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 13; i_26 += 4) 
                    {
                        for (unsigned long long int i_27 = 4; i_27 < 12; i_27 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) max((((/* implicit */long long int) max((arr_50 [i_25 - 1] [i_27 - 1]), (arr_50 [i_25 + 1] [i_27 - 3])))), (-2534821580413228972LL))))));
                                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)4080)) ^ (((/* implicit */int) (signed char)95))))) ? (((((/* implicit */_Bool) (unsigned short)29173)) ? (var_7) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) (short)-3962)) ^ (((/* implicit */int) arr_93 [i_27 - 4] [i_26] [i_25])))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-3962)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) (short)6)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 *= ((/* implicit */unsigned char) min((((short) arr_29 [i_21] [i_21])), (((/* implicit */short) max((arr_8 [i_21] [i_21] [i_21]), (arr_8 [i_21] [7] [i_21]))))));
    }
}
