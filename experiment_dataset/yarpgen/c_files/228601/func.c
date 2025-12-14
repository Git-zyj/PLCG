/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228601
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) var_3))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                arr_16 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) arr_10 [i_2 + 1]))))));
                arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_10)) + (64))))) | (((/* implicit */int) arr_13 [i_1 + 1]))));
            }
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_13))));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_16 += ((/* implicit */unsigned short) ((var_4) == ((+(((/* implicit */int) arr_12 [i_5] [i_4]))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_6])) <= (((((/* implicit */int) (signed char)88)) % (((/* implicit */int) var_8)))))))));
                    arr_25 [i_1] [i_4] [i_5] [i_6] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3097712413U)) >= (18156937843041825353ULL)));
                    arr_26 [i_1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_1]))));
                }
                arr_27 [i_1 - 1] [i_1] [i_5] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_8 [i_1]))))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    var_18 = (~(((/* implicit */int) arr_8 [i_1])));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(var_1))))));
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            arr_36 [i_10] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (signed char)2);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (var_4)))) ? (((((/* implicit */int) arr_15 [i_4] [i_4])) % (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_13))))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_21 = (-(((/* implicit */int) arr_1 [i_1 + 2])));
                arr_41 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
            }
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                arr_46 [i_1 + 1] [i_4] [i_4] [i_12] &= ((/* implicit */signed char) (+((~(var_1)))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54)))))));
                            var_23 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 17404890106714150705ULL)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)10))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)127)) * (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)54))));
                    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_1]))));
                }
                arr_54 [i_1 - 1] [i_1 - 1] [i_12] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)39)) + (((/* implicit */int) (unsigned short)20025)))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-38))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 2; i_18 < 17; i_18 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-97)) ? (263559620U) : (((/* implicit */unsigned int) var_4))));
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_16])) ? (((/* implicit */int) (signed char)-73)) : (-2144242127)));
                            arr_63 [i_1] [i_4] [i_1] [i_1] [i_17] [i_18] = ((/* implicit */unsigned short) (+(arr_14 [i_1])));
                            arr_64 [i_1] [i_17] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)118)) == (((/* implicit */int) (_Bool)0))));
                            var_29 += ((/* implicit */unsigned short) ((unsigned int) ((var_7) >> (((((/* implicit */int) arr_37 [i_18 + 2] [i_16] [i_16] [i_1])) - (45278))))));
                        }
                        var_30 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)0))));
                        var_31 &= ((/* implicit */unsigned short) ((unsigned int) ((_Bool) arr_4 [i_4])));
                        var_32 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_10 [i_1])))) ^ (((/* implicit */int) var_2))));
                        var_33 += ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_16]));
                    }
                } 
            } 
            arr_65 [i_1] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_1 + 1] [i_19] [i_19] [i_1 + 1])))))));
            arr_68 [i_1] [i_1] = var_3;
            arr_69 [i_1] [i_1] [i_19] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_47 [i_1] [i_19] [i_19] [i_19]))))));
            arr_70 [i_19] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))));
            /* LoopSeq 2 */
            for (signed char i_20 = 1; i_20 < 18; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_21 = 2; i_21 < 19; i_21 += 2) 
                {
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_21 - 2] [(_Bool)1] [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1]))) == (arr_66 [i_1] [i_19] [i_19])))) : (((/* implicit */int) arr_34 [i_20] [i_20 + 2] [i_20 + 1] [i_20] [i_1]))));
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                }
                var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)4279))));
                var_38 = (!(((/* implicit */_Bool) var_8)));
                arr_76 [i_1] [i_19] [i_1] = ((/* implicit */short) (signed char)62);
                /* LoopNest 2 */
                for (unsigned int i_22 = 3; i_22 < 18; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) (~(((unsigned int) var_11))));
                            var_40 ^= ((/* implicit */unsigned short) (((+(((/* implicit */int) (signed char)-110)))) + (((/* implicit */int) var_3))));
                        }
                    } 
                } 
            }
            for (signed char i_24 = 1; i_24 < 18; i_24 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */signed char) (-(arr_14 [i_1])));
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_0))));
                var_43 = ((/* implicit */unsigned int) (signed char)3);
            }
        }
        for (unsigned int i_25 = 0; i_25 < 20; i_25 += 1) 
        {
            arr_86 [i_1] [i_25] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (signed char)104)));
            var_44 = ((/* implicit */short) arr_37 [i_25] [i_25] [i_1] [i_25]);
            var_45 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned int i_26 = 0; i_26 < 20; i_26 += 1) 
            {
                arr_89 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_53 [i_1 - 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_39 [i_1 + 2])))) >= (((/* implicit */int) (_Bool)0))));
                var_46 ^= ((/* implicit */unsigned int) ((unsigned long long int) arr_83 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 2]));
            }
            for (unsigned short i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_55 [i_1]))));
                var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1])) || (((/* implicit */_Bool) var_5))));
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9201))) : (0ULL))) / (((/* implicit */unsigned long long int) arr_87 [i_1] [i_27])))))));
                var_50 = ((/* implicit */unsigned long long int) arr_53 [i_1] [i_1] [i_1] [i_1]);
            }
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (16U))))) & (((((/* implicit */_Bool) (short)-9202)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        }
        arr_93 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (7689156790553380921ULL) : (((/* implicit */unsigned long long int) var_14))))));
        arr_94 [i_1] = ((/* implicit */unsigned int) ((3340468656370025399ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9202)))));
        var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_1] [(unsigned short)10])))))));
    }
    var_53 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), ((+(((((/* implicit */int) var_9)) / (((/* implicit */int) var_2))))))));
    var_54 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)224)))));
}
