/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244786
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
    var_20 = ((/* implicit */signed char) ((1304514526637888143LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */short) ((signed char) var_3)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_22 *= ((long long int) max((arr_1 [i_2]), (((/* implicit */signed char) ((((/* implicit */_Bool) 1304514526637888143LL)) || (((/* implicit */_Bool) arr_3 [i_0])))))));
                    var_23 ^= ((/* implicit */long long int) arr_8 [i_0] [i_1] [(signed char)5]);
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [3LL] [3LL] [3LL])) ^ (((/* implicit */int) (signed char)31))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1304514526637888137LL)) ? (var_4) : (1304514526637888151LL)))) ? (((((/* implicit */_Bool) 1809585761U)) ? (-1304514526637888141LL) : (-1304514526637888141LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3850092869U)))))))), (((/* implicit */long long int) (~(((unsigned int) var_7)))))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2U] [i_3] [i_3])) ? (7130354646793534266LL) : (arr_2 [i_4]))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 12; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) ((240) % (((/* implicit */int) (signed char)-13))));
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        }
        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_7] [i_7]))) : ((-2147483647 - 1))));
            var_29 = ((/* implicit */long long int) arr_20 [i_3] [i_3] [i_3 + 1]);
        }
        for (int i_8 = 2; i_8 < 11; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        {
                            arr_35 [i_3 + 1] [7LL] [i_3] [i_3] [i_3] [(signed char)6] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_3 - 1] [i_8 - 2])));
                            arr_36 [i_11] [i_10] [i_9] [i_8] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) - (arr_30 [i_3 + 2] [i_8 + 1] [i_9 - 1] [i_9])));
                            arr_37 [i_11] [5] [0LL] [i_9 - 1] [0LL] [i_3] = ((/* implicit */long long int) arr_15 [(unsigned char)3] [i_10]);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)2)) / (arr_23 [i_3 + 2] [i_8 - 2] [i_9 + 1])));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
        }
        for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            arr_40 [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1304514526637888134LL)))) - (3811496566U)));
            /* LoopSeq 1 */
            for (long long int i_13 = 3; i_13 < 10; i_13 += 3) 
            {
                arr_44 [11LL] [5] [2] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3] [i_3 + 3] [i_12] [i_13]))))) ? (arr_41 [i_13 - 3] [i_13 - 2] [i_13 - 2] [i_13 - 1]) : (((/* implicit */unsigned long long int) arr_25 [i_3])));
                arr_45 [i_12] |= ((/* implicit */long long int) ((unsigned int) 1304514526637888143LL));
                /* LoopSeq 4 */
                for (int i_14 = 1; i_14 < 10; i_14 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                    var_34 = ((/* implicit */unsigned short) 2485381535U);
                }
                for (int i_15 = 1; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */int) (+(18446744073709551611ULL)));
                    var_36 |= ((((/* implicit */_Bool) arr_6 [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) 483470722U)));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_3] [i_12] [i_12] [i_13 - 3] [i_13 + 3] [i_15 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_15] [i_13] [i_12]))) : (arr_41 [i_15 - 1] [i_13 - 3] [(short)12] [(short)12])))));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_54 [i_12] [i_13] [i_16] = ((/* implicit */int) ((signed char) arr_6 [i_13 + 2]));
                        arr_55 [i_3] [i_3] [i_12] [(signed char)12] [i_15] [i_16] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_15 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3 + 3] [i_13 - 1]))) : (-2235216716153222338LL)));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(var_2))))));
                        arr_56 [(signed char)5] [(short)12] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) || (((/* implicit */_Bool) var_11))));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 12; i_17 += 4) 
                    {
                        arr_60 [10U] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_12] [i_17])))))) : (18446744073709551611ULL)));
                        arr_61 [i_3] [i_3] [i_12] [12] [i_3] [11LL] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 1084006394)) ^ (18446744073709551615ULL))) ^ (arr_16 [8U] [8U] [8U])));
                        var_39 = (-((-(-9223372036854775798LL))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_40 = ((/* implicit */int) arr_0 [i_12]);
                        var_41 = (((!(((/* implicit */_Bool) 296211239420375908ULL)))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                    }
                }
                for (short i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                {
                    arr_69 [i_12] [i_13 - 3] [i_12] [(unsigned short)2] = ((/* implicit */unsigned int) var_3);
                    var_42 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_13 - 2]))));
                }
                for (short i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */signed char) (unsigned char)2);
                    arr_72 [i_3 + 2] [i_3 + 2] [i_3 + 1] [(signed char)8] = ((/* implicit */int) ((unsigned int) var_3));
                }
                arr_73 [i_13 + 1] [i_3 + 3] [i_3 + 3] = ((/* implicit */signed char) ((2485381534U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))));
                arr_74 [i_3] = ((/* implicit */long long int) 1084006397);
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 2) 
            {
                {
                    var_44 = ((/* implicit */long long int) ((unsigned long long int) arr_59 [i_22 + 3] [i_22 - 1] [i_22 - 1] [11] [i_3 + 2] [i_3 + 3] [i_3]));
                    arr_80 [i_22] [6LL] [i_22] [i_22 + 2] = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                }
            } 
        } 
        var_45 = ((/* implicit */long long int) var_2);
    }
    var_46 = ((/* implicit */long long int) var_17);
    var_47 |= ((/* implicit */signed char) -1);
}
