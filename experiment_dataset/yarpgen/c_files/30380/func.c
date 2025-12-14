/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30380
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 16610338753332714705ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_8)))));
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0] [2U])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (16610338753332714705ULL)))) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((1836405320376836895ULL) > (((/* implicit */unsigned long long int) 0U))))))))));
                arr_5 [(short)9] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)-6643))))) ? (1836405320376836895ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_1 [1U]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) / (((/* implicit */int) arr_3 [i_1] [(signed char)17]))))) ? (((/* implicit */int) ((_Bool) 1741798430U))) : (0))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -5161734314154589718LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197))) : (16610338753332714697ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [(unsigned char)7] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((short) (short)-23134))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_13 [i_0] [15] [i_0] [i_3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_0 [i_0])))) << (((((/* implicit */int) var_3)) - (112)))));
                        arr_14 [i_0] [i_1] [i_3] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((unsigned int) (unsigned short)16464)) * (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_5))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3193413335U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0])) == (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_4 [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_10)))) ? (((/* implicit */int) (unsigned short)63647)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_4 + 1] [i_0] = ((/* implicit */unsigned long long int) ((16610338753332714686ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_0] [4LL]))))));
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3458764513820540928ULL)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (signed char)64))))) ? (((/* implicit */int) min(((unsigned short)44195), (((/* implicit */unsigned short) (short)17712))))) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [6U]))) : (((unsigned int) arr_17 [i_0] [i_1] [i_2] [i_4 + 1] [(short)16] [i_4 + 2]))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 4; i_6 < 16; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_30 [i_5] [i_6 + 1] [i_7] [i_6] [i_7] = ((/* implicit */long long int) var_10);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((1101553963U), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)49241)), (7098581682637310911ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_23 [i_5]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_8] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_32 [i_8] [i_6 - 3] [i_7] [i_8] [i_9] [i_6 + 1])) : (((/* implicit */int) (unsigned char)241)))))))));
                            arr_35 [i_9] [i_9] [i_8] [i_7] [(unsigned char)15] [i_5] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)159));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        arr_38 [i_5] [i_6 - 3] [i_7] [i_7] [i_10] = ((/* implicit */short) arr_19 [i_7]);
                        var_25 = ((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_7]);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1])) ? (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (2047ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5])))));
                    }
                    for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        var_27 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_6] [i_11 + 2])) ? (((/* implicit */int) arr_12 [i_6] [i_11 + 2])) : (((/* implicit */int) arr_12 [i_6] [i_11 + 2]))))) + (((((/* implicit */_Bool) arr_12 [i_6] [i_11 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_11 - 1]))) : (3578607288402519997ULL))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            arr_46 [i_5] [i_12] [i_7] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_5] [i_6 - 4] [i_6 + 1] [i_11 + 4] [i_12] [i_7]))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_12] [i_12] [i_7] [i_12] [i_5]))) ? (((unsigned long long int) arr_12 [i_12] [i_11 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28305))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)30097))))));
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_6] [i_7] [i_11] [i_11 + 1] [(short)12] [i_12]))) != (14755264033241569440ULL)))) >> (((((/* implicit */_Bool) (short)28300)) ? (((/* implicit */int) arr_34 [(short)1] [(short)1] [6U] [i_11 + 3] [(unsigned short)9])) : (((/* implicit */int) (short)-23134))))))) ? (-491143367) : (max((((((/* implicit */_Bool) arr_45 [i_7] [i_5] [i_7] [i_6] [i_5])) ? (((/* implicit */int) (unsigned short)6850)) : (((/* implicit */int) (short)-27095)))), (((((/* implicit */_Bool) 9272736135956153370ULL)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (short)28300))))))));
                            arr_47 [i_12] [i_12] [i_12] [i_12] [i_12] = min((((((/* implicit */_Bool) ((int) 1282092651))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28300))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (7492138344561629329ULL) : (16610338753332714689ULL))))), (((/* implicit */unsigned long long int) ((signed char) -1077949784))));
                        }
                        var_29 = ((/* implicit */int) (signed char)99);
                        var_30 ^= ((/* implicit */signed char) (short)-22926);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            {
                                arr_52 [i_5] [i_6 - 3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (67043328U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23481)))));
                                var_31 = ((/* implicit */int) arr_3 [i_5] [i_6]);
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (unsigned char i_15 = 2; i_15 < 16; i_15 += 1) 
                {
                    var_32 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_5] [i_5])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_15 - 1]), (((/* implicit */unsigned short) var_4)))))) + (((((/* implicit */_Bool) (short)28299)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) : (4398029733888ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) 4398029733897ULL)))))));
                    arr_56 [i_15] [(short)7] [i_6 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6 - 3] [i_6 + 1])) ? (((/* implicit */int) ((short) -1598225682))) : (((/* implicit */int) ((short) arr_17 [i_5] [i_6 - 1] [i_15] [i_15 - 2] [i_6] [i_15])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) arr_45 [i_5] [i_6 - 3] [i_15 - 1] [i_6] [i_5])) : (((/* implicit */int) arr_54 [i_5] [i_6 + 1] [i_15 + 1])))) > (((/* implicit */int) max(((short)-1561), (((/* implicit */short) arr_40 [i_15 - 2] [i_15] [i_15] [i_15])))))))) : (((((/* implicit */_Bool) 3899179137649619868LL)) ? (((/* implicit */int) (short)3484)) : (((/* implicit */int) (short)-8432))))));
                    arr_57 [i_6] = ((/* implicit */unsigned int) (short)8431);
                }
                for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1836405320376836918ULL)) ? (1836405320376836895ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21319)))));
                        arr_64 [(signed char)2] [i_16] [i_5] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)55750))));
                        var_34 = 4165877731U;
                    }
                    arr_65 [i_6] [i_6 - 3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (short)(-32767 - 1))) : (max((((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) arr_8 [i_6 - 4]))))));
                }
                var_35 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((arr_11 [i_5] [i_6] [i_5] [(unsigned char)0]) > (((/* implicit */long long int) -707372119))))) * (((((/* implicit */_Bool) 17515032403830010946ULL)) ? (((/* implicit */int) (unsigned char)142)) : (1459301069)))))), (var_5)));
            }
        } 
    } 
    var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 402100613172466098LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) ? (max((((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10199)) ? (((/* implicit */int) (short)-22756)) : (((/* implicit */int) (unsigned short)36097)))))));
}
