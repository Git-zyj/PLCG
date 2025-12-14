/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193559
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_14 = ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (short)-26279))));
            }
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_12))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_0] [i_0]))) : (var_11)));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) arr_7 [i_4] [i_0] [i_0]);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3]))) ^ (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4])))));
                }
                for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (signed char)(-127 - 1))))));
                    arr_16 [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-20027))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2831427355234125134LL)) || (((/* implicit */_Bool) 1645521052840497256LL))))) : (arr_15 [i_3] [i_5 - 1] [i_1] [i_0] [i_3])));
                    var_21 = ((/* implicit */_Bool) 868102365U);
                    var_22 = ((/* implicit */_Bool) (short)32512);
                }
            }
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 24; i_6 += 3) 
            {
                arr_20 [i_6] = ((/* implicit */signed char) (+(var_11)));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 4; i_7 < 23; i_7 += 1) 
                {
                    arr_25 [i_7 - 4] [6U] [i_0] |= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)110))));
                    var_23 = ((/* implicit */short) 1298895350);
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_14 [(short)6] [i_6] [i_1] [(short)6]))));
                }
                for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) / (-948756582)))) ? (((/* implicit */int) arr_3 [i_0] [(unsigned char)8] [i_6])) : (((/* implicit */int) (short)-26804))));
                    var_26 = ((/* implicit */short) arr_22 [i_6] [i_6] [i_6]);
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_0] [(short)1] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (short)16338);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) arr_3 [i_9] [20LL] [i_0])) ? (arr_23 [i_0] [i_8] [i_6] [i_6] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) (signed char)84))));
                    }
                    for (short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) | (5468405772161199768LL)))));
                        arr_34 [0ULL] [i_6 - 1] [i_6 - 1] [i_1] [0ULL] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_23 [16LL] [i_8 + 1] [(short)14] [(short)14] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30027))))));
                        var_30 = ((/* implicit */_Bool) var_1);
                        arr_35 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_7));
                        var_31 -= ((((/* implicit */int) arr_9 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])) ^ (((/* implicit */int) var_9)));
                    }
                    for (short i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                    {
                        var_32 = (-(arr_32 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_6]));
                        arr_38 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 1]))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((var_13) + (9223372036854775807LL))) >> (((((/* implicit */int) var_1)) - (52622))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-32513))) - (arr_32 [i_8] [i_1] [i_6 - 2] [i_8 - 1] [i_6])))));
                        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                    {
                        arr_43 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_6] [(_Bool)1] [i_6 + 1] [i_8] [i_12] [i_6])) <= (((/* implicit */int) (_Bool)1))));
                        var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) 1193761402)) ? (((/* implicit */int) var_8)) : (-1298895351)));
                    }
                    arr_44 [i_8 + 1] [i_6] [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) | (((long long int) var_10))));
                }
                /* LoopSeq 3 */
                for (short i_13 = 1; i_13 < 24; i_13 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) ((948756569) > (((/* implicit */int) (unsigned char)28))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 3; i_14 < 23; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6 - 1])) || (arr_13 [i_6] [i_6] [i_6 + 1] [i_6])));
                        var_38 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_50 [(_Bool)1] [i_6] [i_6 - 2] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_14]) - (2147483647)))) ? (var_13) : (((/* implicit */long long int) arr_19 [i_0] [i_6] [i_0]))));
                        arr_51 [i_13] [i_13] [(short)18] [(short)18] [i_0] [i_0] |= (-((-(var_11))));
                    }
                    var_39 &= ((/* implicit */int) arr_1 [i_0]);
                }
                for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    arr_55 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((var_3) && (((/* implicit */_Bool) (short)-32503)))));
                    var_40 = arr_8 [i_1] [i_1] [i_1];
                }
                for (unsigned char i_16 = 2; i_16 < 24; i_16 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */int) min((var_41), ((-(((/* implicit */int) (_Bool)1))))));
                        arr_60 [i_0] [i_6] [i_6] = ((((/* implicit */_Bool) (short)-32516)) ? ((~(((/* implicit */int) (short)-32508)))) : (1298895354));
                    }
                    for (long long int i_18 = 1; i_18 < 24; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (1298895354) : (((/* implicit */int) (unsigned short)42537))))) - (9007199254740991LL)));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned int) arr_46 [i_18 - 1] [i_16 - 2])))));
                        var_44 ^= ((/* implicit */signed char) arr_12 [(signed char)12] [i_16 - 1] [14] [i_1] [(signed char)12]);
                    }
                    for (unsigned short i_19 = 3; i_19 < 24; i_19 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned char) ((arr_39 [i_6] [(unsigned char)2] [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 2]) ? (((/* implicit */int) arr_39 [i_6] [i_16 - 2] [i_16 - 1] [i_16 + 1] [i_16] [i_16])) : (((/* implicit */int) arr_39 [i_6] [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 1]))));
                        var_46 -= ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_65 [i_6] [i_1] [(_Bool)1] [i_16 - 1] [i_19 - 1] [i_0] [i_19 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (unsigned short)30937)) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)103))))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_45 [i_1] [i_1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (short)32512))));
                        var_49 = ((/* implicit */long long int) (short)-1);
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [0U] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (1727695973))) : (((/* implicit */int) var_4)))))));
                    }
                    var_51 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)22)) + (((/* implicit */int) (signed char)-60))));
                    arr_68 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */long long int) (_Bool)1);
                }
            }
            var_52 = ((/* implicit */long long int) ((((/* implicit */int) (short)255)) % (((/* implicit */int) (unsigned char)168))));
        }
        /* LoopSeq 2 */
        for (int i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            var_53 = ((/* implicit */signed char) ((int) 8388607));
            var_54 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31849))) < (arr_66 [i_21] [i_21] [i_21] [4LL] [i_0])));
        }
        for (int i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            arr_75 [i_22] [i_22] = ((/* implicit */_Bool) var_0);
            var_55 = ((/* implicit */unsigned short) var_7);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
    {
        var_56 |= ((/* implicit */_Bool) ((unsigned long long int) (~(15030253689416428390ULL))));
        arr_79 [i_23] = ((/* implicit */_Bool) (-(33488896U)));
    }
    var_57 += ((/* implicit */long long int) min((15059767614932505934ULL), (((/* implicit */unsigned long long int) (signed char)-99))));
}
