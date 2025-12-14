/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32710
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_11 [i_2] [i_2] = min((-2147483619), (max((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [(unsigned char)2] [i_1] [(signed char)2])), ((unsigned short)0)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_0 + 1] [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_14)))) + (((/* implicit */int) arr_10 [i_2]))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-1589662276), (((/* implicit */int) var_1)))), (min((((/* implicit */int) arr_10 [i_2])), (var_11)))))) ? (max((min((1589662276), (var_2))), (((((/* implicit */_Bool) (signed char)79)) ? (var_11) : (((/* implicit */int) (unsigned short)40796)))))) : (22888268)));
                        arr_14 [i_0 - 2] [i_1] [i_2] [i_3 + 1] = ((/* implicit */unsigned char) min(((signed char)61), ((signed char)-67)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_18 = ((int) ((((/* implicit */int) var_5)) | (((/* implicit */int) max((var_8), (var_4))))));
                        var_19 *= ((/* implicit */unsigned char) 0);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((unsigned short) (signed char)-99));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max(((signed char)-67), ((signed char)-76))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    arr_27 [i_0] [i_0 - 1] [i_0] [i_0] &= ((/* implicit */int) var_15);
                    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)32946)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)13387))))) : (((/* implicit */int) (unsigned short)9)))), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)123)) ? (511) : (((/* implicit */int) (signed char)34)))) != (((/* implicit */int) var_4)))))));
                    arr_28 [i_0] = ((/* implicit */int) arr_9 [i_1] [(unsigned char)12] [12] [i_1]);
                }
                arr_29 [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0 - 2] [i_0]);
                var_22 &= ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-80)), (arr_19 [i_1] [i_1] [(signed char)2] [i_1] [i_1])))) | (var_13)))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)127)))) : (((((/* implicit */_Bool) (signed char)84)) ? (min((var_6), (-2147483647))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) != (2147483637)))))));
                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) (unsigned char)26))))) ? (((((/* implicit */_Bool) -1885676626)) ? (min((((/* implicit */int) var_0)), (166412740))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_15)))))) : (((/* implicit */int) (signed char)-71))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (signed char i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) var_14);
                                arr_44 [i_8] [i_8] = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (signed char)-35)))) ? (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-76)))) : (min((var_2), (((/* implicit */int) arr_41 [i_9] [(signed char)10] [i_9]))))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) 1704403687)) ? (((int) ((511) - (((/* implicit */int) arr_40 [i_8] [i_9] [i_10] [i_12 - 1]))))) : (((/* implicit */int) min(((unsigned char)103), (((/* implicit */unsigned char) (signed char)-79))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_13 = 2; i_13 < 21; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_13))) <= (((/* implicit */int) (signed char)109))))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (unsigned char)171))));
                    }
                    var_28 &= ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)-101)))), (min((min((((/* implicit */int) var_7)), (var_6))), (((/* implicit */int) ((-1885676626) <= (((/* implicit */int) (signed char)22)))))))));
                }
                for (signed char i_15 = 4; i_15 < 20; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)12)) : (var_6))) != (((/* implicit */int) min(((unsigned short)43284), (((/* implicit */unsigned short) (unsigned char)217)))))))), ((-(((/* implicit */int) (signed char)70))))));
                                var_30 = ((min(((+(((/* implicit */int) (signed char)-42)))), ((-(((/* implicit */int) (signed char)25)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) -874273644)) ? (((/* implicit */int) (signed char)-46)) : (-874273629)))) ? (((/* implicit */int) ((unsigned char) (signed char)-107))) : (((/* implicit */int) arr_40 [i_8] [i_9] [i_15 + 2] [i_15 - 2])))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)140)), ((~(max((var_3), (var_12)))))));
                    arr_59 [i_15] [i_9] [(unsigned char)0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)40991))));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) (-(max((max((((/* implicit */int) (signed char)1)), (var_6))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)34))))))));
}
