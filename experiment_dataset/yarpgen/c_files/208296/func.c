/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208296
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
    var_12 += ((/* implicit */unsigned int) var_5);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 &= ((/* implicit */unsigned long long int) (!(arr_1 [i_0])));
        arr_2 [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)38752))));
                            arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((int) (unsigned short)36056));
                            arr_17 [i_1] = ((/* implicit */unsigned long long int) (+(96922710U)));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))));
                        }
                        var_16 = ((/* implicit */unsigned int) arr_4 [i_1]);
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [(unsigned short)5] [i_2] [(unsigned short)5] [i_2]))));
                    }
                } 
            } 
        } 
        arr_18 [0U] [i_0] = ((15488582027627103204ULL) & (((/* implicit */unsigned long long int) 3191862869U)));
    }
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_27 [i_7] [(signed char)1] [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_25 [i_5] [i_5] [i_5] [i_6]) == (((/* implicit */long long int) ((25U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5]))))))))), (8725724278030336ULL)));
                    var_18 |= ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((13655122358043858025ULL), (((((13ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)124))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_5])) * (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_30 [i_10] [i_10])) < (((/* implicit */int) arr_30 [i_10] [i_10]))))) | (((((/* implicit */int) arr_30 [i_10] [i_10])) / (((/* implicit */int) arr_30 [i_10] [i_10]))))));
        arr_36 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24)) & (((/* implicit */int) (unsigned short)53215))))), ((~(0U)))))) ? (((/* implicit */unsigned long long int) (~(arr_20 [i_10])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13662))) : (arr_21 [i_10] [i_10])))) ? (((((/* implicit */_Bool) arr_34 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (var_8))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-1LL))))))));
        arr_37 [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 19U)), ((+(arr_22 [i_10] [i_10] [i_10])))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 2; i_13 < 15; i_13 += 4) 
            {
                {
                    arr_47 [i_12] [i_11] [i_12] = ((/* implicit */unsigned short) arr_45 [i_11]);
                    var_22 = ((/* implicit */unsigned short) ((arr_44 [i_13 - 2] [i_12] [i_13] [i_13]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) arr_28 [i_12] [(_Bool)1])) : (((/* implicit */int) arr_24 [i_11])))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 2199023251456LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16289))) : (18446744073709551599ULL)));
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_12] [i_13 + 1] [i_13 - 1]))));
                    arr_48 [i_11] [i_12] [i_13 - 2] [i_12] = ((/* implicit */unsigned short) 3001436387U);
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((-3425025230426395559LL) == (((/* implicit */long long int) arr_31 [(_Bool)0] [i_11] [i_11]))));
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
            {
                for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    {
                        arr_57 [i_11] [i_11] [i_14] [i_15] [i_16] = ((/* implicit */unsigned long long int) (short)-32754);
                        arr_58 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_11]))));
                        var_26 -= ((/* implicit */unsigned char) var_8);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [6] [6]))) : (6375407283629679824LL)))) ? (((/* implicit */int) arr_38 [i_16])) : (((((/* implicit */_Bool) -2199023251457LL)) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) arr_43 [i_11] [i_14]))))));
                    }
                } 
            } 
        } 
        arr_59 [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_50 [i_11] [i_11]))));
        var_28 = ((/* implicit */signed char) arr_23 [i_11]);
    }
}
