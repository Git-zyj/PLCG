/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52775
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) var_4))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_4), (((((/* implicit */_Bool) var_0)) ? (-860880578) : (var_5)))))) ? (((/* implicit */long long int) (+(((unsigned int) -9150729763288173664LL))))) : (var_9)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((var_5) << (((arr_3 [i_0 + 2]) - (1302740749U)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_2] [6U] = ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0])) ? ((-(((/* implicit */int) (unsigned short)28797)))) : (((arr_5 [i_2] [i_1] [i_0]) ? (arr_7 [i_3] [8] [i_1] [i_0]) : (-860880578))));
                        arr_14 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) (-(2724862745U)));
                        var_13 ^= ((/* implicit */int) arr_10 [6ULL] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                } 
            } 
            arr_15 [i_0] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 2])) - (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) var_5)))) ? ((+(arr_0 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)36739)) : (var_2))))))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) 2006399999))));
            /* LoopSeq 1 */
            for (int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                var_16 = ((int) arr_17 [i_0] [10U] [i_0 - 1]);
                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_5] [i_4])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28797))) : (arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2]))) : (((/* implicit */long long int) var_2))));
            }
        }
        arr_21 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0])))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [9])))) : (323785750)));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((-448363780240905952LL), (((/* implicit */long long int) arr_22 [i_6] [i_6]))))))) ? (946398565U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_6])))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_22 [i_6] [i_6]), (arr_22 [i_6] [i_6])))) < (((int) max((var_1), (((/* implicit */int) arr_22 [i_6] [i_6])))))));
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)32)), (arr_25 [i_7] [i_7])))), ((+((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) ((1977558906U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_7])))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_23 [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            arr_31 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((int) (_Bool)1));
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_8 + 1])) ? (arr_26 [i_7]) : (arr_26 [i_8 + 1])));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)28797))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_26 [i_9])))) ? (((((/* implicit */_Bool) arr_28 [5])) ? (-7209522841896269489LL) : (((/* implicit */long long int) arr_34 [i_9] [i_9])))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
            arr_35 [i_7] [(short)10] [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 151421867U)) ? (4143545429U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (short)-32761)) : (2006399999))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_30 [i_7]))));
            arr_36 [i_9] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7209522841896269481LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [i_7] [i_9] [6LL]))))) : (6U)));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) 
            {
                arr_41 [8] [0LL] [i_11 - 1] [i_11] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_32 [i_11] [(_Bool)1] [i_7])))) - (((/* implicit */int) ((_Bool) 4294967289U)))));
                var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)28797)) ? (((/* implicit */int) (_Bool)0)) : (3584)))));
            }
            for (unsigned short i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) arr_42 [i_12] [i_10] [i_7]))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_12 + 2] [i_12 - 1] [i_12 + 1])) ? (((arr_38 [i_7] [i_7] [i_12]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [i_10] [i_7]))))) : ((~(var_6))))))));
                var_27 = ((/* implicit */short) ((arr_39 [i_7] [i_7] [i_12 + 2]) << (((((/* implicit */int) arr_42 [i_7] [i_10] [i_12 + 2])) - (29592)))));
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 13; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) -2006399999))));
                            arr_50 [i_7] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_43 [i_7] [i_7] [i_14])) ? (var_2) : (7))) <= (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) (unsigned char)32))))));
                            arr_51 [i_7] [i_13] [2] [i_13] [i_12] [i_12] = ((/* implicit */short) -1547210996);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((1547210996) / (arr_48 [i_10] [i_12] [i_10] [i_7]))))));
                            var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) arr_38 [i_13] [i_10] [i_12]))))) ? (var_1) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (arr_44 [i_7] [i_14] [3] [i_10] [12] [2U]))))));
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */long long int) (~(((unsigned long long int) arr_29 [i_7]))));
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                for (unsigned char i_16 = 1; i_16 < 14; i_16 += 4) 
                {
                    for (int i_17 = 1; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_32 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24241))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))))));
                        }
                    } 
                } 
            } 
            arr_62 [i_10] [5ULL] [i_7] = ((/* implicit */long long int) 0);
            arr_63 [i_7] [11ULL] [i_7] |= ((/* implicit */_Bool) (~(1048576)));
        }
        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            arr_66 [i_7] [i_7] = ((/* implicit */long long int) ((((arr_60 [i_7] [i_18] [i_18] [i_7] [i_18]) + (2147483647))) << ((((((+(arr_60 [i_7] [i_7] [i_7] [i_7] [i_18]))) + (492505287))) - (16)))));
            var_34 -= max((((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) ((unsigned short) 7209522841896269488LL))) : (((((/* implicit */_Bool) var_5)) ? (arr_44 [8U] [i_7] [i_7] [i_18] [i_18] [i_7]) : (8191))))), ((((!(((/* implicit */_Bool) (unsigned char)6)))) ? (((((arr_60 [i_7] [i_7] [i_7] [i_7] [i_18]) + (2147483647))) << (((((/* implicit */int) var_3)) - (1))))) : (((/* implicit */int) arr_37 [i_7] [i_18])))));
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (unsigned char)250))));
        }
    }
    for (int i_19 = 0; i_19 < 14; i_19 += 4) 
    {
        var_36 *= ((/* implicit */unsigned int) -707184880939745440LL);
        var_37 = ((/* implicit */_Bool) (+(min((arr_25 [i_19] [i_19]), (arr_25 [i_19] [i_19])))));
    }
}
