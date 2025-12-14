/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249185
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 480005622U)) ? (480005619U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        var_12 = ((/* implicit */unsigned int) var_6);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_13 *= ((/* implicit */unsigned int) (+(10277798135611706684ULL)));
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((480005622U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_15 *= ((/* implicit */unsigned long long int) var_4);
                var_16 += ((/* implicit */short) (-(15431696809178545284ULL)));
                var_17 = ((((/* implicit */_Bool) 480005611U)) || (((/* implicit */_Bool) (unsigned char)203)));
            }
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_4)))))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
        {
            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967285U))) - (6204U)))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((480005622U) + (480005614U))))));
        }
        var_20 *= ((/* implicit */signed char) var_8);
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) < (4294967289U)))), (var_2))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (10U)))) ? (4294967266U) : (min((480005622U), (((/* implicit */unsigned int) (unsigned short)51938))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                {
                    arr_24 [i_5] |= ((/* implicit */int) var_5);
                    var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == (((var_0) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551611ULL)) && (((/* implicit */_Bool) (unsigned short)32675))))) << (((((((/* implicit */_Bool) (unsigned short)1515)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))) - (6211)))));
        var_24 |= 18446744073709551615ULL;
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                {
                    arr_34 [i_9] [i_9] [i_10] [i_8] = ((/* implicit */_Bool) (~((((~(((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) var_6))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)13463)) : (((/* implicit */int) (signed char)20))))));
                }
            } 
        } 
        arr_35 [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153)))))) < ((-(var_1))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        var_26 *= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((16142633215668060761ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
        var_27 = ((/* implicit */unsigned char) (~(max(((-(10U))), ((+(122029359U)))))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_3))));
    }
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        var_29 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_0))))) >= (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)18)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((16401371882728109717ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (18446744073709551615ULL))))))))) : (((((var_1) << (((((/* implicit */int) var_3)) - (120))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3826271138243969444LL)) || (((/* implicit */_Bool) var_8))))))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2145672897U)) ? (((((/* implicit */_Bool) 131040LL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)-36)))) : (((((/* implicit */int) (unsigned char)127)) << (((/* implicit */int) (_Bool)1))))))) : ((~(((((/* implicit */_Bool) (unsigned char)29)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))))))))))));
        arr_42 [i_12] &= ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_31 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) var_10)))));
        arr_45 [i_13] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((var_4) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)124))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-20))))))) : (var_1));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)20)) > (((/* implicit */int) var_2))))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)47))))));
            var_33 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) 16142633215668060759ULL)) ? (2304110858041490882ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)16)) <= (((/* implicit */int) (unsigned short)42654))));
            }
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) var_9);
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    var_37 = ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (5781187429288918908ULL)))));
                    arr_58 [i_18] [i_18] [i_18] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10617)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))));
                    var_38 = ((/* implicit */_Bool) ((var_0) ? (5781187429288918908ULL) : (((((/* implicit */_Bool) (unsigned char)47)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))));
                    var_39 = ((/* implicit */unsigned long long int) (unsigned short)3);
                }
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
                {
                    var_40 *= ((/* implicit */_Bool) var_7);
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 13; i_20 += 1) 
                    {
                        arr_66 [i_13] [i_15] [i_20] [i_15] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)26)))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1))))));
                        var_41 *= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)10)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (var_1)));
                    }
                    var_42 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) + (((/* implicit */int) var_6))));
                }
                var_43 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
            }
            for (int i_21 = 0; i_21 < 13; i_21 += 1) 
            {
                var_44 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_9)))))));
                var_45 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (signed char)18)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)156)))) - (74)))));
            }
            arr_71 [i_13] [i_15] [i_13] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
            var_46 *= ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-10855)))));
        }
    }
}
