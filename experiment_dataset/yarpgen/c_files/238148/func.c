/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238148
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3549734196U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)67)))) + (((/* implicit */int) (unsigned char)0))));
                    var_15 += ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) + (arr_0 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) (short)-5234)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((_Bool) (unsigned char)225))) : (((/* implicit */int) (unsigned char)31))));
        var_16 = ((/* implicit */signed char) (unsigned char)31);
        var_17 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned int) ((_Bool) var_14))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        for (signed char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_7 = 3; i_7 < 10; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)9916)) != (((/* implicit */int) ((unsigned char) (unsigned char)31)))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) : (var_6))) : (var_6)));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_24 [i_6] [i_5] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_13 [i_4 + 1] [i_4 - 1])))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_20 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 3734385588572132989ULL)) ? (1616029740U) : (((/* implicit */unsigned int) arr_25 [i_4] [i_4] [i_9] [i_4] [i_6])))), (((/* implicit */unsigned int) max((var_7), (var_7))))));
                            var_21 = ((/* implicit */signed char) ((_Bool) min((255ULL), (((/* implicit */unsigned long long int) (~(-1)))))));
                        }
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), (92218238)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(arr_20 [i_4] [i_5 - 1] [i_6] [i_6] [5U] [i_10])))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1709897355U) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (3050447061661941672ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (short i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            arr_33 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((4177676227866317494ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((_Bool) (unsigned short)65535))))))));
                            var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(-8975477092222091117LL)))) : (12951377062008785367ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-38))))) || (((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (_Bool)1)))))))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_37 [i_4] [i_12] [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (8975477092222091117LL))), (((/* implicit */long long int) var_12))));
                            arr_38 [i_5] [i_5 + 1] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) -8975477092222091117LL)))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned char)163)), (15122857164804131222ULL))))))));
                            arr_39 [i_6] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)0)), (1985625079U)));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) > (((unsigned int) var_2)));
                            arr_42 [i_5] [i_13] [i_13] [i_6] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-83))));
                            var_27 = ((/* implicit */short) ((arr_8 [i_4 + 1] [i_5 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                        }
                    }
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        arr_47 [i_6] = min((((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned char)79)))))), (min((((/* implicit */unsigned int) (unsigned char)26)), (var_8))));
                        var_28 = ((/* implicit */unsigned char) min((min((var_10), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)22)))))));
                    }
                    arr_48 [i_6] [i_5] [i_6] = ((/* implicit */unsigned short) (-((+(var_9)))));
                    arr_49 [i_4] [i_5] [0U] |= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 170397894)))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 3; i_15 < 11; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_29 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_41 [i_4 + 1] [i_5 - 1])))));
                                arr_55 [i_6] [i_5] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))) ? (((int) var_14)) : (((/* implicit */int) (unsigned short)49991)))))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_11)) ? (536870910LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) + (max((536870915LL), (((/* implicit */long long int) (unsigned char)253)))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_26 [(_Bool)0] [10ULL])) : (var_0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 14; i_18 += 2) 
        {
            {
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_2))))) <= (min((var_6), (((/* implicit */long long int) var_5)))))))));
                var_32 = ((/* implicit */short) var_14);
                var_33 = ((/* implicit */short) ((signed char) max((((long long int) (-2147483647 - 1))), (((/* implicit */long long int) (unsigned short)7424)))));
            }
        } 
    } 
}
