/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3102
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) max((var_4), (((/* implicit */unsigned short) arr_7 [i_0]))))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_2 [i_1] [i_0] [i_1 - 2]))), (((long long int) ((var_12) ? (var_11) : (((/* implicit */int) (_Bool)1))))))))));
                        arr_9 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 14595675924170016616ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32760)))), (((/* implicit */int) ((unsigned short) var_3)))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-3286), ((short)3289)))) ? (min((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (var_10)))), (max((var_1), (((/* implicit */unsigned int) (unsigned short)32760)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_18 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 - 2])) ? (var_9) : (((/* implicit */int) (signed char)-106))))));
                var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)32769)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
            }
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((min((((/* implicit */long long int) (signed char)-49)), (-7372491970973757301LL))), (max((((/* implicit */long long int) arr_2 [i_0] [i_0] [14LL])), (var_6))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */int) (unsigned short)22239)), (arr_4 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 13; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) ((signed char) 26U));
                        arr_26 [i_8] [i_6 - 2] = ((/* implicit */unsigned int) ((signed char) (unsigned short)32772));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((var_14) ? (((/* implicit */int) (signed char)114)) : (9)));
        arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((long long int) arr_11 [i_5]));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */short) ((int) arr_6 [i_9] [i_9]));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) var_11)) : (arr_25 [i_9] [i_9] [i_9])))) : (((((/* implicit */_Bool) 1437467136U)) ? (((/* implicit */long long int) var_1)) : (var_6)))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned short) var_1)))));
    }
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
        {
            var_26 = ((/* implicit */unsigned int) ((int) arr_35 [i_11 - 1] [i_11 + 1] [i_11 - 1]));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_33 [i_10] [i_12])));
            var_29 = ((/* implicit */_Bool) ((int) (unsigned short)45149));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 4) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_14 - 1] [i_14 + 1] [i_10])) ? (arr_39 [i_14 + 1] [i_14 + 1] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 3; i_15 < 18; i_15 += 4) 
                {
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_39 [i_15 + 1] [i_10] [i_14 + 1]))))));
                    var_32 = ((int) arr_43 [i_14 - 2] [i_14 - 2] [i_14] [i_14 - 1] [i_14 + 1] [i_15 - 2]);
                }
            }
            arr_46 [i_13] = ((/* implicit */_Bool) ((unsigned long long int) arr_41 [i_13] [i_10]));
            /* LoopSeq 4 */
            for (short i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_39 [i_10] [i_13] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_45 [i_10] [i_13] [i_13] [i_16])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)255)))));
            }
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */_Bool) arr_36 [i_10] [i_13])) ? (var_0) : (((/* implicit */long long int) arr_48 [i_17]))))));
                arr_53 [i_10] [i_10] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) (unsigned short)6181)));
            }
            for (short i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_35 [i_10] [6LL] [i_18]) : (arr_35 [i_10] [i_13] [i_18]))))));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_10] [i_10] [14LL])) ? (3291060012U) : (((/* implicit */unsigned int) var_9))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_58 [i_10] [i_19] [i_13] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)24721)) : (((/* implicit */int) arr_32 [i_10]))));
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)1)) : (229501148)));
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_41 [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_13]))));
            }
            var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))) : (((unsigned int) 2432483398594264547LL))));
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_41 ^= min((((/* implicit */unsigned long long int) 0U)), (4398046511103ULL));
        var_42 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (9199314779623157755ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_32 [i_20])) : (((/* implicit */int) arr_32 [i_20])))))));
        arr_61 [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)15)), (var_11)))) ? (((/* implicit */int) ((signed char) ((signed char) arr_54 [i_20])))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_52 [i_20] [8U] [i_20] [i_20]))) ? (((/* implicit */int) ((unsigned char) (unsigned short)0))) : (((/* implicit */int) var_3))))));
    }
}
