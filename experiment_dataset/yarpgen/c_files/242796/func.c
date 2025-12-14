/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242796
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)49792)) ? (((/* implicit */int) (unsigned short)15744)) : (arr_0 [i_0]))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15751)) << (((((/* implicit */int) (unsigned char)255)) - (238)))))) ? (((/* implicit */int) var_13)) : (-1320459745))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : ((-(((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_14 &= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (signed char)0)))) ? (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)119)))) : (((((/* implicit */int) (unsigned short)49792)) % (((/* implicit */int) (signed char)-15)))))), (((((/* implicit */_Bool) arr_4 [(signed char)12])) ? (-1574570150) : (1320459744)))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : ((+(arr_0 [i_0])))))) ? (((arr_8 [i_0] [i_3]) | (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_9 [i_0] [(unsigned char)8] [i_2] [(unsigned char)8] [i_2]) : (((/* implicit */int) arr_2 [i_0]))))));
                        var_16 = ((((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned short) var_9))))) * (((/* implicit */int) ((signed char) ((unsigned short) (unsigned char)0)))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) max(((unsigned short)1160), (((/* implicit */unsigned short) (signed char)75))));
    }
    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned char) min((arr_0 [i_4]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_3)) : (arr_0 [i_4])))) ? (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) ((signed char) var_8)))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))))) * (max((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_9))))), (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))))));
        var_18 ^= ((/* implicit */int) (signed char)-104);
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)24])) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7)))))) : ((-(((/* implicit */int) (unsigned char)237))))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-8)))))));
        var_20 = max((arr_1 [18] [i_5]), (((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) < (((/* implicit */int) (unsigned short)15738))))));
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            var_21 &= arr_7 [i_6];
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-111))));
                var_23 = ((/* implicit */signed char) var_8);
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_7 + 1] [i_7 + 3] [i_7 + 2]))));
                    arr_28 [i_9] [i_9] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_11 [i_9]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_7 + 2] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 2]))));
                    var_25 = ((/* implicit */unsigned char) ((signed char) arr_23 [i_7 - 1] [i_7 + 2] [i_7 + 2]));
                    arr_29 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_6 [(signed char)1] [(unsigned short)10] [i_6]);
                }
                for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
                {
                    arr_33 [i_6] [i_7] [i_8] [i_8] [i_6] [(signed char)12] = ((signed char) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_6] [(signed char)15] [1])) ? (arr_9 [i_6] [(unsigned char)10] [i_6] [i_8] [i_6]) : (((/* implicit */int) (unsigned char)8))));
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1160))));
                    /* LoopSeq 4 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_7 + 1] [i_7 + 3]))));
                        arr_36 [i_6] [i_7 - 1] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_0 [i_6]);
                    }
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_7 + 2] [i_7 + 2] [i_10 - 2] [(signed char)15] [i_10 - 1])))))));
                        var_29 *= ((/* implicit */unsigned short) ((unsigned char) (signed char)1));
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                        arr_39 [(unsigned short)4] [i_10] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) arr_18 [i_6] [i_10]))));
                    }
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
                    {
                        var_31 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_6] [i_10 - 2] [i_6] [i_6] [i_6]))))));
                        var_32 = ((/* implicit */signed char) (+(0)));
                    }
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                    {
                        arr_44 [i_6] = arr_20 [i_8];
                        arr_45 [(unsigned short)10] [i_14] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1320459744)) ? (((/* implicit */int) (signed char)0)) : (1320459754)));
                        arr_46 [i_6] [i_7] [i_8] [i_8] [i_6] [i_10] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_22 [i_7] [i_10 - 1])))) : (arr_37 [i_7 + 2] [i_7 - 1] [i_10 + 3] [i_10])));
                    }
                }
            }
            for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                arr_49 [i_6] = ((/* implicit */signed char) arr_9 [i_6] [i_6] [i_6] [20] [20]);
                arr_50 [i_6] [(signed char)11] [i_6] = ((/* implicit */signed char) arr_43 [i_6] [i_6]);
                var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_7 - 1] [i_7 + 1] [i_7 - 1]))));
            }
            var_34 += (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_32 [i_6])))));
        }
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6] [(unsigned short)1] [(unsigned short)1] [i_6] [7] [i_6])) ? (((/* implicit */int) (unsigned short)49776)) : (((/* implicit */int) arr_25 [i_6] [(unsigned char)12] [i_6] [15] [i_6]))))))))));
        var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */_Bool) arr_18 [(signed char)0] [i_6])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_7 [i_6]))))));
        /* LoopSeq 1 */
        for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_37 *= ((/* implicit */unsigned short) ((int) -1320459745));
            var_38 = ((/* implicit */unsigned short) arr_32 [i_6]);
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_6])) <= (((/* implicit */int) arr_2 [i_6]))));
        }
        arr_54 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) (unsigned short)24732));
    }
    var_40 = ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)));
    var_41 = ((/* implicit */signed char) (unsigned char)248);
    var_42 = ((/* implicit */int) ((var_10) == (((/* implicit */int) var_4))));
    var_43 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)248))));
}
