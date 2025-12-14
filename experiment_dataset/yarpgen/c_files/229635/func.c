/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229635
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (short i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    for (long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_17 |= ((/* implicit */_Bool) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_3]))) ? (((/* implicit */long long int) ((var_4) + (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))))) : (arr_6 [i_2] [i_2] [i_2])))) ? (max((((2147483647) / (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) (signed char)106))))) : (max(((~(((/* implicit */int) (signed char)111)))), (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [3U] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_5])))));
                var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned short) (signed char)-107))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)53391), (((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_5])))))) : (max((((/* implicit */unsigned int) var_11)), (4294967295U)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5] [i_0])) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))) : (((((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(signed char)18])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)12144)) - (12123)))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5])) * (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
            }
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12144))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (var_9))))) ^ ((~(var_3))))))))));
                            var_24 = ((/* implicit */unsigned long long int) (-(max((var_4), ((-(((/* implicit */int) (unsigned short)65313))))))));
                            var_25 = var_0;
                            var_26 = min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-1123065614))), ((+(((/* implicit */int) arr_22 [i_0] [(short)19] [i_1] [i_6] [i_7] [i_8])))));
                            var_27 = arr_17 [19ULL] [i_1];
                        }
                    } 
                } 
                var_28 = max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [(short)6] [17LL] [17LL])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_6] [i_6] [i_6])))))), (min((max((((/* implicit */int) (signed char)52)), (var_4))), ((+(((/* implicit */int) (signed char)-126)))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_29 &= ((/* implicit */signed char) 2199023255520ULL);
            var_30 = ((/* implicit */unsigned short) (~(min((-6236725861617194975LL), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            var_31 = ((/* implicit */_Bool) max((var_31), (((max((((unsigned long long int) arr_8 [i_9] [i_9] [i_9] [i_0])), (((/* implicit */unsigned long long int) ((signed char) var_0))))) != (((/* implicit */unsigned long long int) -6236725861617194965LL))))));
            var_32 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))) ? ((+(((/* implicit */int) arr_21 [i_9])))) : (((int) max((((/* implicit */long long int) var_2)), (var_15))))));
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14ULL)) ? (var_5) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)53381)))));
            var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [11] [i_10 + 3] [i_10 + 3] [i_10] [i_10 + 2])) < (var_5)));
        }
        var_35 = ((/* implicit */int) (+((-(arr_6 [i_0] [i_0] [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_36 = ((((/* implicit */int) arr_12 [i_11] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])));
            var_37 = ((/* implicit */short) arr_8 [i_11] [i_11] [i_0] [i_0]);
            var_38 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_11] [i_0]);
        }
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            var_39 += ((/* implicit */long long int) (((~(3684334149656506437LL))) == (((/* implicit */long long int) max((var_4), ((+(((/* implicit */int) (short)32739)))))))));
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((short) max((arr_28 [i_12]), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_27 [i_0] [i_12])), ((unsigned short)53398))))))))));
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2724118662U)) * (18446744073709551615ULL)));
            var_42 = ((/* implicit */unsigned short) arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
            var_43 = ((/* implicit */unsigned long long int) arr_32 [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 3; i_15 < 20; i_15 += 4) 
                {
                    {
                        var_44 = ((/* implicit */short) ((((unsigned long long int) var_0)) & (((/* implicit */unsigned long long int) var_15))));
                        var_45 |= ((/* implicit */int) var_2);
                        var_46 = ((/* implicit */short) ((unsigned short) ((-7094406339513327404LL) & (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                        var_47 = ((/* implicit */signed char) var_16);
                    }
                } 
            } 
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (arr_28 [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((arr_33 [i_0] [i_13] [i_13]) + ((+(((/* implicit */int) var_2)))))))));
        }
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        var_50 = ((/* implicit */signed char) 134512180);
        var_51 = ((/* implicit */signed char) var_8);
        var_52 = ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-1))))));
    }
    for (unsigned short i_17 = 3; i_17 < 19; i_17 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            var_53 = ((/* implicit */signed char) ((short) min((((/* implicit */long long int) ((int) arr_37 [i_17] [i_17]))), ((~(var_0))))));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    {
                        var_54 += ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)53388)) : (((/* implicit */int) var_10)))), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */int) arr_35 [i_17] [i_18])) != (((/* implicit */int) var_13)))))) : ((((-(arr_38 [i_19]))) / (((/* implicit */long long int) max((var_4), (((/* implicit */int) arr_22 [i_17] [i_18] [i_19] [i_19] [i_18] [i_17]))))))));
                        var_55 = ((/* implicit */unsigned long long int) min((arr_52 [(_Bool)1] [i_18] [i_17 + 2] [i_17]), (var_9)));
                        var_56 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_17] [i_17])) & (((((/* implicit */_Bool) (short)-1)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446741874686296126ULL))) : (((/* implicit */unsigned long long int) ((162150406) * (((/* implicit */int) var_2)))))))));
                    }
                } 
            } 
        }
        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53398)) ? (7094406339513327400LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2199023255489ULL)) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_36 [i_17])))) : (((/* implicit */int) (signed char)122)))))));
        var_58 = ((/* implicit */_Bool) max((((/* implicit */long long int) (((+(var_4))) == (((/* implicit */int) arr_25 [i_17] [i_17]))))), (arr_37 [i_17] [i_17 - 3])));
    }
    /* vectorizable */
    for (unsigned short i_21 = 3; i_21 < 24; i_21 += 3) 
    {
        var_59 = ((/* implicit */int) ((arr_56 [i_21 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_57 [i_21 - 3] [i_21 + 1]) & (((/* implicit */long long int) -310973693))))) ? (144115188075855871ULL) : (((/* implicit */unsigned long long int) arr_56 [i_21 + 1])))))));
    }
    var_61 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((short) (unsigned short)65529)))));
}
