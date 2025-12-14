/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19836
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
    var_16 = ((/* implicit */long long int) var_15);
    var_17 = ((/* implicit */unsigned long long int) var_1);
    var_18 -= ((/* implicit */long long int) (((~(var_11))) & (var_11)));
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) ^ (14572331519302212102ULL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (~(arr_6 [i_1 - 3])));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) var_11)) : (var_9))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_13)))))) != (arr_14 [i_2] [i_2] [i_4])));
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((long long int) arr_7 [i_3]));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1])))))) ? (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_4])) : (((arr_6 [i_1]) * (arr_6 [i_4]))))))));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (var_13) : (((/* implicit */long long int) arr_11 [i_1 - 3]))));
                            var_24 = var_8;
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            var_25 -= ((/* implicit */signed char) ((long long int) (+(var_8))));
                            arr_27 [i_1] [i_2] [i_2] [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7] [i_7]))))) ? (((arr_13 [i_2] [i_2]) & (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((var_7) % (((/* implicit */int) var_10)))))));
                        }
                        var_26 = ((/* implicit */unsigned short) var_6);
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_25 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_2]) > (arr_25 [i_1 + 1] [i_1] [i_1 - 1] [i_5])));
                    }
                }
            } 
        } 
    }
    for (signed char i_8 = 3; i_8 < 14; i_8 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    {
                        arr_41 [i_8] [i_8] [i_8] [i_10] [i_9] [i_11] = ((/* implicit */unsigned short) var_7);
                        arr_42 [i_9] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_12 [i_9] [i_8 - 1] [i_8 - 1]) : (arr_12 [i_8] [i_8 + 2] [i_8 + 2])))) || ((!(((/* implicit */_Bool) arr_12 [i_8] [i_8 - 2] [i_10]))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */unsigned long long int) var_7)) * (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_9])) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_11])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 3) 
        {
            for (signed char i_13 = 3; i_13 < 13; i_13 += 3) 
            {
                {
                    arr_49 [i_13] [i_12] [i_8] [i_8] = ((/* implicit */int) arr_31 [i_8]);
                    arr_50 [i_8] [i_8] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8])) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12])) ? (arr_9 [i_8] [i_13]) : (((/* implicit */unsigned long long int) var_5)))))))) : (((((/* implicit */int) (short)8192)) % (1210852119)))));
                    arr_51 [i_8] [i_12] [i_8] = ((((var_3) == (((/* implicit */unsigned long long int) ((int) arr_21 [i_12] [i_12] [i_12] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_45 [i_13 + 3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_39 [10ULL] [10ULL])) : (((/* implicit */int) var_1)))))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_39 [4] [i_12 + 1])) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(unsigned short)14] [i_12 - 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_29 ^= ((((/* implicit */int) var_4)) / (((((/* implicit */_Bool) arr_7 [i_12 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))));
                        arr_54 [i_8] [i_13 - 3] [i_12] [i_8] [i_8] [i_8] = ((/* implicit */short) var_11);
                    }
                    for (unsigned long long int i_15 = 4; i_15 < 15; i_15 += 3) 
                    {
                        arr_57 [i_8] [i_8] [i_13] [i_15] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 + 1])) % (arr_26 [i_8] [i_8 + 1])))));
                        var_30 = ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_8])) ? (var_9) : (((/* implicit */long long int) var_7)))))) & (((((var_5) >> (((((/* implicit */int) var_1)) + (117))))) >> (((((arr_48 [i_15] [i_13] [i_12 + 1]) >> (((arr_26 [i_8] [i_8]) - (3364181509837415445LL))))) - (1152127736))))));
                        var_31 = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) arr_39 [i_15] [i_15])) ? (var_3) : (((/* implicit */unsigned long long int) var_14)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_12])) && (((/* implicit */_Bool) var_0)))))))));
                    }
                }
            } 
        } 
    }
}
