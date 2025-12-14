/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200572
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1764669475U)) ? (536870912U) : (18U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((2509862641U), (0U)))) || (((/* implicit */_Bool) 1764669475U))))))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) min(((signed char)12), ((signed char)-17)))), ((+((-(((/* implicit */int) var_3))))))));
        }
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) arr_8 [i_0] [(signed char)18] [i_0]);
            arr_11 [22U] [i_2] [i_2] = ((/* implicit */signed char) var_10);
            arr_12 [(signed char)24] [i_2] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)126)), (9U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_2 - 1])))) : ((-(0U))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_15 = ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            arr_23 [(signed char)23] [(signed char)23] [i_3] [i_5] [i_6] = ((signed char) var_10);
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_20 [i_6] [i_0] [i_0] [i_4 + 2])))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((arr_16 [i_0] [i_0]) > (arr_16 [i_0] [i_0]))))));
                            var_18 = ((/* implicit */signed char) ((unsigned int) (signed char)59));
                            var_19 = ((/* implicit */unsigned int) max((var_19), ((~(arr_18 [i_3 + 3] [i_0] [i_3 + 2])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_5))));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                            arr_36 [i_0] [i_7] [i_8] [i_7] [i_10] = var_8;
                        }
                    } 
                } 
            } 
            arr_37 [i_7] = var_3;
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) (signed char)-72)) ? (((unsigned int) ((1811130798U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))))) : (((2601061902U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))))));
            arr_40 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_2), (arr_30 [(signed char)9] [i_11] [i_11] [i_11] [(signed char)13] [i_11])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_34 [i_11] [i_11] [(signed char)19] [i_0] [i_0]), (arr_13 [i_0] [i_11] [i_11])))))))));
            var_22 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) var_8))))) ^ ((~(((/* implicit */int) var_3))))));
            arr_41 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3942149140U))))) << (((arr_7 [i_0] [(signed char)16]) - (1889769184U)))));
        }
        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_13 = 2; i_13 < 23; i_13 += 4) 
            {
                var_23 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (signed char)-35)))));
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 2458477468U)) ? (32768U) : (1866715095U)));
            }
            /* LoopSeq 4 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
            {
                arr_49 [i_12] = var_13;
                var_25 &= var_10;
            }
            for (signed char i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
            {
                arr_54 [i_15] [i_12] [i_0] = var_13;
                arr_55 [i_0] [i_12] [i_12] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 486009108U))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_39 [i_0] [(signed char)10] [i_15]), (14U)))) && (((var_7) < (var_10))))))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned int) var_8)))));
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    var_28 *= ((/* implicit */unsigned int) var_4);
                    var_29 = ((/* implicit */unsigned int) max((min((((/* implicit */int) (signed char)-1)), ((+(((/* implicit */int) (signed char)-13)))))), (((/* implicit */int) ((signed char) (-(arr_8 [1U] [i_12] [i_16])))))));
                }
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    arr_67 [i_12] [i_12] = ((/* implicit */unsigned int) arr_61 [i_12] [i_16] [i_12] [i_12]);
                    arr_68 [(signed char)18] [(signed char)18] [(signed char)18] [(signed char)0] [i_12] [(signed char)12] = ((signed char) ((((/* implicit */_Bool) var_8)) ? (max((1406706765U), (((/* implicit */unsigned int) (signed char)52)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-82), ((signed char)-17)))))));
                    var_30 &= (~(4194304U));
                    arr_69 [i_16] &= ((/* implicit */signed char) ((((((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))) % (min((2570616602U), (((/* implicit */unsigned int) (signed char)-34)))))) >> (((((/* implicit */int) arr_47 [i_18] [i_0] [i_16] [i_18])) + (29)))));
                    arr_70 [i_12] [i_12] [i_16] [i_12] [i_18] [i_18] = var_8;
                }
                var_31 = ((signed char) ((((/* implicit */_Bool) 1345474828U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_12]))) : (2525103844U)));
            }
            for (signed char i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
            {
                arr_74 [i_0] [i_12] = var_6;
                arr_75 [i_12] [i_19] = ((/* implicit */signed char) var_10);
                arr_76 [i_19] [i_12] [i_0] [i_0] &= (+(((unsigned int) (signed char)23)));
            }
            arr_77 [i_0] [i_12] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((signed char) (signed char)-108)))))));
            var_32 = ((/* implicit */unsigned int) var_4);
        }
        for (signed char i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) (~(min(((+(var_10))), (((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [(signed char)10] [i_0] [(signed char)10] [i_20]))))));
            var_34 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((3737486355U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_6), (var_13)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) >= (1811130802U))))))));
            arr_80 [i_20] = min((((unsigned int) 1266630963U)), (((/* implicit */unsigned int) ((var_7) != (max((arr_42 [i_20]), (var_10)))))));
            arr_81 [i_0] [i_0] [6U] = ((1994596897U) % (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((/* implicit */int) var_2))))));
        }
        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (1661928114U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_0] [i_0] [11U])) <= (((/* implicit */int) var_9))))))));
    }
    var_36 *= ((/* implicit */unsigned int) var_0);
    var_37 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)35))));
    var_38 = var_12;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_21 = 3; i_21 < 16; i_21 += 4) 
    {
        var_39 = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        for (signed char i_22 = 3; i_22 < 17; i_22 += 4) 
        {
            arr_88 [i_21] = ((/* implicit */unsigned int) var_0);
            arr_89 [i_21] [i_21] = ((/* implicit */unsigned int) ((signed char) arr_3 [i_21] [i_21] [1U]));
            arr_90 [i_21 + 2] [i_21] = var_12;
            arr_91 [i_21] [i_22 + 1] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [(signed char)11] [(signed char)4] [i_21 - 2] [i_21] [i_21] [i_21 - 1]))));
        }
    }
}
