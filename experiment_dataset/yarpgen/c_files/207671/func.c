/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207671
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
    var_12 = var_5;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65503)) : (((/* implicit */int) var_0)))) : ((~(1886906493)))))) ? ((+(((/* implicit */int) (short)-18998)))) : (((/* implicit */int) (short)16367))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) max((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 2] [i_1])))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])))) : ((-((((_Bool)1) ? (2147483647) : (((/* implicit */int) (short)16364)))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))) == (var_4)))) <= (((arr_3 [i_1 + 2] [i_1 + 3]) ? (((/* implicit */int) (unsigned short)2111)) : (((/* implicit */int) var_10))))));
                var_14 += ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) (short)29141)) : (((/* implicit */int) (unsigned char)28)))) <= ((-(((/* implicit */int) (short)-1))))));
                arr_10 [(signed char)19] [i_1] [i_0] = ((/* implicit */short) ((_Bool) (-(((17300411) * (0))))));
                var_15 = max((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1])), (var_7)))), ((+(((/* implicit */int) var_7)))));
            }
            for (signed char i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)52052);
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) (unsigned short)32);
                    var_17 += ((/* implicit */short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        arr_19 [(unsigned short)12] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) var_4);
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)13502))) ? (((4U) + (((/* implicit */unsigned int) arr_16 [i_5] [i_5] [i_5] [i_5 + 1] [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) (-(max((arr_0 [i_1]), (((/* implicit */int) var_1))))));
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    arr_24 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_25 [i_0] [i_1 + 2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))))) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [7ULL] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [(unsigned char)0] [i_1 + 1] [i_1] [i_1] [i_1] [i_0] [(unsigned char)0]))))) : (((((/* implicit */_Bool) arr_18 [12] [i_1 + 3] [i_1] [12] [i_1] [12] [12])) ? (4294967284U) : (((/* implicit */unsigned int) -1388715044))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 4; i_7 < 22; i_7 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16367)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3 - 1] [i_0] [i_3] [i_7]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) * (6506927630791445591ULL)))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1388715042))));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)3)) % (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_4)))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))))) : ((~(2188717957U)))));
            }
        }
    }
    /* vectorizable */
    for (short i_8 = 4; i_8 < 14; i_8 += 1) /* same iter space */
    {
        arr_32 [(signed char)14] &= ((/* implicit */_Bool) (~((-(((/* implicit */int) var_11))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_40 [i_8] = ((/* implicit */signed char) (((((-(((/* implicit */int) var_1)))) + (2147483647))) << ((((+(((/* implicit */int) (unsigned char)182)))) - (182)))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (short)-8174))));
                }
            } 
        } 
    }
    for (short i_11 = 4; i_11 < 14; i_11 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [20ULL] [i_11] [(signed char)0] [i_11 - 1])) ? (arr_0 [i_11]) : (((/* implicit */int) (signed char)36))))) ? (((((/* implicit */_Bool) var_8)) ? (((var_3) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29142))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (arr_41 [i_11]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((var_2) << (((var_5) - (2825608414U))))))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((_Bool) arr_35 [(_Bool)1] [(_Bool)1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_15 = 1; i_15 < 15; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (unsigned short i_17 = 4; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (_Bool)1);
                            var_29 = ((/* implicit */signed char) 2106249327U);
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)31)))) | (((/* implicit */int) arr_44 [i_15] [i_12])))))));
                            var_31 |= ((/* implicit */_Bool) var_4);
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_47 [i_11] [i_12] [i_15 + 1]))))))));
                        }
                    } 
                } 
            } 
            arr_59 [(_Bool)1] [i_12] = ((((/* implicit */_Bool) 2106249330U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) : (arr_50 [i_12 + 1] [i_12] [i_11] [i_12 + 1]));
        }
    }
    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 3) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16367)) << (((3471173191U) - (3471173175U))))))));
        arr_62 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), (var_3)))) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)52065)) && (((/* implicit */_Bool) var_10)))))))) : ((~((~(4U)))))));
        arr_63 [i_18] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3772706940519471070ULL))));
    }
}
