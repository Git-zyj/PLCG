/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213512
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
    var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-32617)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)2)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [11LL] = ((/* implicit */short) (~(arr_0 [i_0 - 2] [i_0 - 4])));
        var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) (short)7646))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_9 [i_0 + 3] [i_3]))));
                        arr_14 [i_2] [6] [i_2] [i_3] = ((/* implicit */unsigned short) ((((-3954392872723794194LL) + (9223372036854775807LL))) << (((var_15) - (2003322235U)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (short)-13596)))));
                        var_20 = ((/* implicit */_Bool) (unsigned char)196);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (short)-3202))))) ? (((((/* implicit */_Bool) 2086346950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) : (2824690986U))) : (((/* implicit */unsigned int) 2086346973))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
    {
        arr_26 [i_7 + 1] = ((/* implicit */unsigned int) (signed char)-11);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 1303599295))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) >= (((((/* implicit */long long int) ((((/* implicit */int) (short)27871)) & (2086346950)))) & (min((((/* implicit */long long int) (unsigned char)60)), (var_8)))))));
                    arr_32 [i_7] [i_8] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) 984979405)), (4294967295U))), (((/* implicit */unsigned int) (_Bool)1))))) ? (arr_6 [(signed char)7] [i_9]) : (((((/* implicit */_Bool) (+(15842535317282691322ULL)))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_27 [i_9])) : (var_12)))))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7 + 1])) ? (var_8) : (((/* implicit */long long int) (-(2086346950)))))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)7))));
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1769591418)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7 + 3]))) : (((((/* implicit */_Bool) 471612927492562523ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50871)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_37 [i_7 + 3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-2329)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [14LL])) + (((/* implicit */int) var_5))))) : (arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_7 - 1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                for (long long int i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    {
                        var_26 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((-(-2086346951))), (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25616))) : (var_3)))) ? (((((/* implicit */_Bool) 273885409274252704LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned short)3] [(short)11] [i_13]))) : (var_0))) : (((/* implicit */unsigned long long int) (-(2230950469U))))))));
                        var_27 ^= ((/* implicit */long long int) min((max(((~(11390660622365419748ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_3)))))), (((/* implicit */unsigned long long int) arr_31 [i_7] [i_12] [i_13] [i_14]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_15 = 3; i_15 < 13; i_15 += 4) 
            {
                for (int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(4584812667831324448ULL)))))) || (((/* implicit */_Bool) (((~(3081331658U))) << (((((/* implicit */int) ((short) 2230950496U))) + (26032)))))))))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_7]), (((/* implicit */long long int) arr_43 [i_7 - 1]))))) || (((/* implicit */_Bool) var_13)))))));
                            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_15 + 3]))))) ? (2062637307) : (((((/* implicit */_Bool) arr_24 [i_15 - 3])) ? (((/* implicit */int) arr_24 [i_15 - 2])) : (((/* implicit */int) arr_24 [i_15 - 3]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 17; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_57 [i_18] [i_7] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_34 [i_7] [i_12] [i_12] [11LL] [i_19])) ? (arr_34 [i_7] [i_7] [i_7] [i_18] [i_19]) : (((/* implicit */unsigned long long int) var_6))))))) ? (((((/* implicit */_Bool) arr_42 [i_19] [i_7])) ? (((/* implicit */unsigned long long int) 2846659564U)) : (((((/* implicit */_Bool) (short)-5626)) ? (14588608678415297255ULL) : (((/* implicit */unsigned long long int) 878851534U)))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [(short)10] [i_18])) ? (arr_5 [7] [i_12]) : (((/* implicit */long long int) 2158125874U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3254786962U))))))))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((max((max((((/* implicit */long long int) 163630138U)), (arr_21 [i_7] [(short)0] [i_18] [i_18]))), (((/* implicit */long long int) var_10)))) << (((((((/* implicit */long long int) var_3)) / (-277351290003678953LL))) / (((/* implicit */long long int) 1499406954U)))))))));
                        var_32 = ((/* implicit */int) ((((((/* implicit */int) var_10)) >= (-2086346940))) ? (((((arr_44 [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2]) + (9223372036854775807LL))) >> (((301831300U) - (301831260U))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5562162452245449425LL)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)237)))))));
                        var_33 = ((((/* implicit */_Bool) arr_19 [8LL] [i_18] [12])) ? (max((((/* implicit */unsigned int) (unsigned short)22726)), (3656771071U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -2086346960)))));
                    }
                } 
            } 
        }
    }
}
