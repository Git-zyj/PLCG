/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25017
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
    var_11 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)110));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_3 [i_0] = ((/* implicit */int) (+(var_7)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_3 - 1])) ? (3221225472U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((int) (unsigned char)0));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((((/* implicit */unsigned long long int) ((1073741836U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))))) != (arr_1 [i_0]));
    }
    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        var_13 |= ((unsigned int) ((((/* implicit */_Bool) 3221225472U)) ? (9057404480280675933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90)))));
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */short) var_8)), (var_0))))));
            arr_19 [i_4] = (+(((/* implicit */int) (!(((/* implicit */_Bool) max((1073741819U), (((/* implicit */unsigned int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            arr_24 [i_4] = ((/* implicit */short) (signed char)-117);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_31 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 - 2] [i_6 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_8 [i_6 + 1] [i_4 + 1])) : (((/* implicit */int) arr_5 [i_6 - 2] [i_6 - 2] [i_4 + 1]))));
                        arr_32 [i_4] [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) var_1);
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4 - 1] [i_6 - 2])) && (((/* implicit */_Bool) arr_8 [i_4 - 1] [i_6 - 3]))));
                        var_16 = var_6;
                        arr_33 [i_4] [i_6] [i_6] [i_4] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_6 - 2]))));
                    }
                } 
            } 
            arr_34 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((arr_1 [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_17 = ((/* implicit */_Bool) ((arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1]) ? (arr_25 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9 - 1] [i_9 - 1] [i_9 - 1])))));
                arr_37 [i_4] [i_4] [i_9] = ((/* implicit */_Bool) arr_11 [i_9 - 1] [i_4 - 2] [i_4] [i_4] [i_4] [i_4]);
            }
        }
    }
    var_18 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)255));
}
