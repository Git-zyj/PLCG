/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218364
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) ((((((/* implicit */int) var_10)) <= (arr_2 [i_1]))) ? (((/* implicit */int) max(((signed char)-94), ((signed char)109)))) : (((/* implicit */int) arr_1 [i_0]))));
            var_17 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) min(((short)331), (((/* implicit */short) (signed char)-119))))), (arr_1 [i_1])))) : (((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)93)), (arr_0 [i_0] [i_1]))))))));
            var_19 = (((-(max((-6573861727601022449LL), (((/* implicit */long long int) (signed char)-95)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(var_11)))) : (arr_2 [i_0])))));
            /* LoopSeq 4 */
            for (short i_2 = 4; i_2 < 7; i_2 += 4) /* same iter space */
            {
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) var_3));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 4] [i_2 - 3])) - (((((/* implicit */int) var_8)) - (((/* implicit */int) (signed char)-18)))))) + (((/* implicit */int) arr_3 [i_0] [i_0]))));
            }
            for (short i_3 = 4; i_3 < 7; i_3 += 4) /* same iter space */
            {
                arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (((-(15940340246752595867ULL))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_3 + 3] [i_1] [i_3 - 2])), (var_6))))));
                var_21 = ((/* implicit */signed char) ((unsigned long long int) ((arr_7 [i_3 + 2] [i_3] [i_3 - 3] [i_3 + 2]) == (arr_7 [i_1] [i_1] [i_3 - 3] [i_3 + 1]))));
                var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (var_7)))), (min((var_2), (((/* implicit */int) arr_9 [i_0] [i_1] [i_3 + 2])))))) <= (((/* implicit */int) (unsigned short)21957))));
                var_23 = ((/* implicit */short) min((-1872812911), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)116))))));
                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_3 + 3])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3 + 3])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_3 + 2] [i_3 + 3])))) >= (((/* implicit */int) min((arr_6 [i_3 - 1] [i_3] [i_3 - 4] [i_0]), (arr_6 [i_3 - 1] [i_3 - 4] [i_3 - 4] [i_0]))))));
            }
            for (short i_4 = 4; i_4 < 7; i_4 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) arr_17 [i_4] [i_1] [i_0]);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (-1962898125))), (((((/* implicit */_Bool) ((-1962898125) / (var_6)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_4] [i_5])) ? (((/* implicit */int) arr_11 [i_5] [i_1] [i_0])) : (((/* implicit */int) var_11)))) : (((-1087780772) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_5]))))))));
                    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4 - 4])) & (min((-394370015), (((/* implicit */int) (unsigned char)14)))))), (((((arr_7 [i_4 - 3] [i_4 - 3] [i_0] [i_0]) < (((/* implicit */int) (unsigned short)32374)))) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)53068))))));
                    arr_21 [i_0] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)-103)), ((unsigned short)12469)));
                }
            }
            for (int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                arr_26 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_5 [i_0]))))) ? (var_5) : (((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */int) arr_8 [i_0] [i_0] [i_6])))))));
                var_28 = ((/* implicit */short) arr_2 [i_6]);
            }
        }
        var_29 = min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_0] [i_0] [i_0]))));
        var_30 = ((min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_0] [i_0] [i_0] [i_0])))), (max((((/* implicit */long long int) (unsigned char)92)), (var_14))))) <= (max((min((((/* implicit */long long int) 394370042)), (8302039108205132532LL))), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                arr_37 [i_0] [i_7] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-26833))));
                                var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_29 [i_9] [i_9]))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) max((min((arr_2 [i_7]), (arr_2 [i_0]))), (((/* implicit */int) arr_27 [i_7] [i_7] [i_0]))));
                    var_33 = var_13;
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        var_34 = ((/* implicit */_Bool) var_9);
        arr_42 [i_11] = ((/* implicit */_Bool) (~(arr_41 [i_11])));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (unsigned char i_13 = 4; i_13 < 24; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        for (signed char i_15 = 2; i_15 < 22; i_15 += 3) 
                        {
                            {
                                var_35 = arr_38 [i_15 + 3] [i_13 + 1];
                                var_36 = (+((-(14626446156124092875ULL))));
                                arr_52 [i_15 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_43 [i_13 - 2] [i_13 + 1] [i_13 - 4]))));
                                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((1962898108) % (arr_50 [i_11] [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */int) ((unsigned long long int) arr_48 [i_13 + 1] [i_13] [i_13 - 3] [i_13] [i_13 - 3]));
                }
            } 
        } 
        var_39 = ((/* implicit */unsigned int) var_1);
    }
    var_40 = ((/* implicit */unsigned char) var_15);
    var_41 = ((/* implicit */short) (unsigned char)84);
}
