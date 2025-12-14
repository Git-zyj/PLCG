/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202945
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] = ((_Bool) arr_0 [i_0 - 1]);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((_Bool) arr_7 [i_0 - 2]));
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_12 [i_2] [i_0] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [(short)10] [i_0]))));
                    var_17 -= ((/* implicit */unsigned char) arr_10 [i_0] [i_3]);
                    var_18 = ((/* implicit */short) ((_Bool) arr_9 [i_0 + 1]));
                    arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_14))));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_13))) | (((/* implicit */int) arr_11 [i_4 + 1] [i_1] [i_4] [i_4 + 1])))))));
                    arr_16 [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)3))));
                    arr_17 [i_0] [i_2] = var_1;
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    var_20 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                    arr_22 [i_0] = ((/* implicit */short) (unsigned short)2350);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_20 [(_Bool)1] [i_5] [i_1] [i_5]))));
                    arr_23 [i_0 - 2] [i_1] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (signed char)-29)) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_5 + 1] [i_0] [i_0] [i_0]))));
                }
            }
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) < (((arr_4 [i_6]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32767))))));
                var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)10))));
                /* LoopSeq 3 */
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-28)) || (((/* implicit */_Bool) (unsigned short)65535)))))));
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((5876650607766766271LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))));
                    }
                    var_27 = ((/* implicit */_Bool) var_3);
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) arr_9 [i_0 + 1]))));
                    arr_31 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65534))));
                }
                for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_6])) + (((/* implicit */int) arr_9 [i_9 - 1]))));
                    var_30 = ((unsigned short) arr_11 [i_0] [i_0] [5LL] [i_9 + 1]);
                    /* LoopSeq 4 */
                    for (long long int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                        var_32 = ((/* implicit */_Bool) arr_33 [i_0] [(unsigned short)12] [i_0] [i_0] [i_0 - 1] [(signed char)15]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        var_33 ^= ((/* implicit */short) var_2);
                        arr_39 [i_0] [(_Bool)1] [(_Bool)1] [i_11] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_11] [i_11] [i_0] [i_0 + 1] [i_0] [i_0]))));
                        var_34 = ((/* implicit */signed char) var_3);
                        var_35 = ((/* implicit */unsigned short) arr_19 [i_0 + 1] [i_0] [i_0] [i_9 + 1]);
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_36 ^= arr_1 [i_6];
                        arr_43 [i_0] [i_1] = (unsigned short)31395;
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_37 = var_14;
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 2])))))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [(signed char)10] [i_9 + 1])) ? (((/* implicit */int) arr_14 [i_9] [i_9 - 1] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_14 [i_0] [i_9 - 1] [i_0] [i_9 + 1]))));
                        var_40 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31701))))));
                        var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    }
                }
                for (unsigned short i_14 = 1; i_14 < 17; i_14 += 4) /* same iter space */
                {
                    var_42 += ((/* implicit */short) ((5876650607766766262LL) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_6])))));
                    var_43 &= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                }
                var_44 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_0])) << (((((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0])) - (17068)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_0])) << (((((((/* implicit */int) arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0])) - (17068))) - (14426))))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
        {
            arr_51 [i_0] = ((/* implicit */_Bool) var_4);
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [11LL] [i_15])))))));
            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (+(((/* implicit */int) arr_30 [i_0] [i_0 + 1] [i_15] [i_15] [i_0 + 1])))))));
        }
        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
        {
            arr_54 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0 + 1] [i_16] [i_0])) % (((/* implicit */int) arr_32 [i_16] [i_16] [i_0] [i_0 - 2] [i_16] [i_16]))));
            var_47 = ((/* implicit */short) (!(((_Bool) 5876650607766766262LL))));
        }
        var_48 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_38 [(signed char)0] [i_0] [i_0] [i_0])))) / (((/* implicit */int) (_Bool)1))));
        arr_55 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    }
}
