/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237073
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [(signed char)12])))) ? (((((/* implicit */_Bool) arr_0 [4])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [(signed char)10]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)10])) && (((/* implicit */_Bool) (signed char)29)))))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((arr_1 [i_0]) == (((/* implicit */int) var_0)))))) % (((/* implicit */int) ((signed char) (~(((/* implicit */int) (signed char)-29))))))));
        arr_4 [i_0] [(signed char)10] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) / (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((2147483647) % (((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_0 [i_0])))) - (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1 - 2])) <= (((/* implicit */int) arr_6 [i_1 + 1]))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_12 [(signed char)4] [(signed char)4] |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)119)) + (((/* implicit */int) (signed char)84))));
                var_18 = ((/* implicit */signed char) min((var_18), (((signed char) var_6))));
                arr_13 [(signed char)10] |= ((/* implicit */signed char) (~((((-2147483647 - 1)) ^ (((/* implicit */int) (signed char)20))))));
                var_19 = ((/* implicit */signed char) min((var_19), (arr_9 [(signed char)18])));
            }
            for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_20 &= var_14;
                var_21 &= ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    arr_18 [i_2] [1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_1])) : (((/* implicit */int) ((signed char) (signed char)1)))));
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-109))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (short)-10548))));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_2 - 1])) ? (-828631953) : (((/* implicit */int) (signed char)-40))));
                }
            }
            for (signed char i_6 = 1; i_6 < 17; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_7] [i_2] [i_7])) - (((/* implicit */int) arr_20 [i_1]))));
                    arr_23 [i_1] [(signed char)16] [i_2] [(signed char)16] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [(signed char)17] [i_2 - 1] [(_Bool)1] [i_6 - 1] [i_7] [i_2]))));
                }
                arr_24 [i_1] [i_2] [i_2] [i_6] = ((((int) arr_7 [(signed char)8] [(signed char)8])) | (((/* implicit */int) (!(arr_7 [i_6] [i_1])))));
            }
            for (signed char i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
            {
                arr_27 [i_2] [(signed char)7] [(signed char)7] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_2] [i_1 - 2] [i_1] [i_2]))));
                var_25 *= arr_9 [(signed char)14];
            }
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((short) (signed char)32)))));
        }
    }
    /* vectorizable */
    for (short i_9 = 4; i_9 < 12; i_9 += 1) 
    {
        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((var_11) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_10 [i_9] [(_Bool)1] [(signed char)12] [i_9])))) : (((/* implicit */int) var_13))));
        var_28 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_9] [(signed char)4])) / (((/* implicit */int) (signed char)1)))) <= (((/* implicit */int) (signed char)1))));
        var_29 = var_14;
    }
    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        arr_34 [i_10] &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((signed char) arr_7 [i_10] [i_10])))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) << (((((/* implicit */int) (signed char)117)) - (91))))))));
        var_31 &= ((/* implicit */short) (-(((((/* implicit */_Bool) max((var_3), (var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_7 [i_10] [(signed char)3]))))))));
        var_32 = ((/* implicit */signed char) max((var_32), (min((min((arr_19 [i_10] [i_10] [i_10]), (var_8))), (((signed char) (signed char)9))))));
        var_33 ^= ((/* implicit */short) (+(min((((/* implicit */int) var_12)), (2147483639)))));
    }
    var_34 *= ((/* implicit */signed char) max((((short) (+(((/* implicit */int) var_4))))), (((/* implicit */short) var_15))));
    /* LoopSeq 2 */
    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_35 [i_12])) : (((/* implicit */int) arr_38 [i_11])))) >= (((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (_Bool)0))))))), ((+(((/* implicit */int) arr_36 [i_12])))))))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % ((+(((/* implicit */int) arr_40 [i_12] [i_11])))))))));
        }
        arr_41 [i_11] |= ((/* implicit */short) (signed char)50);
        var_37 = ((/* implicit */signed char) (-(((/* implicit */int) arr_36 [9]))));
    }
    /* vectorizable */
    for (signed char i_13 = 4; i_13 < 24; i_13 += 2) 
    {
        arr_44 [i_13] [i_13] |= (-(((/* implicit */int) arr_42 [i_13 - 2] [i_13 - 2])));
        arr_45 [i_13] [i_13] = arr_42 [i_13 - 3] [i_13 - 3];
    }
    /* LoopNest 3 */
    for (int i_14 = 4; i_14 < 11; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                {
                    var_38 = ((signed char) min((((/* implicit */int) (signed char)-30)), (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_6 [i_15]))))));
                    arr_56 [i_15] [i_15] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */int) (short)-17426)) <= (((/* implicit */int) (signed char)98))));
                }
            } 
        } 
    } 
    var_39 &= ((/* implicit */signed char) (_Bool)1);
}
