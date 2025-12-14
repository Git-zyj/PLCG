/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212368
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
    }
    for (signed char i_1 = 1; i_1 < 6; i_1 += 3) 
    {
        arr_6 [i_1 + 3] [i_1 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_1]))))) & (arr_0 [i_1 - 1] [i_1 + 2]))) >> (((max((((/* implicit */long long int) var_14)), (arr_1 [i_1]))) - (7725231474573477340LL)))));
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) >= ((-((+(var_11)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_0 [22ULL] [i_1 + 4])));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)43833);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 3])) & (((/* implicit */int) arr_4 [i_1 - 1])))), (((((((/* implicit */int) arr_4 [i_1 + 4])) + (2147483647))) << (((var_16) - (1702362175)))))));
    }
    for (short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_20 = ((((arr_13 [i_2 + 1] [(_Bool)1] [i_4]) | (arr_13 [i_2 + 1] [6U] [i_4]))) - ((-(arr_13 [i_2 + 1] [i_3] [i_2]))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((((/* implicit */int) arr_11 [i_2 + 1])) ^ (((/* implicit */int) arr_11 [i_2 + 1])))) : (((/* implicit */int) arr_15 [i_2 + 2] [i_4 + 2]))));
                        arr_22 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2])) <= (((/* implicit */int) arr_21 [i_2 + 1]))))) - (((/* implicit */int) arr_11 [i_2 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_20 [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))))) : (((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_2])))) ? (arr_13 [i_4 - 1] [i_4] [i_4 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) (signed char)-38)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_27 [i_2 - 1] [i_6] [i_7] = var_9;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_6 - 1] [i_2 + 1] [i_2 + 1] [i_8] [i_2 + 1] [(unsigned short)18])) << (((arr_30 [i_2 - 1] [i_2 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 1]) - (2336558424123366123ULL)))));
                        var_23 = arr_23 [i_2];
                    }
                }
            } 
        } 
        arr_31 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_11 [i_2 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) arr_15 [i_2 + 2] [i_2 - 2])) : (((/* implicit */int) var_8)))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))))) ? ((+(max((arr_17 [(short)7] [i_2] [(unsigned short)15] [(short)7]), (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2])))));
        arr_32 [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2 - 2] [i_2 + 1])) <= (((/* implicit */int) arr_14 [i_2] [(_Bool)1] [i_2]))))) : (((((/* implicit */_Bool) arr_26 [i_2 - 2])) ? (((/* implicit */int) arr_21 [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 + 2]))))));
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) % ((-(10975261109023096044ULL)))))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) - ((-(max((((/* implicit */unsigned int) var_15)), (var_6)))))));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (var_16)));
}
