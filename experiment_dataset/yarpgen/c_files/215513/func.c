/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215513
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) arr_2 [i_0]));
        var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)236)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) arr_2 [12])))) : (((/* implicit */int) ((unsigned short) arr_1 [(_Bool)1]))))) : (((/* implicit */int) ((short) (~(var_8)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) var_2);
            /* LoopSeq 4 */
            for (short i_2 = 3; i_2 < 21; i_2 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_2 [i_0]))))))), (((unsigned int) max(((unsigned char)139), (((/* implicit */unsigned char) var_10)))))));
                var_15 *= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) var_0)) : (4)))) ? (((((/* implicit */int) arr_2 [i_1])) + (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) max(((short)14154), (((/* implicit */short) var_4)))))));
                arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_2 - 3] [i_0])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
            }
            for (short i_3 = 3; i_3 < 21; i_3 += 4) /* same iter space */
            {
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) (unsigned short)65525);
                var_16 = ((/* implicit */unsigned long long int) arr_4 [16] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_17 [(signed char)9] [i_0] [i_1] [i_0] [i_4] [(unsigned char)18] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -99778441)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_14 [i_0] [16U] [i_4] [i_5 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) 12)) == (var_9))))));
                            arr_18 [i_0] [i_0] [i_0] [1U] [1U] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [(unsigned char)15] [i_4] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-9974)))), (((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_15 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [2U]);
                            arr_26 [i_0] [i_0] [10LL] [i_6] [i_0] = ((/* implicit */_Bool) var_10);
                            var_18 -= ((/* implicit */signed char) (unsigned char)118);
                        }
                    } 
                } 
            }
            for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_29 [i_0] [i_1] [(unsigned short)2] [i_8] = ((/* implicit */unsigned short) var_7);
                arr_30 [i_0] = ((/* implicit */unsigned char) max((var_7), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_10))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24956))))))))));
                var_19 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_5))))));
                var_20 -= ((/* implicit */_Bool) (short)-24960);
                arr_31 [i_0] [i_1] [i_0] [i_0] = (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_8])));
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) (unsigned char)131);
                /* LoopSeq 4 */
                for (signed char i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) (short)-24972);
                        arr_40 [(short)6] [i_9] [i_10] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1935954654), (((/* implicit */int) (unsigned char)149))))) ? (max((((/* implicit */long long int) var_10)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((unsigned char)118), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 654758600)) ? (((/* implicit */int) arr_39 [i_1] [i_1] [i_9])) : (((/* implicit */int) arr_39 [i_1] [i_9] [(_Bool)1]))))), ((+(var_7)))))));
                        var_24 = ((/* implicit */long long int) var_2);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_36 [(_Bool)1] [(_Bool)1] [i_9] [i_10] [i_11]))));
                    }
                    for (long long int i_12 = 3; i_12 < 19; i_12 += 3) 
                    {
                        var_26 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (-3234363222701795706LL)));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))) >> (((((/* implicit */int) (unsigned char)22)) % (((/* implicit */int) (unsigned char)223))))));
                    }
                    for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_0] [i_10] [i_13 + 1]))))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_28 [i_0] [i_0] [(unsigned char)12])))))));
                        var_29 -= ((/* implicit */unsigned char) (short)-24958);
                        var_30 = (unsigned char)151;
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((((/* implicit */int) arr_33 [i_0] [i_0] [21LL] [i_13 - 2])) >> (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_13] [i_10] [i_1] [i_0])) : (((/* implicit */int) var_1)))))))))));
                    }
                    var_32 = arr_39 [i_0] [(short)4] [i_9];
                    arr_47 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) var_1);
                    var_33 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-24976)) ? (arr_10 [i_1] [i_0]) : (arr_10 [i_0] [i_1]))), (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (arr_10 [i_1] [i_1])))));
                }
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    var_34 -= ((/* implicit */signed char) var_8);
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) var_3))));
                    arr_50 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_6 [i_0] [i_9] [i_0])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0])))))));
                    arr_51 [i_0] [i_0] [i_9] [i_14] = ((/* implicit */unsigned char) var_10);
                }
                for (signed char i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    var_36 = min((((/* implicit */unsigned char) arr_11 [i_0] [(short)14])), (min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_1] [i_9] [i_15] [i_9]))));
                    arr_54 [(unsigned short)20] [i_0] [(signed char)1] [(signed char)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_0]))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-81)) ? (5) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_10))))) : (max((((/* implicit */long long int) var_5)), (arr_19 [i_0] [i_1] [i_1] [i_9] [i_9])))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_15])) ? (((((/* implicit */_Bool) (unsigned char)229)) ? (((22ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (-(654758598)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36311))))) ? (((/* implicit */int) arr_37 [i_0] [i_1])) : ((-(((/* implicit */int) var_4)))))))));
                    arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                }
                for (signed char i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                {
                    arr_58 [(signed char)9] [(signed char)9] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)24964), (((/* implicit */short) (_Bool)1))))) & (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_0 [(signed char)19] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_9] [i_9])))))))));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_44 [i_0] [i_0] [(unsigned char)4] [i_0] [i_16]))) ? (arr_48 [i_0] [i_0] [(unsigned short)18] [i_0] [i_16]) : (((/* implicit */unsigned int) ((((-6) + (2147483647))) >> (((var_9) - (1562082728413388016LL))))))))) ? (18446744073709551585ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-6)))))));
                }
            }
        }
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_39 *= ((/* implicit */short) (-(((/* implicit */int) var_10))));
                        /* LoopSeq 3 */
                        for (unsigned char i_20 = 1; i_20 < 19; i_20 += 4) 
                        {
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) var_1))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_0] [(unsigned char)13]))))) ? ((~(((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [(unsigned char)17] [i_20 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536854528)))))));
                        }
                        /* vectorizable */
                        for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-24955))))) ? (((/* implicit */int) arr_20 [(_Bool)1] [i_19] [i_18])) : (((/* implicit */int) var_3))));
                            var_43 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13053))) : (var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [i_17] [i_18] [i_17])))));
                            var_44 -= ((/* implicit */unsigned int) ((long long int) 4685399713061518479LL));
                        }
                        /* vectorizable */
                        for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            arr_76 [i_0] [i_0] [i_18] [i_19] [i_22] [19U] = ((/* implicit */signed char) var_6);
                            arr_77 [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)5)) / (((/* implicit */int) (signed char)-104))));
                        }
                    }
                } 
            } 
            var_45 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
    }
    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
    {
        var_46 = ((/* implicit */short) var_6);
        arr_80 [i_23] [i_23] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (max((1423576538U), (((/* implicit */unsigned int) arr_78 [i_23] [i_23])))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-11)) <= (((/* implicit */int) (short)21473)))))));
        arr_81 [i_23] = (unsigned char)230;
        var_47 *= ((/* implicit */signed char) arr_78 [(_Bool)1] [i_23]);
        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (signed char)48))));
    }
}
