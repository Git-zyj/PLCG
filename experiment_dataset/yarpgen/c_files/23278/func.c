/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23278
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
    var_11 &= ((/* implicit */int) ((unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_10)))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_7)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_1 [i_0 + 1] [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((869950141) & (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) ((signed char) arr_2 [i_0 + 1]));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_13 [(_Bool)1] [i_1 - 1]);
                            arr_15 [5] [i_3] = ((/* implicit */_Bool) (-(926811709)));
                            arr_16 [i_3] [i_1] [i_1] [i_1] [i_2] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) < (arr_6 [i_1] [i_1]))))) : (arr_1 [i_0 - 1] [i_0 - 2])));
                            var_14 = ((_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_3]))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_2 [i_1]))))) ? (arr_12 [i_1] [i_0] [i_0] [i_1 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) (+(arr_7 [i_1 + 1]))))));
            arr_17 [3] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        }
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((~(arr_9 [i_0] [i_5] [i_0]))) << (((arr_12 [i_0] [i_0] [i_0] [i_5] [i_5]) - (6359960388563064986ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_5])), (arr_9 [i_0] [i_0] [i_5])))) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((((/* implicit */int) arr_2 [i_0 - 2])) & (arr_9 [i_0] [i_0] [i_5]))))) : (((((/* implicit */int) arr_19 [(_Bool)1] [i_5])) << (((/* implicit */int) arr_19 [i_5] [i_5]))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_5] [i_6 + 1] [i_7] = ((/* implicit */short) arr_1 [i_5] [i_7]);
                        var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_9 [i_0 + 1] [1LL] [i_0 - 1])))));
                        var_18 = ((int) (~(arr_21 [i_0] [i_5] [i_7] [i_0])));
                    }
                } 
            } 
            arr_26 [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_0 - 1])) ^ (((/* implicit */int) arr_18 [i_5] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_9 [i_5 + 2] [i_0] [3LL]) : (((/* implicit */int) arr_5 [i_0])))))))));
            arr_27 [i_0 + 1] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)6] [i_0] [i_0] [(_Bool)1]))) - (((unsigned long long int) arr_9 [i_5] [i_0] [i_0 - 2]))))) ? (((((arr_9 [i_0 - 1] [i_5 - 2] [i_5]) + (2147483647))) >> (((/* implicit */int) ((_Bool) arr_20 [i_0]))))) : (((((/* implicit */int) ((unsigned char) arr_6 [i_5] [i_0]))) % (((/* implicit */int) arr_8 [i_0 - 2] [i_5] [i_0] [i_0]))))));
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        arr_30 [i_8] = ((/* implicit */signed char) ((arr_29 [i_8 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8 - 1])))));
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((int) (~(((/* implicit */int) arr_28 [(signed char)7] [i_8])))));
            var_20 = ((/* implicit */int) arr_28 [i_9 + 1] [i_9 + 3]);
        }
        var_21 = ((/* implicit */int) ((arr_29 [(_Bool)1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8 - 1] [i_8 - 1])))));
        arr_34 [i_8] = ((/* implicit */int) (((_Bool)1) ? (1718245509958853394LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_22 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_3)) % (((/* implicit */int) ((short) var_5))))));
}
