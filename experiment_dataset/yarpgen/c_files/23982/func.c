/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23982
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
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [8U] [8U] [i_2] [i_3 + 1] [i_1 - 1] = ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)31019)) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) arr_2 [i_1 + 2]))))) == (((/* implicit */int) arr_5 [0LL] [0LL] [0LL] [i_0])));
                        arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] [i_2] = ((/* implicit */long long int) arr_2 [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_19 [i_6] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_20 [i_0] [i_4] = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0 + 1] [i_0]);
                        arr_21 [i_6] [i_0] [i_4] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) 4294967295U))) ? (arr_2 [i_6]) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_4] [i_0] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_0]))))))));
                        arr_22 [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) min((min((arr_15 [i_0] [i_0] [i_4] [i_5]), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_5] [i_6])) * (((/* implicit */int) arr_17 [i_5] [i_6]))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_5), (arr_8 [i_6] [i_5] [i_5] [i_4] [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) : (var_6))))))));
                    }
                } 
            } 
        } 
        arr_23 [10U] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_18 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19990)) ? (arr_4 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])) & ((~(((/* implicit */int) ((signed char) -1253485592)))))));
        arr_25 [2U] = ((/* implicit */_Bool) ((((((1253485591) / (1253485592))) * (min((((/* implicit */int) var_2)), (-1599683011))))) * ((+(((/* implicit */int) min((((/* implicit */short) (signed char)-81)), (arr_13 [i_0 + 1]))))))));
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_34 [i_8 - 1] [i_8] [i_8 - 1] [i_7 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-81))))) ^ ((~(var_3)))))), (var_7)));
                    arr_35 [i_7 + 1] [i_8] [i_9] |= ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
        arr_36 [i_7 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1253485592) : (1649205904)))) ? (arr_1 [12]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (1253485601) : (arr_28 [i_7 + 1] [i_7]))))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_30 [i_7] [i_7 + 1])))) : (((/* implicit */unsigned long long int) arr_33 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
    }
    var_12 = ((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6307))) : (var_0))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned char)15))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned int) ((unsigned char) 1649205904));
        arr_41 [i_10] [i_10] = ((/* implicit */signed char) var_6);
    }
}
