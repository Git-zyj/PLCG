/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227659
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) (-(arr_1 [i_0])))))), (((arr_0 [i_0]) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((13965770043520967484ULL) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((arr_1 [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) 2147483647);
        arr_6 [i_0] = ((unsigned char) min((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_21 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_18 [i_3] [i_3] [i_1 - 1] [i_3] [i_1 - 1])), ((signed char)30)))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_13 [i_3] [i_5] [i_1 + 1])) - (15))))) : (((/* implicit */int) (!(arr_18 [i_2] [i_3] [i_1 + 2] [i_3] [i_1 + 1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_18 [i_3] [i_3] [i_1 - 1] [i_3] [i_1 - 1])), ((signed char)30)))) ? (((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_13 [i_3] [i_5] [i_1 + 1])) - (15))) - (22))))) : (((/* implicit */int) (!(arr_18 [i_2] [i_3] [i_1 + 2] [i_3] [i_1 + 1])))))));
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_3] [i_3] [i_5])), (arr_7 [i_2] [i_2]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (var_6))))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_1 + 1]))))) < (arr_16 [i_1 + 2])));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
                    arr_23 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)44634), (((/* implicit */unsigned short) (_Bool)1)))))) <= (arr_16 [i_3])));
                    arr_24 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_11 [i_1 - 1])))) && (((/* implicit */_Bool) ((unsigned short) arr_19 [i_3] [i_1 + 1] [i_1 + 3] [i_1])))));
                    arr_25 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((6964833245605251740ULL) >= (((arr_15 [i_1 - 1] [i_1] [i_3] [i_1] [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_3])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_11 [i_1 + 3]))))))));
                        var_17 -= (unsigned short)16383;
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_18 = ((((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1 + 2] [i_1 + 2] [i_1]))) - (((long long int) (_Bool)1)))) >> ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_11] [i_9] [i_10] [i_10])) && (((/* implicit */_Bool) arr_13 [i_11] [i_10] [i_11]))))))));
                        arr_45 [i_11] [i_10] [2ULL] [2ULL] [i_9] [i_1] |= ((/* implicit */short) max((((((/* implicit */_Bool) ((arr_39 [i_11] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_5)))) : (max((arr_39 [i_1] [i_10]), (((/* implicit */long long int) arr_29 [i_11] [(_Bool)1])))))), (((/* implicit */long long int) max((arr_38 [i_1 + 2]), (arr_38 [i_1 + 3]))))));
                        arr_46 [i_1] [i_1] [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_39 [i_11] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11]))) : (arr_39 [i_1] [i_1 - 1]))) & (((/* implicit */long long int) (-(arr_26 [i_11]))))));
                        var_19 = ((/* implicit */signed char) (-((~(((var_9) / (arr_19 [i_11] [i_9] [i_10] [i_10])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((/* implicit */int) arr_18 [i_1] [(signed char)16] [i_12] [i_13] [i_13])))))));
                    var_21 *= ((/* implicit */int) var_1);
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_14 [(short)6] [(short)6]) ? (((/* implicit */int) arr_49 [i_1 - 1])) : (((/* implicit */int) var_10))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 1]))))) <= ((~(((/* implicit */int) (_Bool)1)))))))))));
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-((-(var_7)))))) : (max((((/* implicit */long long int) ((unsigned int) var_6))), (max((((/* implicit */long long int) var_1)), (0LL)))))));
}
