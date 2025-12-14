/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189961
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (-(min((((/* implicit */int) (unsigned char)89)), ((-(((/* implicit */int) var_2)))))));
        var_19 -= ((/* implicit */short) (~(1350797174)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_20 ^= ((/* implicit */signed char) var_6);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_9 [i_2] = (-(((/* implicit */int) var_17)));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_2 + 1] [i_2 - 1]))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2 + 2])) ? (6076036421343506263LL) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_5)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_8 [i_1] [i_1]))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_23 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_4])) ? (((((/* implicit */_Bool) (short)8017)) ? (((/* implicit */int) (short)-8017)) : (((/* implicit */int) (short)-8017)))) : (((/* implicit */int) arr_11 [i_4]))))));
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_12 [i_4]) : (arr_12 [i_4]))), (((/* implicit */unsigned long long int) ((7856905403715563862LL) & (-7156063676393068553LL))))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_21 [i_6] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_5 + 1]))))));
                    var_24 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (126100789566373888LL)))) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (arr_20 [i_6 - 3] [i_7])))));
                    arr_22 [(unsigned char)11] [10ULL] [10ULL] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_11 [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5 - 1]))))) : (((-7156063676393068553LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_7])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_6 + 2])) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 693240726)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6379))) : (7156063676393068546LL)))))));
                }
            } 
        } 
        var_25 += ((/* implicit */short) (-(((((/* implicit */_Bool) arr_20 [i_5 + 1] [11U])) ? (arr_12 [i_5 - 1]) : (arr_15 [i_5 - 1])))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(arr_27 [i_5] [i_5] [i_5] [i_5 - 1])))), (((((/* implicit */_Bool) ((long long int) arr_15 [i_5 - 1]))) ? (arr_15 [i_5 + 1]) : (((/* implicit */unsigned long long int) (+(-693240726))))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59150)) ? (((/* implicit */long long int) var_10)) : (-7156063676393068553LL)))) ? (arr_27 [9ULL] [i_8] [i_8] [i_8]) : (2960509685U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446181123756130304ULL), (((/* implicit */unsigned long long int) arr_20 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) arr_24 [(unsigned short)12] [i_8] [i_9])) ? (((/* implicit */int) arr_10 [i_8])) : (((/* implicit */int) arr_16 [16LL])))) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_5])))))));
                }
            } 
        } 
    }
}
