/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218218
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (497320571U)));
        var_19 = ((/* implicit */short) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = 2704980643360731243LL;
            var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) arr_4 [i_0]))));
        }
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_22 &= ((/* implicit */unsigned int) arr_6 [(short)8] [i_2] [(short)8]);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(7746591890715814648ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            arr_7 [i_0] [i_2] [i_2] |= (+(((/* implicit */int) arr_4 [i_0])));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned int) arr_4 [i_3 - 1])))));
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    for (short i_6 = 4; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [4U]))))));
                            var_26 = arr_14 [i_0] [i_0] [i_6];
                            var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_3 - 1]))));
                            var_28 = ((/* implicit */long long int) (!(arr_1 [i_3 - 1])));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(unsigned char)4] [9])) >> (((/* implicit */int) var_9))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [7LL])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_3 - 1])))));
            }
            var_32 = ((/* implicit */unsigned short) arr_2 [i_0]);
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_8 - 1] [i_8 - 1]))));
            var_33 = ((/* implicit */unsigned char) arr_0 [i_0]);
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                for (unsigned int i_10 = 4; i_10 < 16; i_10 += 3) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [6ULL] [i_0])) ? (((/* implicit */int) arr_19 [1U] [3ULL])) : (((/* implicit */int) var_4))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_8 - 1] [i_9] [i_10 - 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111))))) : (((/* implicit */int) (signed char)108))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (signed char i_12 = 4; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_35 = arr_10 [i_0] [i_0] [(signed char)1] [i_0];
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_12 + 1] [i_8 - 1] [i_8 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_12 + 1] [i_8 - 1] [i_12 + 1] [i_8 - 1]))) : (var_1)));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */int) var_2);
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (!(((/* implicit */_Bool) (-(-1)))))))));
            var_39 = ((((/* implicit */_Bool) arr_33 [i_0] [9U] [(short)15] [16ULL] [i_13])) ? (((/* implicit */int) arr_33 [i_0] [16LL] [(unsigned char)11] [i_13] [(unsigned char)11])) : (((/* implicit */int) arr_33 [i_0] [i_13] [i_0] [i_13] [15U])));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_16 [i_0] [i_13])));
            var_41 = (~(((/* implicit */int) arr_14 [i_0] [i_13] [i_13])));
            var_42 |= ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_13] [i_13] [i_13])));
        }
    }
    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned char) ((_Bool) (+(arr_15 [i_14] [12] [i_14] [i_14] [i_14]))));
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_44 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)1486)))))))));
            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_14]) ? (((/* implicit */int) arr_1 [i_14])) : (((/* implicit */int) arr_1 [i_15]))))) ? (arr_24 [i_14] [i_14] [i_14] [5LL]) : (((/* implicit */int) var_13))));
            var_46 = ((/* implicit */_Bool) arr_42 [3U]);
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_14])) < (((arr_24 [i_14] [i_14] [(_Bool)1] [i_14]) - (arr_24 [i_14] [i_14] [i_14] [i_14])))));
            var_48 = ((/* implicit */long long int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [13ULL]))) % (arr_27 [i_14] [(short)12] [i_14] [5] [i_14]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_14])) < (((/* implicit */int) ((((/* implicit */_Bool) 21U)) || (((/* implicit */_Bool) arr_31 [1U] [i_14] [i_14] [(_Bool)1])))))))))));
        }
        for (unsigned char i_16 = 1; i_16 < 16; i_16 += 2) 
        {
            var_49 += ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_27 [(signed char)4] [(unsigned char)15] [(short)15] [(signed char)4] [i_14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) <= (((/* implicit */long long int) ((/* implicit */int) (short)30720))))))) : ((-(var_6)))))));
            var_50 = ((/* implicit */unsigned int) arr_8 [i_16 - 1]);
        }
        var_51 = ((/* implicit */unsigned char) arr_45 [i_14]);
        var_52 = arr_46 [i_14] [i_14] [i_14];
        var_53 = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_14]))) : (arr_20 [i_14]))))));
    }
    for (signed char i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(var_0))))));
        var_55 = ((/* implicit */short) ((arr_5 [i_17] [(_Bool)1] [6U]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_17] [i_17] [(short)13] [(short)13])) ? (((/* implicit */int) arr_0 [i_17])) : (((/* implicit */int) arr_1 [i_17]))))) : (((((/* implicit */_Bool) arr_36 [i_17])) ? (arr_42 [i_17]) : (((/* implicit */unsigned long long int) max((1073741823LL), (((/* implicit */long long int) arr_3 [i_17] [i_17])))))))));
    }
    for (short i_18 = 0; i_18 < 16; i_18 += 1) 
    {
        arr_51 [i_18] = ((/* implicit */int) arr_18 [i_18] [i_18]);
        var_56 += ((/* implicit */long long int) arr_22 [i_18] [i_18]);
    }
    var_57 = var_16;
    var_58 = ((/* implicit */unsigned long long int) var_14);
}
