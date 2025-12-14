/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196790
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
    var_20 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (signed char)-26);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) var_18);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) var_18)))))) ^ ((-(var_10)))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_0 - 1]) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_4] [i_0 + 2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_0 + 2])))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0])) : (((/* implicit */int) var_14))));
            var_24 &= ((/* implicit */unsigned short) var_3);
        }
        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)46476));
                            var_26 *= ((/* implicit */signed char) min((max((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_6] [i_7 - 2] [i_9]))))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((arr_23 [i_9] [i_9 - 1] [i_9] [(_Bool)1] [i_9 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_7 [(signed char)0])))))))))));
                            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_9 - 1] [i_9 - 1] [i_8] [i_7] [i_9]))))), (((((((/* implicit */_Bool) arr_23 [i_0] [(_Bool)1] [i_0] [i_7] [i_0])) && (((/* implicit */_Bool) var_4)))) ? (((unsigned int) var_14)) : (min((((/* implicit */unsigned int) var_18)), (var_12)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                arr_29 [i_0] [i_6] [i_10] [9ULL] = ((((/* implicit */_Bool) ((signed char) arr_21 [i_0 + 3] [6ULL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_4), (arr_11 [i_0 + 2] [i_0] [i_0] [(unsigned short)14] [i_0 + 3]))), (((/* implicit */unsigned short) min((var_0), (((/* implicit */signed char) arr_26 [i_0] [i_0] [i_6] [i_6]))))))))) : ((-(0ULL))));
                arr_30 [(signed char)16] [(signed char)16] [(_Bool)1] [(signed char)16] = ((/* implicit */_Bool) ((signed char) 15606576288004282149ULL));
            }
        }
        var_28 = ((/* implicit */unsigned short) ((signed char) arr_21 [i_0 - 1] [(_Bool)1]));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    arr_37 [i_13] [i_12] [i_12] [i_12] = ((/* implicit */signed char) arr_16 [i_11 - 1]);
                    var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                    var_30 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        arr_38 [i_11] = ((/* implicit */_Bool) ((arr_31 [i_11 + 1] [i_11 - 1]) & (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
        arr_39 [i_11 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        var_31 = ((/* implicit */signed char) ((2274797445U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
}
