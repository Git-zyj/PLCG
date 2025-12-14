/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233329
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
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_11 [i_0 - 1] [i_0 - 1] [i_0] [(short)21] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (arr_3 [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)21] [i_3]))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((1383121447U) & (((/* implicit */unsigned int) arr_3 [i_0]))));
                        var_15 = ((/* implicit */short) 1383121447U);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-2028031992)))) : (-3645702252497948098LL))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_7 [i_0 - 1] [0LL])), (arr_8 [i_0 - 3] [19U] [(unsigned char)8]))), (((/* implicit */unsigned int) 2028031977)))))));
            arr_16 [(short)8] [i_0] = ((/* implicit */unsigned int) ((max(((-(3757188994U))), (((/* implicit */unsigned int) (-(-2054192862)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_13))))));
            var_16 = ((/* implicit */int) (~((+(min((((/* implicit */long long int) var_1)), (var_3)))))));
            var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [(short)12] [(short)12] [(_Bool)1]))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (arr_13 [i_0 + 1] [i_0 - 1])))) ? (((long long int) 1383121454U)) : (((/* implicit */long long int) ((2911845849U) % (((/* implicit */unsigned int) 2028031991)))))));
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) ((unsigned short) arr_13 [i_0] [i_5 + 1]));
            arr_19 [13LL] [i_0] [13LL] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-2028031992) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0] [i_5 - 1])) - (23))))))))) : (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-2028031992) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0] [i_5 - 1])) - (23))) - (34)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_12))));
                            arr_27 [i_0] [(unsigned short)7] [i_6] [i_7 + 1] [i_0] [(signed char)14] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (var_3) : (((/* implicit */long long int) (-(((/* implicit */int) (short)32765)))))));
                            arr_28 [(unsigned short)2] [i_0] [i_8] = ((/* implicit */_Bool) 3146184619U);
                            arr_29 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [i_5 - 1] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                            arr_30 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_5 - 1] [i_6])) ? (var_2) : (((/* implicit */long long int) 2054192861)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16269190147353490543ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_24 [22] [22] [22] [i_0 - 3])))))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 2; i_9 < 21; i_9 += 3) 
                {
                    arr_34 [i_0] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 1516086851765040027LL)) ? (((/* implicit */unsigned long long int) -2054192861)) : (var_0)));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 3; i_10 < 23; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) arr_36 [(_Bool)1] [(_Bool)1] [i_10 + 1] [i_0 - 3]);
                        arr_37 [i_0] [(signed char)22] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))))));
                    }
                    for (short i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        arr_41 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16383))));
                        arr_42 [i_0] [i_5] [i_5] [i_9] [i_11] = ((/* implicit */unsigned int) arr_18 [i_0] [i_5] [i_5 + 1]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_11);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7703716569005446949LL)) ? (((/* implicit */int) (unsigned short)16383)) : (1994984343)));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_0] [i_0] [17ULL] = ((/* implicit */int) arr_43 [i_0] [i_0] [(unsigned char)11] [i_0] [i_13] [i_6] [i_0 + 1]);
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(2028031991))))));
                        arr_48 [18] [i_0] [i_6] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8446)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))));
                        arr_49 [9LL] [i_5] [i_6] [i_0] [i_13] [i_5 - 1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))) ? (arr_38 [i_5 + 1] [i_5 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8446)))));
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned int) -2028031991)) : (1383121443U)))));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_28 += ((/* implicit */short) ((((unsigned long long int) (short)-32766)) | (arr_51 [(unsigned char)5] [(unsigned char)5] [i_0 - 2])));
                    arr_52 [(_Bool)1] [7] [i_14] [i_14] [i_14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4024378378103139781LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))) : (2911845849U)));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_5 [i_0 + 1]))));
                }
                var_30 *= ((/* implicit */unsigned int) ((unsigned char) arr_14 [i_0] [i_5 + 1] [i_0 - 2]));
                var_31 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0LL) : (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16354))))) : (var_2)));
            }
        }
    }
    var_32 = ((/* implicit */short) (signed char)27);
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        for (unsigned int i_16 = 4; i_16 < 19; i_16 += 1) 
        {
            {
                arr_58 [(_Bool)0] [(_Bool)0] |= ((/* implicit */short) ((6476429031345887933LL) < (((/* implicit */long long int) 3483191035U))));
                var_33 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2911845856U)))) ? (((/* implicit */long long int) (~(var_11)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_16]))))) : (((/* implicit */long long int) ((unsigned int) var_7)))))));
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)206), ((unsigned char)212)))) ? (((((/* implicit */_Bool) -217393196)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1383121447U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_16 + 1]))))))))), (max(((~(12854272860907717984ULL))), (((/* implicit */unsigned long long int) var_13)))))))));
            }
        } 
    } 
    var_35 &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)6)), (var_1)))) ? (5592471212801833628ULL) : (max((((/* implicit */unsigned long long int) var_7)), (5592471212801833631ULL))))));
}
