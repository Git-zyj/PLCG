/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203816
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = (~(((/* implicit */int) (signed char)-13)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)-13))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_19 = (+(((/* implicit */int) (signed char)11)));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1269134855)) ? (((/* implicit */int) (unsigned short)26167)) : (6)))) ? (((/* implicit */int) (short)-24516)) : (((/* implicit */int) (unsigned char)17))))) : (min((8039755152170061467LL), (((/* implicit */long long int) (unsigned char)239))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 3] [i_3 + 3] [i_3 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))) ? (max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (arr_13 [i_2] [i_3] [i_3])))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)12)))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (long long int i_5 = 4; i_5 < 9; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) var_13);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)15))))) ? (((((/* implicit */_Bool) (short)24516)) ? (((/* implicit */int) var_6)) : (-2017968871))) : ((+(-2147483636))))))));
                        arr_21 [i_5] = ((/* implicit */unsigned char) arr_19 [i_2] [i_5] [i_4] [i_5]);
                    }
                } 
            } 
        }
        for (short i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            arr_24 [i_2] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)30))));
            arr_25 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7175)) ? (-3826189467557258480LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1562)))))) ? (arr_11 [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((/* implicit */long long int) var_5))));
        }
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)0] [(unsigned short)0])) ? (arr_11 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (short)32763))))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)243)))))));
        /* LoopSeq 3 */
        for (unsigned short i_7 = 3; i_7 < 11; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_7] [i_7 + 2])) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7 + 1])) : (((/* implicit */int) arr_22 [i_7 - 3] [i_7 - 3] [i_7 - 3]))))) ? (((((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7] [i_7])) ? (((/* implicit */int) var_3)) : (-1269134855))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (signed char)106))))));
            var_26 += ((/* implicit */unsigned int) arr_13 [i_2] [i_2] [1LL]);
            arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) var_8);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)18)) : ((+(((/* implicit */int) (signed char)15)))))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_32 [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)31)) > (((/* implicit */int) (unsigned short)29)))))) : (var_17)));
                        }
                        arr_37 [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (signed char i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 10; i_14 += 2) 
                    {
                        {
                            arr_49 [i_2] [i_2] [i_2] [(signed char)1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3826189467557258462LL)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (short)(-32767 - 1)))));
                            arr_50 [i_11] [i_13] [i_12] [i_11] [i_11] = ((/* implicit */signed char) var_9);
                            var_29 -= ((/* implicit */unsigned short) arr_17 [(signed char)6]);
                            var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_14 - 1])) ? (((((/* implicit */_Bool) (short)1478)) ? (((/* implicit */int) (signed char)106)) : (33554431))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_14 + 1])))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)0)) ? (556476767) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [(unsigned short)0])))))));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(var_17))))));
            arr_51 [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)11943))));
        }
        for (short i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            arr_55 [i_2] [i_15] |= ((/* implicit */short) var_11);
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2] [10] [i_2])) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_38 [i_2] [i_15] [i_2])) : (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) arr_36 [i_15] [8] [i_2] [(unsigned short)4])) : (var_15)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
        }
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_34 += ((/* implicit */int) var_11);
        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (signed char)-25)))))));
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 3; i_17 < 15; i_17 += 3) 
    {
        arr_62 [i_17] [i_17] = var_14;
        arr_63 [i_17] [i_17] |= (-((+(((/* implicit */int) (unsigned short)3)))));
    }
}
