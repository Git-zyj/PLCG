/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40275
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) : (var_7)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))) & (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 2])), (12477281780561495425ULL)))))));
        var_19 = ((/* implicit */unsigned long long int) ((max((arr_1 [i_0 - 2]), (((/* implicit */unsigned long long int) var_14)))) == (max((arr_1 [i_0 - 2]), (((/* implicit */unsigned long long int) (unsigned char)178))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2])))))));
                    var_21 |= ((/* implicit */signed char) var_6);
                    arr_9 [i_2] [i_0 + 1] [i_1] [i_2 + 2] = ((/* implicit */unsigned int) (unsigned char)78);
                }
            } 
        } 
        var_22 = arr_0 [i_0] [2U];
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) var_10);
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [i_3] [i_3]))));
        arr_13 [i_3] = ((/* implicit */signed char) ((unsigned char) arr_6 [i_3] [i_3] [i_3] [i_3]));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((arr_2 [i_3] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3])))));
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
            {
                var_25 &= ((/* implicit */int) ((unsigned int) (signed char)-34));
                var_26 = ((((/* implicit */_Bool) arr_17 [(signed char)10] [(signed char)10] [i_5])) ? (12905597278132605733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3])) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)12] [i_4] [(signed char)16]))))))))));
            }
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    var_28 = ((unsigned int) ((arr_15 [i_6] [i_6]) >> (((((/* implicit */int) arr_20 [i_3] [i_4])) - (106)))));
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_2))));
                    var_30 *= ((/* implicit */unsigned char) (+((+(5785203029226489813ULL)))));
                }
                for (signed char i_8 = 2; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_17 [i_8 + 3] [i_8 - 1] [i_8 + 2]))));
                    var_32 = ((/* implicit */_Bool) ((arr_5 [i_8 + 1]) >> (((((/* implicit */int) arr_6 [i_3] [i_4] [i_6] [i_8])) - (219)))));
                    var_33 = ((((/* implicit */_Bool) arr_14 [(unsigned char)10] [(unsigned char)13] [(_Bool)1])) && (((/* implicit */_Bool) var_8)));
                }
                for (unsigned long long int i_9 = 4; i_9 < 13; i_9 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) -5);
                    /* LoopSeq 2 */
                    for (signed char i_10 = 3; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) var_16);
                        arr_31 [i_3] [i_3] [i_10 - 1] [i_9 - 2] [i_10] [(signed char)8] [(unsigned char)2] = ((/* implicit */short) ((signed char) arr_24 [i_9 + 3] [i_9 - 3] [i_9 + 3] [i_9 + 1]));
                    }
                    for (signed char i_11 = 3; i_11 < 16; i_11 += 2) /* same iter space */
                    {
                        var_36 |= ((/* implicit */unsigned int) arr_29 [i_6] [i_9 + 3] [i_9 + 2] [i_9 - 4] [i_9 - 4] [i_6]);
                        var_37 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)114))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3518)) ? (var_4) : (var_7)))) : (12905597278132605730ULL)));
                    }
                }
                var_39 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)170)) << (((-2117227804) + (2117227820)))))) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_6])) ? (134318000U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
                arr_34 [12ULL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1620746596)) ? (var_14) : (((/* implicit */int) var_9))));
                var_40 = (!(((/* implicit */_Bool) var_4)));
            }
            for (signed char i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */int) arr_7 [i_12] [i_4] [i_3]);
                var_42 ^= ((/* implicit */long long int) ((unsigned int) arr_2 [i_3] [(signed char)9]));
            }
        }
        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_13] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [i_13])) : (((/* implicit */int) arr_4 [i_3] [i_3]))));
            var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_3] [i_13] [i_13] [i_3] [i_3] [(unsigned char)10]))));
            var_45 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
            var_46 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_3] [i_13] [i_13])) > (((/* implicit */int) var_9))));
        }
    }
    var_47 = ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)178)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3212))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) var_14)) : (max((5541146795576945889ULL), (((/* implicit */unsigned long long int) var_1)))))));
    var_48 = ((/* implicit */unsigned long long int) max((var_48), (max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_12)))))), (var_0)))));
}
