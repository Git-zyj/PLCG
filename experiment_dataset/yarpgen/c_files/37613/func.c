/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37613
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (min((arr_0 [22LL]), (arr_0 [14U]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))))))));
        var_11 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26142))) : (1875219252644506609ULL))) >> (((((/* implicit */int) (unsigned char)132)) - (74))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 4294967295U)) : (var_1)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_3 + 2] [i_1 - 1] [i_3 + 2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4096))) : (7569860182617748713LL)))));
                        var_13 = ((/* implicit */unsigned char) ((5474748759986519390ULL) < (((/* implicit */unsigned long long int) var_5))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 3; i_4 < 21; i_4 += 4) 
                        {
                            arr_11 [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27650)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))) ? (((/* implicit */int) arr_7 [i_1] [(unsigned char)20] [i_3 + 1] [i_4])) : (((((/* implicit */_Bool) (unsigned short)8)) ? (-1466890207) : (((/* implicit */int) (unsigned short)0))))));
                            var_14 = ((/* implicit */unsigned short) ((5145127308690346650ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((7680) <= (((/* implicit */int) (unsigned short)0))))))));
                            var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_10 [i_0] [i_3 + 4] [i_3 + 4] [i_1 + 2] [i_1 + 2]))));
                        }
                        var_16 = ((/* implicit */signed char) ((((arr_10 [i_0] [i_1 - 2] [i_3 + 3] [i_3 + 3] [(unsigned short)19]) + (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_4 [i_3] [i_0]))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1172586151)) / (3153815139551151294LL)))) ? ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (703179466))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 2])) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_1 - 1] [i_3 + 2])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((unsigned int) arr_0 [(unsigned short)20]))))) ? (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (max((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (arr_0 [0U]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 926609609U)) ? (((/* implicit */int) (signed char)118)) : (-2018465946)))) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned char)0))))))))));
        var_19 = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) var_9)))), (((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0])))))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned int i_5 = 4; i_5 < 14; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_6])) > (((/* implicit */int) arr_1 [i_6])))))) : (((((((/* implicit */_Bool) (unsigned short)6468)) || (((/* implicit */_Bool) -10)))) ? (((((/* implicit */_Bool) -750013213)) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17670))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_15 [i_5]))))))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) >= (3078414024U)));
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (1204460686) : (((/* implicit */int) (unsigned short)0))));
            arr_19 [i_5] = ((/* implicit */signed char) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)249))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) : (arr_9 [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4184456050U)) && (((/* implicit */_Bool) -566921312))))) : (((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7 + 2])) ? (arr_21 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 2]) : (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 2])))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (arr_15 [i_7 - 1])))) / (((((/* implicit */_Bool) arr_15 [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_7 - 1])) : (((/* implicit */int) var_3))))));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 14; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    var_25 = ((/* implicit */int) (+(arr_3 [i_9 + 3] [i_5 - 4] [i_9])));
                    arr_26 [i_5] [i_6] [i_6] [1] [i_8] [i_9 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(7502624776096899091ULL)))) || (((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 - 3] [i_5]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_3))));
                        arr_29 [i_5] [i_5] [i_8] [i_8] [i_10] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) >= (((/* implicit */int) ((((/* implicit */int) arr_8 [i_5 - 3] [i_6] [i_8] [i_8])) >= (((/* implicit */int) (unsigned short)50654)))))));
                        arr_30 [i_5] [i_6] [i_8 - 1] [i_8] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_8])) ? (var_5) : (var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_22 [i_5] [i_6] [i_8] [(unsigned short)3])))) : (var_0)));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_10] [i_5 - 4] [i_8 + 1])) ? (((/* implicit */int) arr_20 [i_5] [i_5 - 4] [i_8 + 1] [i_9])) : (arr_13 [i_6])));
                    }
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_5] [i_5] [i_5]) >> (((((/* implicit */int) arr_7 [(signed char)8] [(signed char)8] [i_8] [i_8])) - (178)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9709161057493636185ULL) <= (((/* implicit */unsigned long long int) 0U)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_6] [i_5]))) : (arr_9 [i_5])))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_5 - 3]), (arr_9 [i_5 - 2])))) ? (((/* implicit */long long int) ((arr_9 [i_5 - 3]) - (((/* implicit */unsigned int) ((/* implicit */int) ((-2147483633) >= (((/* implicit */int) (unsigned short)1))))))))) : (arr_10 [i_5] [i_6] [18ULL] [i_11] [(signed char)6]))))));
                    arr_35 [6U] [i_11] = ((/* implicit */short) ((unsigned char) (signed char)68));
                    var_30 ^= ((/* implicit */signed char) max((min((((7738002869214192037LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16875))))), (((/* implicit */long long int) ((unsigned short) arr_20 [i_5] [i_6] [i_6] [i_12]))))), (((/* implicit */long long int) arr_27 [i_5 - 2] [i_6]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    arr_39 [i_11] = ((/* implicit */unsigned short) var_3);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((-1836250941) & (((/* implicit */int) (unsigned char)167)))) : (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((3659476793U) >> (((18014398501093376ULL) - (18014398501093363ULL)))))) : (max((arr_16 [(unsigned short)10] [i_13 - 1] [i_5 - 3]), (((/* implicit */unsigned long long int) arr_8 [i_13] [19] [i_13 + 3] [i_5 - 4]))))));
                    var_32 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)118))));
                    var_33 = ((((/* implicit */_Bool) ((signed char) var_6))) ? (max((((/* implicit */unsigned int) var_0)), (arr_37 [i_5] [i_5 + 1] [i_13 - 1] [i_13]))) : (((((/* implicit */_Bool) arr_7 [i_5] [20] [i_5 - 3] [i_13 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 - 4] [i_13 + 3]))) : (arr_37 [i_6] [i_5 - 3] [i_13 + 2] [i_13]))));
                }
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-26))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_11]))) : (var_1)));
            }
        }
        var_35 = ((/* implicit */unsigned long long int) arr_32 [i_5] [i_5] [i_5]);
    }
    var_36 = ((/* implicit */int) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)130))))), (min((1352939243U), (((/* implicit */unsigned int) (signed char)-126)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_6)))))));
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)107)) ? (8172649428802636729LL) : (((/* implicit */long long int) 0U))));
}
