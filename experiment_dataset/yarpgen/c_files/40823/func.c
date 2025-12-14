/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40823
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_6 [i_1 + 1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_7 [i_1 + 1] [i_2] [i_2])))))));
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min((((((/* implicit */int) arr_4 [i_0])) > (var_6))), (((((/* implicit */int) arr_3 [(_Bool)1])) > (((/* implicit */int) arr_4 [i_1]))))))) ^ (((/* implicit */int) arr_0 [i_0]))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min(((-(max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)23185)))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((unsigned short) arr_10 [(short)6] [i_5] [i_3]))) * (((/* implicit */int) var_18))))));
                            arr_19 [i_3] = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_4])))), ((~(((/* implicit */int) (unsigned short)45483))))))));
                        }
                        arr_20 [i_3] [(_Bool)1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_5 + 1] [i_5 - 1])) >= (((/* implicit */int) arr_1 [i_5 + 1] [i_5 + 1]))))) - (((/* implicit */int) arr_1 [i_5 + 1] [i_5 - 1]))));
                        var_22 -= ((/* implicit */short) arr_12 [i_0] [i_3] [i_4] [i_4]);
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(arr_23 [10]))))))));
                        var_25 = ((/* implicit */int) ((unsigned short) var_2));
                        var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)63)), (arr_28 [i_9] [i_8] [(unsigned char)5] [i_10])))) ? (min((((/* implicit */long long int) arr_31 [i_7] [i_7] [11LL] [i_8 + 1] [i_9] [i_10])), (arr_27 [i_7] [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) (~(arr_22 [i_7])))))), (((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)63)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                {
                    var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_7] [i_7]))))), (arr_28 [i_12] [i_11] [i_12] [i_11]))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        for (signed char i_14 = 1; i_14 < 12; i_14 += 2) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned char) max((((((long long int) var_4)) ^ (arr_33 [i_13 + 1] [5ULL] [i_14]))), (arr_29 [i_11] [i_13 - 1])));
                                arr_44 [i_12] [i_11] [i_12] [i_12] &= (!(((/* implicit */_Bool) ((signed char) arr_32 [i_7] [(unsigned char)14] [i_13 + 1] [i_7]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_17 = 4; i_17 < 12; i_17 += 2) 
                {
                    for (signed char i_18 = 4; i_18 < 15; i_18 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((_Bool) min((arr_52 [i_16] [i_16]), (((/* implicit */unsigned short) arr_47 [i_16 + 1] [i_16])))))), (max((((unsigned short) arr_53 [i_15] [i_16] [i_17] [i_18] [i_18] [i_18])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_52 [i_15] [i_16])))))))));
                            var_30 |= ((/* implicit */unsigned short) max((arr_45 [i_16 + 2]), (((/* implicit */long long int) arr_52 [i_15] [i_15]))));
                            var_31 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_52 [i_16 + 1] [i_16 + 2]))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (+((+(var_6)))))) ? (var_12) : (((/* implicit */int) ((((var_13) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) arr_50 [12LL] [i_16] [i_15])))) != ((+(((/* implicit */int) arr_48 [(short)6] [i_16]))))))))))));
            }
        } 
    } 
}
