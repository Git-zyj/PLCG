/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222496
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
    var_17 = ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) -1536696936667490093LL)) % (8850308803773819295ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((1536696936667490085LL) - (((/* implicit */long long int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */short) (((-(var_16))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2] [i_2 - 1] [i_2])))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 - 1])))) | (9596435269935732320ULL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_3])), (9596435269935732324ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (arr_5 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) 9596435269935732342ULL)) ? (((/* implicit */long long int) arr_0 [i_3] [i_3])) : (arr_4 [i_3] [i_3] [i_3]))))), (((/* implicit */long long int) var_12)))))));
        var_21 &= ((/* implicit */_Bool) ((unsigned short) var_16));
        arr_11 [i_3] = ((/* implicit */_Bool) arr_1 [i_3]);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) var_14);
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (var_15)));
            var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4])))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4] [i_6] [10LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_6] [i_5] [(_Bool)1]))));
                        var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_7]) >> (((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9596435269935732322ULL)) ? (((/* implicit */int) arr_20 [i_7] [i_6] [i_5] [i_5] [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_5] [i_6] [i_7]))))) : (arr_13 [(_Bool)1] [i_6])));
                    }
                } 
            } 
            var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19555)) ? (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)3] [i_5] [i_5] [i_5]))) : (9596435269935732343ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_16 [i_5] [i_4] [i_4]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_28 &= ((/* implicit */unsigned char) ((unsigned long long int) 8850308803773819274ULL));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((short) (~(arr_15 [i_4] [i_8])))))));
            var_30 *= ((/* implicit */unsigned char) ((unsigned int) ((8850308803773819291ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [(unsigned short)1] [13U]))))));
        }
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [(_Bool)0] [i_9] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_9])))))));
            var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9596435269935732320ULL)))))) : (((((/* implicit */_Bool) 9596435269935732339ULL)) ? (((/* implicit */unsigned long long int) arr_18 [(_Bool)1] [i_4])) : (8850308803773819279ULL)))));
        }
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4] [4])) ^ (var_13)));
            var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_4] [(unsigned char)9] [i_10])) ? (arr_18 [i_4] [i_10]) : (((/* implicit */int) arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))));
            var_35 &= ((/* implicit */unsigned char) (signed char)56);
        }
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (max((((/* implicit */unsigned long long int) arr_8 [i_11])), (max((arr_3 [i_11] [i_11]), (((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_11] [i_11] [i_11])))))))));
        var_37 = ((((/* implicit */_Bool) -1536696936667490093LL)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned short)60095)));
        var_38 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_11])), (6683366793162698420ULL)))) ? (((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11] [i_11])) : (((int) (-(((/* implicit */int) arr_6 [i_11] [i_11] [i_11])))))));
    }
}
