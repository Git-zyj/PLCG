/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31335
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
    var_11 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17841)))))), (((((/* implicit */_Bool) (signed char)-14)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (31))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) >> (((((/* implicit */int) var_5)) / (((/* implicit */int) ((signed char) (short)1984))))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_2 [i_0]))))));
                        var_14 ^= ((/* implicit */unsigned short) ((((_Bool) (signed char)-45)) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (8223302935534365772ULL)))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_3] [i_0 + 1])) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [i_0 + 1]))))) ? (((/* implicit */int) (signed char)24)) : (((((/* implicit */int) arr_10 [(short)18] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1])) >> (((/* implicit */int) arr_10 [i_1] [i_1 + 3] [i_1] [i_1] [(unsigned char)2] [i_1 - 1])))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] [(signed char)2] [i_4] [i_0] [i_4] [i_1] &= ((/* implicit */signed char) 3219818043U);
                        arr_18 [0U] [0U] [i_4] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)65518);
                    }
                } 
            } 
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(max((((/* implicit */int) (unsigned char)128)), (778022764))))))));
        }
        arr_19 [i_0] |= ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 2])), (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 2]))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned long long int) (signed char)42);
        arr_22 [1] |= ((/* implicit */unsigned long long int) var_8);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) var_2);
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_24 [9U]), (((/* implicit */int) (short)0))))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_12 [i_7 - 2] [i_7 - 1] [i_7 - 2]))))) ? ((-(arr_1 [i_7 - 2]))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_1))))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                for (unsigned char i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_1 [(signed char)22]))));
                        arr_32 [i_7] [i_8] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) -778022773);
                        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_7] [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7 - 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_10 - 1])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_10 + 2])) ? (((/* implicit */int) arr_6 [i_10] [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) arr_29 [i_7 - 2] [i_8] [i_8] [i_8])))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_37 [i_11] = ((/* implicit */signed char) arr_14 [i_7] [i_7]);
                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_14 [i_7 - 1] [i_7])))) ? ((~(((/* implicit */int) ((short) var_3))))) : (((/* implicit */int) (short)4670))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    for (unsigned char i_13 = 4; i_13 < 19; i_13 += 2) 
                    {
                        {
                            arr_43 [i_11] [i_11] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) * (max((var_7), (((/* implicit */unsigned long long int) arr_40 [i_12]))))))));
                            var_22 = ((/* implicit */short) max((max((var_3), (min((((/* implicit */unsigned long long int) var_9)), (var_7))))), (((/* implicit */unsigned long long int) (~(arr_13 [i_7 - 2] [i_7 + 1] [i_13 + 2]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((arr_3 [i_7] [i_7] [i_7]) - (3502996465628344665ULL)))))), (((unsigned int) 18446744073709551612ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-32764)) != (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)6244)), (max((4537071406276878289ULL), (((/* implicit */unsigned long long int) (short)-8294))))))));
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_7])) ? (arr_5 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) < (((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7]))))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) 18194233685607802293ULL)) || (((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) var_5))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_3))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 1; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        {
                            arr_52 [17ULL] [i_8] [i_14] [i_15] [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) 6891028000930501854ULL))) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15 + 1] [i_7 - 1]))))))));
                            arr_53 [i_16] [2LL] [i_15] [i_15] [i_14] [i_8] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_7] [i_7] [i_7 - 1] [i_7 - 2] [i_7]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) - (arr_1 [4U]))) : (var_4)))));
                            arr_54 [i_8] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_36 [(unsigned char)6] [i_8])) : (((/* implicit */int) arr_2 [i_8]))))) ? ((+(((/* implicit */int) arr_45 [i_16] [i_8] [i_7])))) : (((/* implicit */int) (unsigned short)65525)))), (((/* implicit */int) var_6))));
                            arr_55 [i_7 - 2] [i_7 - 2] [i_14] [i_7 - 2] [i_15] [i_16] = ((/* implicit */short) arr_46 [i_15]);
                        }
                    } 
                } 
            }
        }
    }
    for (short i_17 = 1; i_17 < 23; i_17 += 2) 
    {
        var_26 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_17 + 1]))) <= (5052862549915255769LL))) || (((/* implicit */_Bool) (signed char)112))));
        arr_60 [i_17] [i_17] |= ((/* implicit */_Bool) ((signed char) min((arr_59 [i_17 + 1] [i_17 + 1]), (arr_59 [i_17 + 1] [i_17 + 1]))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 1; i_18 < 23; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (unsigned char)148))));
                        arr_67 [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_59 [i_18] [i_19]))))), ((unsigned char)32)))))));
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */int) arr_64 [i_19])) : (arr_63 [i_20])));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_1)) >> (((arr_63 [(signed char)12]) - (375792573))))));
    }
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) (unsigned short)9)), (1075149252U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    var_31 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
}
