/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2114
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))), ((+((-(var_11)))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */signed char) arr_1 [i_0]);
                arr_5 [i_0] [i_0] [i_1] = arr_1 [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) arr_6 [0ULL] [0ULL]);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [(short)2] [3LL] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_4 = 3; i_4 < 22; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) arr_12 [i_4] [i_4]);
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            arr_26 [i_8] [i_5] [i_8] [i_7] [3U] [i_5] [i_4] = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_14 [i_6])), (((((/* implicit */_Bool) arr_20 [i_5])) ? (arr_12 [(signed char)7] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_7] [i_5] [i_5] [i_4]))))))), (((/* implicit */long long int) arr_21 [i_5]))));
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_4] [i_6] [i_6])), (arr_12 [i_4] [i_8])))))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_7] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_6] [17LL]))) : (max((arr_12 [i_4 - 3] [19]), (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_4])))))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)19)), (-4169928999043970636LL)))) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_5])))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_6]))))) : (arr_12 [i_8] [5]))))));
                        }
                    } 
                } 
            } 
            arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (max((((/* implicit */int) arr_21 [i_5])), ((~(((/* implicit */int) arr_20 [i_5])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_5] [i_4] [i_4])) ? (((/* implicit */int) arr_22 [8LL])) : (((/* implicit */int) arr_20 [i_4]))))) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_17 [i_4] [(signed char)13] [i_5])))) : (((arr_19 [i_4] [i_5] [i_5]) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_11 [i_4 + 1]))))))));
        }
    }
    for (short i_9 = 1; i_9 < 22; i_9 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [(short)18]))))) ? (((((/* implicit */_Bool) 4169928999043970653LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31634))) : (7668439945051372290LL))) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_29 [i_9]) : (arr_29 [i_9])))))) ? ((+(arr_29 [16]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4169928999043970653LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))) : (-4169928999043970653LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [(signed char)0])))))) : (arr_29 [i_9])))));
        arr_30 [i_9] = arr_28 [i_9];
        arr_31 [(_Bool)1] [i_9] |= ((/* implicit */unsigned int) arr_28 [i_9]);
    }
    for (short i_10 = 2; i_10 < 6; i_10 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) arr_9 [i_10] [(unsigned short)13] [i_10] [(unsigned short)13] [i_10] [i_10]);
        var_24 = ((/* implicit */int) (~(arr_16 [i_10] [i_10] [i_10])));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10 - 2]))) : (((max((arr_21 [i_10]), (arr_19 [i_10] [17ULL] [i_10]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_10] [i_10] [i_10])))))) : ((+(arr_7 [i_10] [11LL] [11LL] [i_10])))))));
        var_26 = ((/* implicit */signed char) arr_1 [i_10]);
    }
}
