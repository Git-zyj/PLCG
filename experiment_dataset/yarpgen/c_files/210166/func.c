/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210166
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
    var_20 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) | (min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (-4605978091667396430LL)))));
                        var_22 = ((/* implicit */unsigned int) var_9);
                        var_23 = ((/* implicit */short) ((unsigned short) arr_0 [i_0] [i_0]));
                    }
                } 
            } 
            arr_11 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_0)))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 2; i_4 < 23; i_4 += 2) 
            {
                arr_14 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) var_6)) + (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                arr_15 [1ULL] [(_Bool)1] [i_0] = ((/* implicit */long long int) var_13);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_18 [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-24380)), ((unsigned short)16383))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16560))))) ? (((/* implicit */int) arr_9 [i_4 - 1])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-32)), (var_5)))) && (((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4])))))))))));
                    arr_19 [i_0] [(signed char)11] [i_0] = ((/* implicit */unsigned int) (-((~(((long long int) arr_4 [i_0] [i_1] [i_4 + 2]))))));
                    var_24 = var_14;
                }
            }
            arr_20 [i_0] = ((/* implicit */signed char) (((((~(-240492996348333656LL))) + (((long long int) var_6)))) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((long long int) (unsigned short)58304)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0U))))))));
        }
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] [13] = ((/* implicit */unsigned int) arr_17 [i_0] [i_6] [i_6] [i_0]);
            arr_24 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) ((long long int) arr_10 [16LL] [16LL])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51518))))) ? (((/* implicit */int) min((arr_21 [i_0] [(_Bool)1]), (((/* implicit */unsigned short) arr_13 [i_0] [i_6] [i_0]))))) : (1923172095)))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                arr_28 [i_7] [8ULL] [i_0] |= ((/* implicit */_Bool) min((((long long int) (+(4273416004U)))), ((~(9223372036854775807LL)))));
                arr_29 [i_0] [(signed char)3] [i_0] = ((/* implicit */_Bool) (+(arr_25 [i_7] [(_Bool)1] [(_Bool)1])));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-90)) ? (-2230261627138484977LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-29)))));
                arr_30 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) min((4294967288U), (7U)))))))));
            }
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [(signed char)10])) : (((/* implicit */int) arr_26 [i_6])))) ^ ((+(((/* implicit */int) (signed char)33))))))))))));
            arr_31 [12] [2LL] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (-((-(-6031503883918089816LL))))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)90)) < (((/* implicit */int) ((_Bool) var_15))))))));
            arr_36 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((-(min((3722941861U), (((/* implicit */unsigned int) (signed char)-32))))))));
            arr_37 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) -4863108567254313046LL))) & (((/* implicit */int) (!(var_10))))));
            var_27 = ((/* implicit */int) ((unsigned short) (_Bool)0));
        }
        /* LoopSeq 4 */
        for (signed char i_9 = 1; i_9 < 24; i_9 += 3) 
        {
            arr_40 [i_0] = ((min((((((/* implicit */_Bool) arr_10 [i_0] [i_9 - 1])) ? (-2238441184659749000LL) : (arr_27 [i_0] [i_9] [(short)23]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)18803)))))) | (arr_4 [i_9 + 1] [i_0] [i_0]));
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((-2093624507), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17)))))), (((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_21 [(short)18] [i_0 + 1])) : (((/* implicit */int) ((_Bool) var_10)))))));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                arr_45 [i_0] [i_9] [(unsigned short)2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_21 [i_10] [i_0 + 1])))) ? ((~(((/* implicit */int) var_0)))) : (((var_10) ? (((/* implicit */int) arr_43 [4LL] [i_0] [i_9 + 1])) : (((/* implicit */int) (short)-11986))))));
                arr_46 [i_10] &= ((/* implicit */_Bool) var_3);
                var_28 = ((/* implicit */short) arr_1 [(unsigned short)4] [i_9 - 1]);
            }
            var_29 ^= (-(((/* implicit */int) arr_16 [i_0] [(unsigned char)14] [i_0] [(unsigned char)14] [i_0] [i_9])));
        }
        /* vectorizable */
        for (signed char i_11 = 1; i_11 < 23; i_11 += 2) /* same iter space */
        {
            arr_50 [i_0] = ((/* implicit */unsigned char) ((((unsigned int) var_10)) >> (((arr_25 [i_0 + 1] [3] [i_0 + 1]) + (781103963)))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
        }
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 23; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    for (long long int i_15 = 4; i_15 < 24; i_15 += 1) 
                    {
                        {
                            arr_60 [i_13] [i_12] [i_13] |= ((/* implicit */long long int) ((4294967295U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) var_17)))))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)7092)) ? (34359738367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_15] [i_15] [i_12] [i_14] [i_15] [19U]))))))))));
                            arr_61 [i_0] [i_0] [i_12] [i_14] [i_15] = ((/* implicit */unsigned char) (~(7721953581822574155ULL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_16 = 2; i_16 < 24; i_16 += 2) 
            {
                for (unsigned short i_17 = 4; i_17 < 23; i_17 += 1) 
                {
                    {
                        arr_68 [i_0] = ((/* implicit */short) var_16);
                        var_32 = arr_1 [i_0] [i_0];
                    }
                } 
            } 
        }
        for (unsigned char i_18 = 2; i_18 < 24; i_18 += 1) 
        {
            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_16 [(signed char)12] [i_18] [i_18] [i_18 - 2] [i_0 - 1] [i_0])) : ((~(((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0 - 1] [23ULL] [i_18]))))))) ? (var_19) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_4))))))))));
            /* LoopNest 3 */
            for (long long int i_19 = 1; i_19 < 23; i_19 += 2) 
            {
                for (signed char i_20 = 3; i_20 < 24; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */int) min((arr_63 [i_0] [i_0] [i_0] [(signed char)14]), (((/* implicit */unsigned long long int) (~(7940789609780960591LL))))));
                            var_35 = ((/* implicit */int) ((short) arr_5 [i_0 + 1] [i_21] [i_19 - 1]));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned char) min((0), (((/* implicit */int) (signed char)15))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_22 = 1; i_22 < 23; i_22 += 4) 
            {
                var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
                arr_82 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_66 [i_22 + 1] [i_0 + 1] [i_0]))));
                var_38 = ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)0)))) | (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_81 [i_0] [i_18] [i_18] [i_0]))))));
                arr_83 [i_0 - 1] [i_0 - 1] [i_0] [i_22 - 1] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-46))));
            }
            for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                arr_87 [i_0] [i_0] [i_23] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)220)) <= (0))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))) : (var_7)));
                arr_88 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (4294967289U) : (0U)))) ? ((~(((/* implicit */int) (signed char)-39)))) : (((/* implicit */int) (signed char)102)));
                var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_66 [i_0] [i_0] [i_0])))));
                var_40 ^= ((/* implicit */unsigned short) min((min((arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_18 - 1]), (((/* implicit */unsigned char) var_4)))), (((/* implicit */unsigned char) ((_Bool) ((unsigned char) var_15))))));
            }
        }
        var_41 += ((/* implicit */long long int) (~(((/* implicit */int) arr_75 [i_0] [(signed char)24] [(signed char)24] [(short)8]))));
    }
    var_42 = var_18;
}
