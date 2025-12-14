/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211452
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0]));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) arr_9 [i_1] [i_1]);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)32)) : (1153959210)));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15213155111865908926ULL)) ? (86973558) : (((/* implicit */int) (unsigned char)223))))) ? ((-(-1153959210))) : (((/* implicit */int) (signed char)48))));
            var_21 = ((/* implicit */int) (unsigned char)221);
        }
        var_22 = ((/* implicit */int) ((arr_7 [6ULL] [6ULL]) <= (arr_7 [(unsigned char)16] [i_0])));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_13 [8ULL] [i_0] [i_4] |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((1153959198) & (((/* implicit */int) var_16))))));
            arr_14 [i_4] = ((/* implicit */unsigned long long int) var_7);
            arr_15 [i_4] [i_4] = ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */int) (short)9325)) : (((/* implicit */int) (unsigned char)8)));
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */long long int) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))));
            arr_19 [i_0] [i_5] &= ((/* implicit */unsigned long long int) var_13);
        }
    }
    var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) min((var_5), (3649195126488187466ULL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) (unsigned char)240);
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */short) (-(var_7)));
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    arr_30 [i_6] [i_6] [i_8 - 1] [(unsigned char)4] [i_9] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [2ULL] [i_8 + 2] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2780)) >> (((arr_21 [i_6]) - (8392267380753757114ULL)))))) : (var_3)));
                    arr_31 [i_6] [i_7] = arr_0 [i_8 - 1];
                }
                var_26 = ((/* implicit */unsigned long long int) var_16);
                arr_32 [i_6] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)15);
            }
            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                arr_36 [i_10] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)241)) != (2147483645)));
                arr_37 [i_10] [i_6] [i_6 + 1] = ((/* implicit */short) var_1);
                var_27 = ((/* implicit */int) (unsigned char)128);
            }
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (((((/* implicit */_Bool) arr_6 [i_7] [i_6] [(short)17] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_7]))) : (arr_8 [i_6] [i_7] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            var_29 = ((/* implicit */unsigned long long int) (signed char)124);
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (long long int i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */short) var_16);
                        arr_43 [i_6] [11LL] [i_6] [i_6] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned char)213)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_41 [i_12 - 1] [i_11] [i_6] [i_7] [2ULL])) ? (15934700306429367937ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (15934700306429367911ULL)))));
                    }
                } 
            } 
        }
        for (short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
        {
            var_31 |= ((/* implicit */unsigned long long int) ((int) arr_16 [i_6] [i_6 + 3] [i_13]));
            arr_46 [i_6] = ((/* implicit */signed char) 10291357823001826346ULL);
        }
        for (short i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_4))))));
            var_33 = ((unsigned long long int) arr_16 [i_14] [(unsigned char)11] [i_6]);
        }
        /* LoopSeq 1 */
        for (signed char i_15 = 1; i_15 < 9; i_15 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32742)) >= (((/* implicit */int) arr_50 [i_6 + 2]))));
            arr_51 [i_15] [i_6] [i_6] = ((/* implicit */signed char) ((((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26696))))) ? (((/* implicit */int) arr_27 [i_15] [i_6] [2ULL])) : (((int) arr_6 [i_6 + 1] [i_6] [i_15 + 2] [i_15 + 3]))));
            arr_52 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_15] [i_15]))))))));
        }
        var_35 = ((((/* implicit */_Bool) arr_21 [i_6 - 1])) ? (arr_21 [i_6 - 1]) : (arr_21 [i_6]));
    }
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 15; i_16 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_16 - 1]))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [6ULL] [6ULL])) >= (((/* implicit */int) arr_0 [i_16])))))) : (arr_17 [i_16 + 1])));
    }
    for (signed char i_17 = 2; i_17 < 15; i_17 += 1) /* same iter space */
    {
        arr_58 [i_17] = ((/* implicit */long long int) (short)252);
        /* LoopSeq 2 */
        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_17 - 1] [i_17 - 2] [i_17 + 1])) ? (((/* implicit */unsigned long long int) -2567395362970113205LL)) : (arr_3 [i_17 - 2] [i_17 - 2] [i_17 - 2])))));
            arr_61 [i_17] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (arr_16 [i_17] [i_17] [i_18])))), (((unsigned long long int) var_13))))));
        }
        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (15934700306429367937ULL) : (arr_8 [i_17 + 1] [i_19] [i_19] [i_17])))), (((/* implicit */long long int) ((((/* implicit */int) arr_59 [i_17 - 1] [i_17] [i_17])) + (((/* implicit */int) arr_59 [i_17 - 2] [i_17] [i_17])))))));
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((17799128605897392444ULL) == (((((/* implicit */_Bool) var_11)) ? (72055395014672384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748))))))))) - ((~(2199022731264ULL)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 1) 
        {
            var_41 = ((/* implicit */short) ((((unsigned long long int) var_4)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
            var_42 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_17] [i_17 - 2]))) / (var_8)));
            arr_69 [i_17] [i_20] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_53 [i_17 - 2]))));
            var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-2567395362970113206LL) & (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_20]))))))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            var_44 = (+(((/* implicit */int) (unsigned char)221)));
            arr_74 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned long long int) -3229459769691876354LL)) : (34359721984ULL)));
            arr_75 [i_17] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)123)) - (((/* implicit */int) var_9))))) > (((((/* implicit */_Bool) var_6)) ? (-2567395362970113209LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        }
    }
    var_45 = ((/* implicit */unsigned long long int) (unsigned char)15);
}
