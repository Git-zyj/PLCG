/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20453
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
    var_18 &= ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) arr_5 [i_0]);
            arr_7 [(_Bool)1] = ((/* implicit */signed char) (~((-(arr_0 [i_1])))));
        }
        for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 3]))));
            var_20 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2 + 3])) - (((/* implicit */int) arr_4 [i_2 + 1]))));
            arr_11 [i_2] [i_2] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 35184372088831ULL)) ? (963945328U) : (3U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)8)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_14 [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) (-(-6038015118150294888LL)));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 28LL)) & (arr_0 [i_0])));
            var_22 += ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) % (-844698453309620636LL)))));
        }
        arr_15 [(short)13] [i_0] = ((/* implicit */long long int) ((arr_4 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        var_23 *= ((/* implicit */unsigned int) ((long long int) 10116424786461119327ULL));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (arr_12 [i_4] [i_5] [i_6]) : (arr_12 [i_4] [i_5] [i_6]))));
                    var_25 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_3)))));
                    arr_24 [i_4] [i_5] = ((/* implicit */short) ((((unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4]))))))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_6]))) ? (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (arr_13 [i_4]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_29 [i_4] [i_4] = ((/* implicit */long long int) ((((long long int) arr_18 [i_4])) <= (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_27 [i_7]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))) : ((+(((/* implicit */int) (signed char)-8)))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_27 *= ((long long int) (!(arr_21 [i_8] [i_7])));
                        var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_16 [i_8] [i_7])) : (((/* implicit */int) (signed char)15)))), ((+(((/* implicit */int) arr_33 [i_9] [i_9]))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_7])), (arr_5 [i_4])))) ? (((unsigned long long int) min((arr_27 [i_7]), (((/* implicit */long long int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_9 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))))))))));
            var_30 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-2))))) ? (2147483647ULL) : (((/* implicit */unsigned long long int) ((arr_25 [i_4]) / (((/* implicit */int) ((_Bool) arr_0 [i_7])))))));
        }
    }
    var_31 |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) max((5996807872238563446LL), (((/* implicit */long long int) 481131053))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
    var_32 *= var_4;
    var_33 = ((/* implicit */_Bool) (short)-1);
}
