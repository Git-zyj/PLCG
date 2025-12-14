/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199811
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((10ULL) - (var_5))))) ? (((1731118616) - (1065353216))) : (((int) min((((/* implicit */unsigned long long int) (_Bool)0)), (var_5))))));
    var_20 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 *= (signed char)-26;
        var_22 = ((/* implicit */long long int) ((((18446744073709551614ULL) % (((/* implicit */unsigned long long int) -1995383377)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26219))))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) (short)-17455))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((9223372036854775807LL) + (-1234182850509573369LL)))) ? (10ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19668))) + (arr_7 [i_2] [i_2]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) * (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] [i_5])) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))))))))));
                            var_24 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((max((((/* implicit */int) (unsigned short)50735)), ((-2147483647 - 1)))) != (((/* implicit */int) (unsigned short)24068))))), (((((/* implicit */_Bool) min((arr_6 [i_5] [i_5] [(short)16]), (((/* implicit */short) (signed char)-53))))) ? (min((((/* implicit */long long int) (signed char)0)), (-1LL))) : ((-(-8207730428023628862LL)))))));
                            var_25 *= ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_1] [i_1]));
                        }
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)64625)), (((((/* implicit */_Bool) 188409878U)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-3)))))))))))));
                    }
                    for (long long int i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        arr_19 [i_1] &= ((/* implicit */long long int) ((10333458861844643223ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8963)))));
                        var_27 |= ((/* implicit */signed char) (+(arr_13 [i_3] [i_2] [i_1] [i_3] [i_1] [i_2] [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_7 + 2] [i_7 + 3] [i_7 + 4] [i_7]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_25 [i_1] [i_2] [i_3] [i_7 + 3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_2] [i_2] [i_8])) - (arr_7 [i_7 + 1] [i_2])));
                            arr_26 [i_1] [i_2] [i_2] [i_8] = ((/* implicit */long long int) 3837236891U);
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(1729889714004711126ULL)));
                        }
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_30 [i_1] [i_2] [i_3] [i_2] [i_2] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41492))) / (-5812600396882808471LL)))) ? (((((/* implicit */unsigned int) arr_21 [i_1])) ^ (3232952182U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_29 [i_9] [i_7] [i_2] [i_2] [i_2] [i_2] [i_1])) : (arr_2 [i_7] [i_7]))))));
                            arr_31 [i_1] [i_1] [i_2] [i_3] [i_7 + 3] [i_9] = ((/* implicit */unsigned long long int) (~(-28LL)));
                        }
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)910))))));
                            arr_35 [i_2] [i_7 + 1] [i_3] [i_1] [i_2] = (-(((/* implicit */int) ((short) 4LL))));
                            var_30 = 9223372036854775806LL;
                            var_31 = ((/* implicit */int) (-(((((/* implicit */_Bool) -8207730428023628860LL)) ? (27LL) : (((/* implicit */long long int) 1151234789U))))));
                            arr_36 [i_3] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_10] [i_7 + 2] [i_3] [i_2])) ? (((((/* implicit */_Bool) -2751749921872988712LL)) ? (arr_12 [i_1] [5LL] [i_1] [i_7] [i_10] [i_2]) : (255U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10] [i_2] [i_2] [i_1])))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (+(2147483647))))));
                            arr_40 [i_2] [19U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24062)) ? (1970324836974592LL) : (0LL)));
                            var_33 &= (((+(-1970324836974578LL))) ^ (((/* implicit */long long int) (-(arr_38 [i_11] [i_1] [i_1] [i_1])))));
                        }
                        var_34 = ((/* implicit */long long int) -1368399116);
                    }
                    /* LoopSeq 4 */
                    for (signed char i_12 = 2; i_12 < 23; i_12 += 1) 
                    {
                        var_35 = (+(min((((/* implicit */long long int) (unsigned short)24055)), (((((/* implicit */_Bool) -1368399132)) ? (1970324836974601LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                        arr_45 [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)40)));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((max((((/* implicit */int) arr_42 [i_12] [i_1] [i_1] [i_12 + 1])), (-1368399118))), ((+(((/* implicit */int) arr_42 [i_12] [i_1] [i_1] [i_12 - 2])))))))));
                    }
                    for (unsigned char i_13 = 2; i_13 < 23; i_13 += 1) 
                    {
                        arr_48 [i_13 - 2] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */long long int) 18446744073709551595ULL);
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((((18446744073709551598ULL) | (((/* implicit */unsigned long long int) ((int) -1368399116))))) | (((/* implicit */unsigned long long int) 5243562513694228670LL))))));
                        arr_49 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) ^ (((/* implicit */int) min(((unsigned short)64648), (arr_29 [i_1] [i_13] [i_3] [i_2] [i_3] [i_2] [i_3]))))))), (((((arr_7 [i_3] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))))) >> (((((/* implicit */int) (short)-11665)) + (11705)))))));
                        arr_50 [i_1] [i_1] [i_2] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_2] [i_2]))) >= (((((/* implicit */_Bool) ((660112780490384914LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62016)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4290772992U)))))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        var_38 = min((min((((/* implicit */unsigned long long int) 12LL)), (2952512395210500197ULL))), (((/* implicit */unsigned long long int) (unsigned char)22)));
                        var_39 = ((/* implicit */unsigned short) min((((int) 3639692087U)), ((~(1195915866)))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_40 = ((/* implicit */short) max((((/* implicit */long long int) arr_47 [23ULL] [i_2])), (5722757664237236236LL)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            arr_59 [i_2] [i_2] [i_3] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_16])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)34)))))));
                            arr_60 [i_1] [i_2] [i_3] [i_15] [i_3] = ((/* implicit */int) arr_33 [i_1] [i_2] [i_15] [i_1]);
                            arr_61 [i_16] [12U] [i_2] [i_16] [i_2] [i_16] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38083))) : (3639692087U))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            arr_64 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_62 [i_1] [i_2] [i_3] [i_15]);
                            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) min(((-(min((((/* implicit */long long int) (unsigned short)9547)), (-2751749921872988696LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_17] [i_1] [i_3] [i_1] [i_1])) && (((/* implicit */_Bool) 17929739400880569125ULL))))), (min((((/* implicit */unsigned short) arr_33 [i_17] [i_17] [i_17] [i_1])), (arr_29 [i_1] [i_2] [i_1] [i_1] [i_2] [i_1] [i_1])))))))))));
                        }
                        for (short i_18 = 0; i_18 < 24; i_18 += 2) 
                        {
                            var_42 -= ((/* implicit */int) (-(((((1854867657) <= (((/* implicit */int) arr_55 [i_18])))) ? (max((5722757664237236222LL), (((/* implicit */long long int) (short)15073)))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                            var_43 &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1736480709U)))))) > (min((arr_4 [i_18]), (((/* implicit */long long int) (short)32753))))));
                            var_44 = ((/* implicit */int) (~(min((min((14472439732374276531ULL), (((/* implicit */unsigned long long int) (unsigned char)72)))), (((/* implicit */unsigned long long int) 4193792))))));
                        }
                        arr_67 [i_2] [i_2] [i_3] [i_15] = ((/* implicit */long long int) (((((-(arr_20 [i_15] [i_15] [i_15] [i_15] [i_2]))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)511)), ((unsigned short)21025))))))) ? (min(((~(6099314434003763244ULL))), (((/* implicit */unsigned long long int) 1736480686U)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -9223372036854775801LL)) ? (1073676288) : (((/* implicit */int) (short)-32739)))), (((((/* implicit */int) (short)0)) << (((-249339009739252110LL) + (249339009739252117LL))))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned int) arr_52 [i_2] [i_2] [i_3] [i_2]))) ? (arr_2 [i_3] [i_3]) : (((/* implicit */int) ((unsigned short) 4294967284U)))))));
                        arr_70 [i_2] = (-(((/* implicit */int) (unsigned char)3)));
                    }
                    /* vectorizable */
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)511))));
                        var_47 = arr_38 [i_2] [i_2] [i_3] [i_20];
                    }
                    /* vectorizable */
                    for (short i_21 = 2; i_21 < 22; i_21 += 2) 
                    {
                        arr_76 [i_2] = ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)242))))));
                        var_48 = ((((/* implicit */_Bool) ((arr_73 [i_21 - 2] [i_2] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [19LL] [i_21])))))) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) arr_65 [i_2] [i_2])))));
                    }
                }
            } 
        } 
        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */int) (short)8539)) * (((/* implicit */int) (unsigned char)253)))))));
    }
    for (unsigned int i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        var_50 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 814900603U)) ? (((/* implicit */int) arr_65 [i_22] [i_22])) : (((/* implicit */int) (unsigned char)2)))) * (((/* implicit */int) min(((short)32731), (((/* implicit */short) (unsigned char)251)))))))));
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 15; i_23 += 4) 
        {
            for (unsigned int i_24 = 1; i_24 < 12; i_24 += 2) 
            {
                for (int i_25 = 0; i_25 < 15; i_25 += 2) 
                {
                    {
                        var_51 = ((/* implicit */short) ((arr_32 [i_22] [i_24 + 2] [i_25] [i_22] [i_22]) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) 3208782086U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_22] [i_23] [i_24 + 1] [i_25]))) : (arr_12 [i_22] [i_23] [(unsigned short)8] [(unsigned short)8] [i_23] [i_25])))), (((-5415803337194256028LL) ^ (-7760602425763177390LL)))))));
                        var_52 *= ((/* implicit */unsigned int) (signed char)79);
                    }
                } 
            } 
        } 
        var_53 = ((/* implicit */unsigned long long int) 1907581844U);
        arr_89 [i_22] &= ((/* implicit */unsigned long long int) (~(4827330940806370010LL)));
    }
    var_54 = ((/* implicit */int) ((((/* implicit */_Bool) (~(-2097719006099070626LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -113932417625782389LL)) : (14590305242714086102ULL)))));
}
