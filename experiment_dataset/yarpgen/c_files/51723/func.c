/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51723
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
    var_10 &= ((/* implicit */short) (+(((/* implicit */int) var_4))));
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3887700104U)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_9))))) : ((+(407267192U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (+(407267217U)));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                    var_14 = ((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) >> (((((6995781963635018932ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (6995781963635018747ULL))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)29980))))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)30000)) % (((/* implicit */int) var_4))));
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)128))))) & (407267191U)));
        }
        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) arr_16 [i_5 + 2] [i_5 - 1]);
            arr_18 [i_5] = ((/* implicit */unsigned long long int) (unsigned char)208);
            arr_19 [4LL] = ((/* implicit */short) (((!(((/* implicit */_Bool) 2995395180951971222ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3707463050U)))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))), (70368609959936ULL))))))));
        }
        arr_20 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2093056U)) ? (0ULL) : (((/* implicit */unsigned long long int) 2384445775U))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                arr_25 [i_6] [(signed char)14] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((max((407267191U), (407267187U))), (min((31U), (((/* implicit */unsigned int) (unsigned char)236))))))) == ((+(((((/* implicit */_Bool) var_5)) ? (4256734235018818535ULL) : (((/* implicit */unsigned long long int) 407267182U))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2218151302U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3887700108U)))) ? (((16712117202819469049ULL) >> (((3537845895902974839ULL) - (3537845895902974816ULL))))) : (((((/* implicit */_Bool) var_9)) ? (9136898206686671017ULL) : (95611249761466427ULL)))))) && (((/* implicit */_Bool) 3805179148U))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) 430813740U))));
                var_22 = ((unsigned char) (+(489788159U)));
            }
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            arr_34 [i_3] [i_6] [i_8] [i_9] [i_9] [i_10] [i_10] |= ((((/* implicit */unsigned long long int) 407267192U)) != (17802589233305717678ULL));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_27 [i_3] [i_6] [i_8]))));
                            var_24 = ((/* implicit */signed char) 3864153555U);
                        }
                    } 
                } 
            } 
            arr_35 [i_3] [16LL] = arr_17 [20U] [i_3];
            var_25 = ((/* implicit */unsigned char) ((unsigned int) 4095ULL));
        }
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-21811)))))));
        arr_40 [(short)0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (13862870162905404286ULL)));
        arr_41 [i_11] [i_11] = ((/* implicit */unsigned char) (~(576390383559245824ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 2) 
        {
            var_27 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
            var_28 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 6011595615123637061ULL)) ? (((/* implicit */int) (short)7343)) : (-1401958178)))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    {
                        arr_52 [i_11] [i_12] [(unsigned char)7] [i_14] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) * (13862870162905404286ULL))) ^ (var_2)));
                        arr_53 [i_11] [i_12] [i_13] [i_11] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        arr_54 [i_11] = ((/* implicit */unsigned int) 6995781963635018934ULL);
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 22; i_15 += 1) 
                        {
                            arr_58 [i_13] [i_12 - 1] [i_11] = ((/* implicit */_Bool) (((((~(268431360))) + (2147483647))) << (((/* implicit */int) (!((_Bool)1))))));
                            var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3864153556U)))) ? ((-(((/* implicit */int) arr_46 [i_13])))) : (arr_44 [i_15 - 1])));
                            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (2130303778816LL))))));
                        }
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
        }
        var_32 ^= ((/* implicit */long long int) (short)-27614);
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2372158371U)) ? (((/* implicit */int) (short)-9893)) : (((/* implicit */int) arr_17 [i_16] [i_16]))))));
        var_34 += ((/* implicit */signed char) (unsigned char)234);
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            var_35 = ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7891074921417530403ULL));
            var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned short)65535))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
        {
            var_37 ^= ((/* implicit */unsigned char) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_16])))));
            var_38 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (7985102846176853709ULL))))));
            arr_67 [i_16] [i_16] [10U] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 1073741824U)) / (6995781963635018937ULL)))));
            var_39 = ((/* implicit */int) arr_64 [i_16]);
        }
    }
    var_40 = ((/* implicit */unsigned int) (+(var_8)));
}
