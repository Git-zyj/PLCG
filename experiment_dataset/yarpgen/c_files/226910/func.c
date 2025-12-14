/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226910
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 *= ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-23756)) : (((/* implicit */int) (_Bool)1))))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned int) 1842368146)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (var_7) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)3095)) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)190)), (arr_9 [i_0] [i_2])))) : (max((arr_7 [i_2] [i_2] [i_2] [i_0]), ((+(arr_7 [i_2] [i_0] [i_0] [i_0]))))))))));
                var_20 *= ((/* implicit */_Bool) arr_3 [(short)19]);
                arr_10 [i_1] [i_1] = ((/* implicit */int) (+(((unsigned int) -1386306658))));
                arr_11 [i_2] |= ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_2))))) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_8 [i_2] [i_2] [i_0]))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) || ((_Bool)1)))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned int) arr_9 [i_1] [(unsigned char)8])) / (arr_5 [i_0])))))));
            }
            arr_12 [5U] [i_1] [5U] = ((/* implicit */int) arr_2 [i_1]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [17] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_15 [(_Bool)1] [(_Bool)1] [i_3]), (arr_7 [i_0] [i_3] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3095))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (arr_6 [i_3] [i_3] [i_0]) : (((/* implicit */unsigned long long int) var_5)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_6 - 2] [(unsigned char)9] [i_5] = ((/* implicit */unsigned int) (unsigned char)133);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_10))));
                            arr_26 [i_5] [i_4] [i_4] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3899305557U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_0] [i_3] [i_4]))))))), (((1330583078U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))));
                        }
                    } 
                } 
            } 
            arr_27 [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])) ? (arr_4 [i_3] [i_0] [i_0]) : (max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))));
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 2; i_8 < 22; i_8 += 4) /* same iter space */
            {
                arr_32 [i_8 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((long long int) (_Bool)1)))) == (((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [(unsigned char)8]))))))))));
                arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) (short)3054);
                arr_34 [i_0] [i_7] [(unsigned char)4] &= ((/* implicit */short) arr_20 [i_0] [i_7]);
                var_23 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (arr_9 [i_7] [i_0]) : (((/* implicit */int) arr_17 [i_0] [i_7] [i_7])))))))));
                arr_35 [3] [i_7] [19LL] [(unsigned char)11] = ((/* implicit */long long int) arr_13 [i_0]);
            }
            for (long long int i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) arr_30 [i_0] [i_9 - 1] [i_10]);
                            arr_43 [i_0] [i_10] [i_0] [i_0] [i_0] = (+((-((((_Bool)1) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_42 [i_9 - 1] [i_9 + 1])))))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_7] [i_10] [i_10 - 1])) || (((/* implicit */_Bool) (short)-3055))))) >> (((((/* implicit */int) ((short) arr_31 [i_0] [i_7] [i_9] [i_11]))) + (25516))))));
                            arr_44 [i_0] [i_9] [i_10] [14U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3308054612U)) ? (((/* implicit */int) (short)-6526)) : (((/* implicit */int) arr_0 [i_9]))))) : (min((var_9), (((/* implicit */long long int) arr_21 [i_0] [18ULL] [16] [i_0] [i_10]))))))) | (((((/* implicit */_Bool) arr_28 [i_11] [i_10 - 1] [i_9])) ? (arr_22 [(signed char)10] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_9 + 1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_10] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_47 [i_0] [i_12] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2055580770)) ? (((763842964) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) || (((/* implicit */_Bool) (short)-18339))))))) : (((/* implicit */int) (signed char)-1))));
                    arr_48 [i_0] [i_0] [i_9] |= ((/* implicit */short) arr_9 [i_12] [i_0]);
                    var_26 = ((/* implicit */short) ((unsigned char) ((((arr_4 [i_12] [i_12] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)11924))))) / (arr_5 [i_9 - 1]))));
                    var_27 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)253))) && (((/* implicit */_Bool) (short)3055)))))));
                }
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_19 [22LL] [i_0] [i_0])), ((+((+(((/* implicit */int) var_10))))))));
                    var_29 = ((/* implicit */signed char) (-(min((arr_46 [i_9 - 1] [17U] [i_9 + 1]), (arr_46 [i_9 - 1] [i_9] [i_9 + 1])))));
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (+((+((-(((/* implicit */int) (short)-22252)))))))))));
                }
            }
            var_31 *= ((/* implicit */unsigned char) var_6);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 1897967030)) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_37 [i_0] [i_0] [i_0] [i_0]) : (3661123299U)))), (var_9))))));
        }
        var_33 = ((/* implicit */unsigned int) var_3);
        arr_51 [i_0] = ((/* implicit */unsigned char) (+(arr_4 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 1) 
        {
            arr_59 [10LL] [i_14] [(short)7] = ((((/* implicit */_Bool) arr_52 [i_14])) ? ((+(arr_52 [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_15 - 1] [i_14]))));
            var_34 = ((arr_20 [i_14] [i_14]) - (arr_1 [i_15 + 1] [i_15 - 2]));
            var_35 = ((/* implicit */long long int) ((short) arr_2 [i_14]));
            var_36 = ((/* implicit */unsigned char) max((var_36), ((unsigned char)0)));
            arr_60 [i_14] [i_15] [i_14] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_8 [10LL] [i_14] [i_15])) ? (var_15) : (((/* implicit */unsigned int) arr_45 [i_15] [i_15 - 1]))))));
        }
        var_37 = ((/* implicit */int) var_13);
        arr_61 [i_14] [i_14] = ((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_0 [i_14])) : (arr_9 [1ULL] [1ULL]));
    }
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_16), (((/* implicit */signed char) var_10))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (1342838939715554702ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_8))))))))) : (((var_15) >> (((((/* implicit */int) var_8)) - (184)))))));
    var_39 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_14))) ? (((/* implicit */int) var_16)) : ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))))));
    var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (-1365969073))))));
}
