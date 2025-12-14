/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242973
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
    var_17 |= ((/* implicit */signed char) var_7);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_15)) : (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) <= (var_5)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) (-(var_11)));
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? ((~(var_5))) : (((/* implicit */long long int) var_2))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20376))));
                        var_21 = ((/* implicit */unsigned short) ((signed char) var_11));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((signed char) var_9)))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20376)) && (((/* implicit */_Bool) (unsigned short)20386))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2145667572U)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned short)45150))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned short)45136)) : (((((/* implicit */int) (unsigned short)10)) >> (((((/* implicit */int) (signed char)-1)) + (10)))))));
                    }
                }
                for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    var_25 -= (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                    arr_24 [i_0] |= ((/* implicit */_Bool) (+(var_5)));
                    arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                }
                var_26 = ((/* implicit */unsigned short) ((signed char) 150366391U));
            }
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                arr_29 [i_0] [i_0] [i_7] [i_0] = (!(((/* implicit */_Bool) var_4)));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_30 = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-51)))) / (((/* implicit */int) var_10))));
                var_31 = ((/* implicit */_Bool) var_5);
            }
            for (unsigned int i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                var_32 = ((-3014383345230983091LL) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20387)) * (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_33 -= ((/* implicit */signed char) ((long long int) var_16));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_15;
                        var_34 = ((/* implicit */_Bool) ((unsigned char) (~(var_4))));
                    }
                    var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (var_12)));
                    arr_44 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_11);
                    var_37 = ((/* implicit */int) var_0);
                }
            }
            arr_45 [i_0] [i_0] = ((unsigned int) 2767398232U);
        }
        /* LoopSeq 1 */
        for (signed char i_12 = 3; i_12 < 16; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 1527569076U))) - (((((/* implicit */int) (unsigned short)65531)) * (((/* implicit */int) var_3))))));
                        var_39 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 10596403458421689509ULL))))) - (((/* implicit */int) (signed char)1))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10)) ? (-1685871113824270432LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (var_12) : (((((/* implicit */unsigned long long int) var_2)) * (var_12)))));
                            var_41 |= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))))));
                            arr_56 [i_0] [i_15] = ((unsigned int) 2448684684U);
                            var_42 = ((/* implicit */unsigned long long int) (+(1708686096U)));
                        }
                        var_43 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            var_44 = ((/* implicit */long long int) ((short) (unsigned short)45154));
                            arr_59 [i_0] [i_16] [i_0] [i_16] [i_0] = ((/* implicit */long long int) (unsigned short)511);
                            var_45 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)511)))));
                        }
                    }
                } 
            } 
            arr_60 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
            var_46 = ((unsigned char) var_14);
            var_47 = ((/* implicit */long long int) min((var_47), (((var_13) ? (((/* implicit */long long int) (~(1686908323)))) : ((~(var_1)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                {
                    arr_70 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) (unsigned char)162)));
                    var_48 = ((/* implicit */signed char) ((long long int) (unsigned short)0));
                }
            } 
        } 
        arr_71 [i_17] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)193))));
        arr_72 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) 2147483647)) + (150366391U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))));
        arr_73 [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (4144600904U)));
        arr_74 [i_17] = ((/* implicit */unsigned short) ((unsigned char) var_9));
    }
    for (unsigned char i_20 = 0; i_20 < 17; i_20 += 4) /* same iter space */
    {
        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65518)) ? (2147483626) : (((/* implicit */int) (unsigned short)0))))))) ? (var_12) : (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) | (5317228012990340468LL))), (((/* implicit */long long int) ((unsigned int) (_Bool)1)))))))))));
        var_50 = ((/* implicit */unsigned long long int) (+((+(((unsigned int) var_4))))));
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (-5317228012990340453LL))))) > (((unsigned int) var_5))));
        arr_77 [i_20] = ((/* implicit */unsigned short) min((((/* implicit */int) ((2037180676U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (((int) var_16))));
    }
    for (unsigned char i_21 = 0; i_21 < 17; i_21 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                for (signed char i_24 = 0; i_24 < 17; i_24 += 3) 
                {
                    {
                        arr_90 [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) ((int) (signed char)-115));
                        arr_91 [i_23] = ((((/* implicit */_Bool) var_14)) ? (-5317228012990340484LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))));
                        arr_92 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) - (var_11))))));
                        var_52 = ((/* implicit */unsigned int) var_6);
                        arr_93 [i_22] [i_22] = ((/* implicit */unsigned char) ((9223372036854775786LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)46)))));
                    }
                } 
            } 
            var_53 = ((/* implicit */signed char) max((var_53), (((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (var_5))))));
            /* LoopNest 2 */
            for (unsigned int i_25 = 1; i_25 < 16; i_25 += 3) 
            {
                for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
                {
                    {
                        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-46))));
                        var_55 = ((/* implicit */unsigned short) var_8);
                    }
                } 
            } 
        }
        arr_99 [i_21] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 311497514U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2566351563U)))))) : ((-(var_11)))));
    }
    var_56 |= ((/* implicit */signed char) var_15);
}
