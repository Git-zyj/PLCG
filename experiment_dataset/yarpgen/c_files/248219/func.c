/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248219
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 -= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (min((12859917163064251049ULL), (5586826910645300577ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
        var_11 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (5769190184874469986LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_8)));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) ((int) arr_0 [i_1]))), (5586826910645300567ULL)))))));
            var_13 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29935)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))), (((unsigned int) 830583503866906443ULL)))));
            var_14 = ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((long long int) 3035953807U))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (max((var_3), (((/* implicit */unsigned int) arr_5 [(signed char)7])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))))));
                            var_16 += ((/* implicit */signed char) ((unsigned long long int) ((signed char) arr_0 [i_3])));
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) ((int) (short)29931))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    arr_24 [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)18763)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 2]))) : (var_5)));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_1]));
                    }
                    var_20 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_23 [i_1] [i_6] [i_7]) : (((/* implicit */unsigned long long int) -2814642957386323635LL)))));
                    var_21 = ((/* implicit */signed char) ((unsigned int) (short)29931));
                }
                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_7] [i_6 + 3]));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((signed char) arr_17 [i_6 + 3])))));
            }
            arr_27 [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((unsigned int) arr_23 [i_1] [i_6] [i_1])));
        }
        arr_28 [i_1] = ((((/* implicit */_Bool) min((((unsigned long long int) -6647845721551259209LL)), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 6531849911598533625ULL)) ? (((/* implicit */int) (short)-29931)) : (((/* implicit */int) (signed char)46))))))) : (min((18014398375264256LL), (((/* implicit */long long int) var_5)))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((long long int) var_8)) : (arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_26 [i_1] [3LL] [9ULL] [(short)1] [0LL] [i_11])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_31 [i_1] [i_1] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((_Bool) (short)-13842)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) var_2));
                        arr_36 [i_1] [i_1] = ((/* implicit */int) ((signed char) (signed char)-11));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */int) ((unsigned long long int) (unsigned short)65521));
                            arr_39 [i_1] [i_10] [i_11] [i_13] [i_11] [i_1] = ((/* implicit */unsigned char) ((long long int) ((long long int) (short)29935)));
                        }
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_43 [i_1] [i_1] [10LL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)))) ? (((/* implicit */int) arr_9 [i_1] [i_11] [i_12] [i_14])) : (((/* implicit */int) var_8))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (0LL)));
                        }
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((short) arr_23 [i_12] [(signed char)9] [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -18014398375264257LL))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) var_1))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4097828521U)) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) (signed char)92))));
                        arr_47 [i_1] [(unsigned short)11] [i_1] [i_1] [i_15] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) arr_21 [i_1] [i_1] [i_10] [(unsigned char)9] [i_11])));
                        var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_11] [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31223))) : (arr_42 [i_1] [i_11] [i_15 - 1] [i_15 + 1] [i_15 + 2] [i_15 + 2])));
                    }
                    var_31 = ((/* implicit */long long int) ((short) ((unsigned int) (signed char)-125)));
                    arr_48 [i_1] [i_1] [(unsigned char)6] [i_1] = ((unsigned long long int) (unsigned short)9742);
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */short) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (signed char)126))))));
                        arr_53 [i_1] [i_10] [i_11] [i_1] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned int) ((signed char) var_8))), (((((/* implicit */_Bool) arr_40 [(unsigned char)6] [7ULL] [(signed char)5] [i_1] [i_11])) ? (var_1) : (((/* implicit */unsigned int) arr_8 [i_10] [i_10])))))));
                        var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) min((arr_16 [i_16]), (((/* implicit */signed char) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25121)) ? (((/* implicit */unsigned long long int) 722957392)) : (arr_31 [i_1] [i_16] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_16]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (var_0))))) : (min((((/* implicit */unsigned long long int) ((_Bool) arr_32 [i_1] [i_10] [i_11] [i_10]))), (((unsigned long long int) arr_25 [i_16] [i_16] [i_10] [i_16]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            arr_57 [i_1] [i_11] [i_10] [i_1] = ((/* implicit */short) ((_Bool) ((signed char) 12825696530153459519ULL)));
                            var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 449970962)) ? (var_1) : (var_1)));
                        }
                        arr_58 [i_1] [i_10] [i_10] [i_16] = ((/* implicit */unsigned long long int) ((signed char) 1009991336U));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1] [i_1])), (var_5))));
        var_36 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (unsigned short)9741)));
    }
    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            var_37 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)11805)) ? (min((2508599053181465985LL), (9223372036854775807LL))) : (((/* implicit */long long int) ((int) (short)-256)))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((long long int) ((signed char) arr_37 [i_19] [i_19]))))));
            var_39 = ((/* implicit */_Bool) min((max((var_7), (((/* implicit */short) arr_19 [i_19] [i_18] [i_18] [i_18])))), (((short) ((unsigned long long int) arr_23 [i_18] [i_18] [(short)8])))));
        }
        var_40 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [9ULL] [9ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9753))) : (var_3)))), (((((/* implicit */_Bool) var_0)) ? (2548138900681015062ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_18] [i_18] [i_18] [4ULL]))))))));
    }
    var_41 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (var_0) : (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_2))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) : (var_5))))), (((/* implicit */unsigned int) ((unsigned short) min(((unsigned short)55794), ((unsigned short)65515)))))));
    var_42 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned short)10030)) : (((/* implicit */int) (signed char)4)))));
}
