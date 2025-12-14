/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206205
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) var_14)))));
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (max((arr_1 [i_1 - 3]), (var_13)))))) || (((/* implicit */_Bool) min(((~(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17777)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))))));
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)24921)), (min((var_3), (((/* implicit */unsigned long long int) (unsigned short)6599)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (short)-17777);
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_10))))))), (var_3)));
            arr_15 [i_3] = ((/* implicit */_Bool) max(((unsigned short)58945), ((unsigned short)8)));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 4; i_7 < 23; i_7 += 1) 
                        {
                            arr_23 [(short)15] [i_3] [i_5 + 2] [i_6] [i_7] = ((/* implicit */_Bool) arr_11 [i_3] [i_3] [(unsigned short)7]);
                            arr_24 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_6)) ? (max((var_17), (((/* implicit */unsigned long long int) arr_17 [(_Bool)1] [i_4 - 1] [i_4 - 1] [i_3])))) : (((/* implicit */unsigned long long int) -6060476953257893660LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)4)))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) > (arr_11 [i_4] [i_4 + 1] [i_4 + 1])));
                            arr_28 [i_3] = ((/* implicit */unsigned short) ((int) arr_16 [i_3] [i_4 + 2] [i_3]));
                            var_22 = ((/* implicit */unsigned short) (short)-10742);
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? ((+(var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
                        }
                        arr_30 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6599)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24242)) && (((/* implicit */_Bool) (unsigned short)58945)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_4] [i_3] [i_6]))))))))) : ((-(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                        var_23 = ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_10)), (1LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((max((var_14), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)193)) : (1297338669)))))));
                        arr_31 [i_3] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_4 + 2] [i_4 + 2])), (min((((/* implicit */unsigned long long int) -4952019557507675667LL)), (var_3))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) ((max((max((var_16), (-3677888205705586373LL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))))) < (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65528)), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)58936)) : (((/* implicit */int) (short)26724)))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_34 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_9))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                {
                    var_25 = ((var_14) | (var_4));
                    arr_37 [i_3] [i_3] [i_3] [i_10] [(unsigned short)14] [i_3] |= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)1597)) : (((/* implicit */int) var_1)))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (31))));
                }
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) max((var_26), ((~(min((((long long int) var_17)), (((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_3] [i_3] [i_9] [i_11])))))))))));
                    var_27 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (16777216) : (1205328233)))), (((long long int) (unsigned char)232))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), ((-(arr_33 [i_3] [i_4 + 2] [i_4 + 1] [(unsigned char)5])))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) (short)-17777)) ? (arr_32 [i_3] [i_11] [i_9] [i_11]) : (((/* implicit */int) (short)17776))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        arr_45 [i_9] [i_3] [i_9] [i_9] [i_9] [i_3] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_17)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)17776)))) ? (((/* implicit */int) (short)-17777)) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)58936))))))) : (arr_33 [i_4] [i_9] [i_4] [i_13]));
                        var_30 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)8))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 2; i_14 < 23; i_14 += 3) 
                    {
                        arr_48 [i_3] [i_3] [i_9] [i_3] [i_3] = ((/* implicit */unsigned short) (short)-23476);
                        var_31 = ((/* implicit */_Bool) ((unsigned int) 9LL));
                        arr_49 [i_3] [i_3] [i_3] [i_3] [i_11] [i_3] [i_3] |= ((/* implicit */long long int) 2147483647);
                    }
                    var_32 ^= ((/* implicit */int) (~(max((arr_13 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)53066)))))))));
                }
                arr_50 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_5)), (((unsigned char) (_Bool)1))));
                arr_51 [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)17);
                var_33 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_18 [(_Bool)1] [i_4 + 1]) ? (((/* implicit */int) arr_18 [i_3] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_3]))))), (min((((/* implicit */long long int) var_11)), (1958682662122075023LL)))));
            }
        }
        arr_52 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_16 [i_3] [(_Bool)1] [i_3])) : (((/* implicit */int) (unsigned char)56))))))) ? (((unsigned int) (-(14444981834640071797ULL)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
        var_34 ^= var_3;
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_2), (((/* implicit */int) arr_9 [i_3]))))), (arr_13 [i_3] [i_3] [i_3])))) ? (min(((-(((/* implicit */int) (unsigned char)61)))), (((/* implicit */int) ((unsigned short) var_5))))) : (((/* implicit */int) ((unsigned char) (unsigned char)211)))));
        arr_53 [i_3] = ((((/* implicit */unsigned long long int) max((min((arr_44 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) 0))))) >= (((14444981834640071806ULL) << (((-1) + (25))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)31691)) : (((/* implicit */int) arr_19 [i_15] [i_15] [i_15] [i_15])))))))));
        arr_56 [i_15] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4537))) != (arr_55 [i_15])))), ((unsigned char)234)))) >= ((-((+(((/* implicit */int) var_6))))))));
    }
    for (unsigned short i_16 = 2; i_16 < 24; i_16 += 1) 
    {
        arr_60 [i_16] [i_16] = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((arr_17 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_16 + 1]) >= (((/* implicit */int) var_9))))))), ((+(arr_26 [i_16 + 1] [(unsigned short)22] [(unsigned short)10] [i_16 + 1] [i_16]))));
        arr_61 [24] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_16] [i_16 - 1] [i_16] [i_16 - 1]))));
        arr_62 [i_16] = ((/* implicit */_Bool) (-(max((arr_33 [i_16 + 1] [i_16 + 1] [0] [i_16 - 1]), (var_16)))));
    }
    var_37 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_0))))))), ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3)))))));
}
