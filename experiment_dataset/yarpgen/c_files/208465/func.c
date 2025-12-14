/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208465
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned short i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_3 - 2] [i_4 - 3]);
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [(short)10] [i_1] [i_2 + 1] [i_3 + 1] [i_4 + 2])) ? (arr_7 [i_0] [i_1 - 1] [i_2] [i_2] [8U]) : (arr_7 [i_1 + 1] [i_3] [i_2 - 1] [i_1 + 1] [i_0]))) & (min((arr_7 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]), (arr_7 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(min((arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3 + 1]), (arr_8 [i_1 + 1] [i_2] [i_2 + 1] [i_3 + 1]))))))));
                            arr_13 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((arr_8 [i_4] [i_3 - 2] [i_1] [i_0]), (4114747496U)));
                            var_22 = ((/* implicit */_Bool) ((min((-4865580246753180752LL), (((/* implicit */long long int) arr_7 [i_1 - 1] [i_3 - 2] [i_4 - 3] [i_3 - 2] [(_Bool)1])))) / (((/* implicit */long long int) arr_7 [i_1 + 2] [i_3 - 2] [i_4 - 1] [11ULL] [5]))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_2 + 1] [i_2])))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) arr_5 [i_0])), ((~(((/* implicit */int) arr_0 [1]))))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (arr_1 [i_2])));
            }
            arr_15 [i_0] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) (signed char)77);
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_1] [1ULL] [i_7] [i_7] [i_7] = var_13;
                            var_24 = ((/* implicit */unsigned char) arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((1126474461U), (((/* implicit */unsigned int) arr_1 [i_5]))))))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5] [i_5] [i_7])) : ((+(((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_7] [i_5] [i_7 - 1])))))))));
                            arr_24 [i_0] [i_0] [i_5] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) arr_11 [i_1 + 2]))), (((unsigned int) min((((/* implicit */unsigned int) var_7)), (4114747498U))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (short)25462))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 13973171230944210219ULL)) ? (((((/* implicit */_Bool) 2139750873U)) ? (180219802U) : (((((/* implicit */_Bool) (unsigned char)251)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (1716855807U)));
            arr_29 [i_8] [(unsigned short)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_8] [i_8 + 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_8] [i_8 + 4])) ^ (((/* implicit */int) (unsigned char)212))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8 + 2]))) | (18446744073709551602ULL)))));
            arr_30 [i_0] [5] = ((/* implicit */_Bool) var_12);
            var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_5), (var_4))))))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */int) arr_1 [i_0]))))) ? (min((13186361945812277568ULL), (((/* implicit */unsigned long long int) (short)-25463)))) : (((/* implicit */unsigned long long int) (+(2795681924593487457LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) 18446744073709551592ULL)) && (((arr_10 [i_8] [i_8] [(short)0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))))));
        }
        arr_31 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) != (min((arr_10 [i_0] [10ULL] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 7927244170072487034LL))))))), (min((((((/* implicit */_Bool) var_2)) ? (var_13) : (arr_7 [i_0] [i_0] [(unsigned char)2] [i_0] [2ULL]))), (((/* implicit */int) arr_19 [i_0]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */long long int) arr_16 [i_9] [i_9]);
        arr_35 [i_9] = ((/* implicit */unsigned long long int) (signed char)-8);
    }
    var_29 = ((/* implicit */unsigned long long int) var_14);
}
