/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51539
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
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) var_9)), (((1919066465) ^ (((/* implicit */int) var_1))))))), (var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((min((((/* implicit */long long int) arr_2 [i_0])), (arr_1 [i_0] [(_Bool)1]))) & (arr_1 [i_0] [i_0])));
        arr_4 [(short)9] [i_0] = ((/* implicit */_Bool) ((((min((arr_3 [i_0]), (arr_3 [i_0]))) + (2147483647))) >> ((((~(max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)0)))))) + (574192363162963767LL)))));
    }
    var_21 = var_18;
    /* LoopSeq 4 */
    for (short i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) arr_5 [i_1 - 1]))))) ? (arr_1 [i_1] [8]) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (_Bool)0)), (-3115894413700471296LL))) : (((/* implicit */long long int) ((var_16) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (arr_3 [i_1]))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    arr_14 [i_1 - 1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((var_17) < (((/* implicit */long long int) ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) arr_7 [i_3])) || (var_16)))))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */short) max((arr_9 [i_1 - 2]), (((max((arr_11 [(short)7] [i_1] [i_1 - 3] [i_1 - 2]), (arr_11 [i_1] [i_1] [4LL] [i_1]))) + (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_6 [i_1 - 1])))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        arr_22 [i_6] [i_4] [i_4] [i_4] [(short)6] = (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9170364504447424537LL)) ? (((/* implicit */int) arr_5 [6LL])) : (((/* implicit */int) arr_5 [i_4]))))) ? (((arr_5 [i_1 - 2]) ? (arr_19 [i_6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_4))))) : ((-(arr_11 [i_1] [(_Bool)1] [i_5] [i_6]))));
                        var_23 += ((/* implicit */long long int) min((((((((/* implicit */int) arr_5 [i_4])) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) max((var_3), (arr_16 [i_1] [i_1])))) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((_Bool) (-(636755384)))))));
                        arr_23 [i_1] [i_4] [i_1] [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_1] [i_4] [i_4])), (var_15))))));
                        var_24 = ((/* implicit */int) ((((((/* implicit */long long int) var_15)) % ((((_Bool)1) ? (var_7) : (var_17))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [1] [i_4] [i_5] [i_5] [i_1] [i_5])) ? (((((/* implicit */_Bool) arr_21 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_16 [i_6] [i_4])))) : (((((/* implicit */_Bool) 0LL)) ? (arr_21 [i_1] [i_4] [i_5] [i_5] [i_4] [i_1]) : (((/* implicit */int) var_10)))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((((/* implicit */int) (_Bool)1)) << ((((+(arr_8 [i_7 - 3] [i_7 - 3] [11]))) + (4381915887517706361LL))));
        arr_28 [i_7] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_6 [i_7])) : (((((/* implicit */_Bool) (short)23117)) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) min(((short)0), ((short)10127))))))));
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21213))))) * (var_5)))));
            arr_33 [i_7] [i_7] = ((/* implicit */int) max((arr_8 [(_Bool)1] [i_7 + 1] [i_7 + 1]), (((/* implicit */long long int) -215009353))));
            arr_34 [i_7 - 2] [i_7 - 3] [i_8] = ((/* implicit */int) -6839382172461638729LL);
        }
        for (long long int i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */short) ((max((((/* implicit */long long int) arr_7 [i_11 + 1])), (2921112085049868699LL))) == (max((((((/* implicit */_Bool) arr_19 [3LL] [3LL])) ? (arr_9 [i_11]) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) arr_30 [i_7] [i_9 - 1] [i_10]))))));
                        var_26 = (i_9 % 2 == 0) ? (((((arr_3 [i_7]) + (2147483647))) >> (((((/* implicit */int) ((short) arr_36 [i_9]))) + (32609))))) : (((((arr_3 [i_7]) + (2147483647))) >> (((((((/* implicit */int) ((short) arr_36 [i_9]))) + (32609))) - (39536)))));
                        arr_42 [i_7] [i_7] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((var_7) % (((/* implicit */long long int) var_15)))) : (min(((+(arr_11 [(short)7] [(short)7] [i_10] [6LL]))), (((/* implicit */long long int) arr_25 [i_11]))))));
                        arr_43 [i_7] [i_9] = ((/* implicit */int) arr_2 [i_7]);
                    }
                } 
            } 
            var_27 = ((/* implicit */short) arr_20 [i_7] [i_7] [i_9] [i_7] [(_Bool)1] [i_9 - 1]);
            var_28 |= ((/* implicit */_Bool) ((long long int) var_12));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_29 *= ((max((((/* implicit */int) arr_18 [i_7] [i_7] [i_12] [i_7])), (((((/* implicit */_Bool) arr_17 [i_7 - 2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_18 [i_12] [1LL] [2LL] [i_7])))))) >= ((~(arr_29 [i_7 - 1] [i_7 + 1] [i_7 + 1]))));
            var_30 += ((/* implicit */long long int) min((((/* implicit */int) (((-(873751460))) == (((/* implicit */int) (short)-32474))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-17811))))));
        }
    }
    for (short i_13 = 3; i_13 < 11; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 3; i_15 < 11; i_15 += 1) 
            {
                {
                    arr_55 [9LL] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_13] [i_13])) ? (((/* implicit */int) arr_25 [i_15])) : (((/* implicit */int) arr_36 [i_13]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_13 + 1]))))) ? (((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_52 [i_15 - 1] [i_13 - 3] [i_13] [(_Bool)1])) : (((/* implicit */int) ((short) var_12))))) : (((/* implicit */int) ((_Bool) arr_46 [i_15 + 1])))));
                    var_31 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)12417))) != (min((((/* implicit */long long int) max((var_1), (((/* implicit */short) arr_48 [i_13]))))), (((6839382172461638742LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-32765)))))))));
                    var_32 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (max((-7230264871662356528LL), (arr_54 [i_13] [i_13]))))), (((/* implicit */long long int) (~(arr_31 [i_13 + 1]))))));
                }
            } 
        } 
        arr_56 [i_13] = ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_20 [i_13 - 1] [0LL] [8LL] [8LL] [i_13 - 2] [i_13 - 2]))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12; i_16 += 1) 
        {
            for (short i_17 = 3; i_17 < 8; i_17 += 2) 
            {
                {
                    var_33 = min(((-2147483647 - 1)), (max((0), (((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 4 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13] [i_13]))) * (var_5)))) ? (arr_64 [1] [8LL] [i_17 + 2] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) max((max((var_10), (((/* implicit */short) arr_20 [i_13] [i_16] [i_17 + 3] [i_18] [i_18] [i_18])))), (var_1)))))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13])) ? (min((arr_60 [i_13] [(short)11] [i_13 - 3]), (((/* implicit */long long int) arr_29 [i_13 - 3] [i_18] [i_17 + 1])))) : (var_5)));
                        arr_66 [i_13] = ((/* implicit */long long int) arr_52 [i_13 - 1] [i_13 - 3] [i_17 + 4] [i_17 + 4]);
                        var_36 ^= ((/* implicit */int) ((arr_63 [i_13] [i_13 - 1] [(short)8] [10LL]) ? (((((_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13]))) : (max((((/* implicit */long long int) var_9)), (var_5))))) : (((((/* implicit */_Bool) (-(-1846990822)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [2]))) : (var_7)))));
                    }
                    for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_37 &= min((((arr_20 [i_13] [i_13] [i_13 - 2] [i_13 - 3] [i_13 - 3] [i_13]) ? (min((arr_38 [8LL] [(short)4] [2]), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1298385433939558662LL)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_13 + 1])) ? (arr_7 [i_13 - 2]) : (((/* implicit */int) (_Bool)1))))));
                        var_38 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */short) arr_16 [i_13] [i_13])), (var_1)))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_52 [i_17] [i_16] [i_17] [i_19])) : (arr_45 [i_19] [(short)9] [i_13 + 1]))))) & (((/* implicit */int) (short)-1))));
                        arr_69 [(short)7] [i_13] [(_Bool)1] [i_19] [i_19] = ((/* implicit */int) arr_47 [i_13 - 1] [i_13 - 3]);
                        var_39 ^= ((/* implicit */_Bool) (((_Bool)1) ? (arr_60 [(short)8] [(_Bool)1] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [1LL] [5LL] [i_17] [i_19])))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_72 [i_13] [i_13] = max((((((/* implicit */_Bool) (short)-21887)) ? (((long long int) (short)32767)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_13 - 1] [10LL] [i_17] [i_20])) ? (((/* implicit */int) arr_24 [i_16] [i_17 + 4])) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) 7230264871662356528LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_13])))) : (((((/* implicit */_Bool) -1785004537)) ? (var_5) : (-8809660130250635605LL))))));
                        var_40 = ((((/* implicit */int) (short)11157)) > (((int) arr_0 [i_17])));
                        var_41 += ((/* implicit */long long int) 511);
                    }
                    for (short i_21 = 4; i_21 < 11; i_21 += 1) 
                    {
                        var_42 -= ((/* implicit */_Bool) max((((/* implicit */int) (short)-30226)), (((max((arr_7 [i_13]), (((/* implicit */int) arr_48 [i_13])))) ^ (((((/* implicit */_Bool) (short)-24891)) ? (arr_29 [i_13 - 3] [(short)11] [i_13 - 3]) : (((/* implicit */int) (short)32758))))))));
                        var_43 = ((((/* implicit */_Bool) max((2978989498979753099LL), (((/* implicit */long long int) var_2))))) ? (arr_38 [i_13] [i_13] [i_21]) : (min((((/* implicit */long long int) max((var_13), (var_9)))), (((arr_6 [i_13 - 2]) ? (arr_67 [i_13] [i_13 - 1] [i_17] [i_21]) : (-7969574937677431919LL))))));
                    }
                    arr_77 [i_13] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)0))))) == (((((/* implicit */_Bool) 20)) ? (((/* implicit */int) arr_36 [i_13])) : (((/* implicit */int) arr_16 [10] [i_16]))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8795567210543016395LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)-28441)), (arr_21 [i_17] [i_17] [i_16] [i_16] [i_13 - 1] [i_13])))) : (max((-3471136574771708726LL), (8599450095745816457LL)))))));
                }
            } 
        } 
        arr_78 [i_13] = ((((/* implicit */_Bool) arr_39 [(short)4] [(short)4] [(short)4] [i_13] [i_13])) ? (((/* implicit */long long int) ((int) var_11))) : (arr_38 [i_13] [i_13] [i_13 + 1]));
    }
    /* vectorizable */
    for (int i_22 = 4; i_22 < 9; i_22 += 2) 
    {
        var_44 += ((/* implicit */_Bool) arr_80 [(short)6] [i_22]);
        var_45 ^= arr_9 [i_22];
    }
}
