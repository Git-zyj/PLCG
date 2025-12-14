/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34002
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) var_9)), (var_1)));
        var_17 = ((/* implicit */unsigned short) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(max((arr_1 [i_0] [i_2 + 2]), (((/* implicit */unsigned int) var_8)))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((signed char) max((arr_5 [i_2 + 2] [i_2] [i_1]), (arr_5 [i_2 + 2] [i_2] [i_1]))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)197)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [14LL] [14LL] [i_2])) : (((/* implicit */int) arr_6 [i_1] [6U] [i_1] [i_1]))))))) ? ((-(((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1])))))) : (((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_0] [12LL])))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */int) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0]))))))) - (min((((/* implicit */long long int) var_12)), (var_11)))));
    }
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_22 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))));
            var_23 = ((/* implicit */unsigned short) ((var_9) ? (((((/* implicit */_Bool) arr_9 [i_3 + 3])) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_11 [i_3 - 1])))) : (((/* implicit */int) ((((/* implicit */long long int) var_14)) >= (arr_9 [i_3 - 1]))))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)28832)))))));
            var_25 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_26 -= ((/* implicit */unsigned long long int) (~(arr_13 [i_3 + 1])));
            arr_17 [i_3] = ((/* implicit */unsigned char) (~(var_2)));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_13))))));
            arr_18 [i_3] [i_3 + 2] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_6))));
        }
        /* vectorizable */
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            arr_21 [i_3 + 1] [i_6 - 1] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) <= (arr_13 [i_6 + 2])));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (unsigned char)198);
                            var_29 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)198))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_30 ^= ((/* implicit */unsigned int) ((int) -1481665182));
            arr_33 [i_10] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_4)))))));
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3])) ? (var_13) : (((/* implicit */long long int) arr_15 [i_3 + 3] [i_10]))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_3] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3] [i_3 + 2] [i_3]))) : (arr_15 [i_13] [i_13]))))));
                            var_33 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 3; i_14 < 22; i_14 += 2) 
                {
                    for (int i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(var_1))))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_5))));
                        }
                    } 
                } 
                var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                var_37 &= ((/* implicit */long long int) ((unsigned int) (unsigned char)209));
            }
            for (unsigned short i_16 = 2; i_16 < 22; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (signed char i_18 = 1; i_18 < 22; i_18 += 3) 
                    {
                        {
                            var_38 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [1ULL] [i_10 + 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) : (var_14)));
                            arr_54 [i_10] [i_10] [i_16] [i_10 + 1] [i_18] = ((/* implicit */_Bool) ((unsigned short) (unsigned char)73));
                            var_39 = ((/* implicit */short) max((var_39), (arr_29 [i_3] [i_10] [i_16] [(_Bool)1] [i_17] [i_18])));
                        }
                    } 
                } 
                arr_55 [21] [i_10] [22] = ((/* implicit */unsigned short) ((arr_48 [i_10 + 1]) < (arr_13 [14LL])));
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_37 [i_16 - 1])))))));
            }
            for (short i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) var_9))));
                var_42 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_35 [i_19] [22LL] [(unsigned char)2] [i_19])))) ? (((/* implicit */int) arr_30 [i_3 + 3] [(_Bool)1] [i_10 + 1] [i_19] [i_19] [i_19])) : ((~(((/* implicit */int) (_Bool)1))))));
            }
        }
        arr_58 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) (~(((/* implicit */int) min((var_3), (((/* implicit */short) arr_26 [(short)4] [i_3] [i_3] [i_3]))))))))));
    }
    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 23; i_21 += 3) 
        {
            var_43 = (~(((/* implicit */int) (unsigned char)197)));
            arr_63 [i_21] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)50))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 2268411691U)))))))));
            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_37 [i_21]), (((/* implicit */short) var_10)))))))) ? (((/* implicit */int) (!(var_4)))) : (((/* implicit */int) var_3)))))));
            arr_64 [i_21] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) - (arr_9 [i_21])))) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_4)))))));
        }
        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (~(((/* implicit */int) arr_61 [i_20])))))));
        var_46 = ((/* implicit */unsigned char) (!((_Bool)1)));
        var_47 = ((/* implicit */unsigned char) (((~(((unsigned int) arr_53 [i_20] [i_20] [i_20] [15U])))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((arr_23 [i_20] [i_20] [i_20] [i_20]) | (((/* implicit */int) arr_61 [i_20]))))) : (var_2)))));
        arr_65 [i_20] = arr_15 [i_20] [i_20];
    }
    for (short i_22 = 2; i_22 < 21; i_22 += 3) 
    {
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(signed char)0] [i_22] [i_22] [(unsigned char)22])) ? (var_11) : (((/* implicit */long long int) var_0))))) ? (((arr_14 [i_22 - 2]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) 2026555605U))))))));
        var_49 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_22 + 1] [i_22 - 2] [i_22] [i_22] [i_22 - 2] [i_22])) ? (((((/* implicit */unsigned long long int) arr_49 [i_22 + 1] [i_22 + 1] [i_22 - 2] [i_22])) / (arr_66 [i_22 - 1]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1))))))));
    }
    var_50 = ((/* implicit */short) (~((-((~(var_2)))))));
    var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) (~(max((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 918288959))))))))))));
    var_52 = ((/* implicit */unsigned char) ((var_6) ? (var_13) : (var_13)));
    var_53 &= ((/* implicit */unsigned char) var_3);
}
