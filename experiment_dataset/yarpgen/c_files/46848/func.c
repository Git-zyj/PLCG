/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46848
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
    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_3)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)117);
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] |= ((/* implicit */unsigned long long int) (-(arr_4 [i_1 - 1] [i_1])));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_9 [i_1] |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)97)) - (((/* implicit */int) arr_3 [i_2])))));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_4 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 13; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)97)))) & (((/* implicit */int) (unsigned char)158))));
                        var_15 = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        }
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)97))));
        arr_14 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)126)))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        arr_24 [i_1] [i_1 - 3] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) var_5);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-51))) ? (arr_4 [i_5 + 2] [i_7 + 1]) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))));
                    }
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)125)) <= (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [(signed char)12] [i_6] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_16 [i_9])))) ? ((-(((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) ((unsigned char) (signed char)-73))))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)158)))) >> (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [(unsigned char)12] [i_8])) : (((/* implicit */int) (unsigned char)153)))))))));
                            var_21 = ((/* implicit */long long int) var_7);
                        }
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                        {
                            var_22 = arr_19 [i_10] [i_1 - 2];
                            var_23 ^= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_12 [i_1] [i_5] [i_6 - 4] [i_6]))))));
                        }
                    }
                    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            arr_42 [i_11 + 1] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_18 [i_11] [i_12] [(unsigned char)2]))));
            var_26 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_41 [i_11] [i_11]))))));
            arr_43 [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(-4087036794325784265LL)))) - (arr_20 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_14])) % ((-(((/* implicit */int) (unsigned char)126)))))))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_11] [i_11 + 1] [i_13] [i_14])) ? (((/* implicit */int) arr_11 [i_11] [i_11 + 1] [i_13] [i_14])) : (((/* implicit */int) arr_11 [i_11] [i_11 + 1] [i_13] [i_14]))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_11 + 1] [i_11 + 1] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_33 [5LL] [i_12] [i_13] [(unsigned char)2] [i_12]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (unsigned char i_17 = 4; i_17 < 9; i_17 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) arr_36 [i_15]);
                        var_31 = ((/* implicit */unsigned char) (+(var_1)));
                        var_32 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) + (((17798877466205903298ULL) << (((((/* implicit */int) (signed char)-49)) + (93)))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11] [i_11] [i_11] [i_11] [i_11 + 1])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)255)))))))));
        }
        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
        {
            arr_59 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_18] [i_18] [i_11] [i_18])) : (((/* implicit */int) var_7))))) ? (-1LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_11] [i_18] [i_11] [i_18])))))));
            arr_60 [i_11] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned char) (!(var_0)));
            /* LoopSeq 3 */
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                arr_63 [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_35 [i_18] [i_19]))));
                var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(17855457511575244049ULL))))));
            }
            for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
            {
                arr_67 [i_11] [i_11] [i_11] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)208)) & (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))) > (-7519537735871191850LL)));
                            var_36 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_32 [i_11 + 1] [i_11] [i_11] [i_11] [i_11 + 1])) ? (var_1) : (var_1)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_24 = 2; i_24 < 7; i_24 += 3) 
                {
                    for (signed char i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        {
                            arr_81 [i_24] [i_18] [i_24] [i_18] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2976473262214502802ULL)) ? (((long long int) (unsigned char)0)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) > (var_9)))))));
                            arr_82 [i_11] [(signed char)4] [i_11] [i_24] [i_11] &= ((/* implicit */unsigned char) ((_Bool) 4181342916222317222LL));
                        }
                    } 
                } 
                arr_83 [i_11] [i_11] [i_18] [i_11] = ((/* implicit */_Bool) (~(523807484861196823LL)));
                arr_84 [i_11 + 1] = ((/* implicit */unsigned char) arr_1 [i_11]);
                var_37 &= ((/* implicit */signed char) (unsigned char)126);
            }
        }
        arr_85 [i_11] [i_11 + 1] = arr_70 [(signed char)0] [i_11];
    }
    /* LoopNest 2 */
    for (unsigned char i_26 = 0; i_26 < 19; i_26 += 1) 
    {
        for (signed char i_27 = 0; i_27 < 19; i_27 += 2) 
        {
            {
                var_38 = arr_91 [i_26] [14ULL] [17U];
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(2464236175U)))))))))));
                arr_92 [i_27] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_26])) ? (var_9) : (((/* implicit */unsigned long long int) arr_90 [i_26])))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (max((((/* implicit */unsigned char) var_7)), (var_4))))))) != (var_9))))));
}
