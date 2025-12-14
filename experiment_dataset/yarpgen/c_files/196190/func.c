/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196190
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
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_14)) ^ ((-(1165626661))))), ((-(var_9)))));
    var_18 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_19 |= ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) / (426952036))) < (((/* implicit */int) (signed char)-11))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(850280828273277027LL))) >= (((/* implicit */long long int) ((unsigned int) 3273378254739221550LL)))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned short) (unsigned char)105);
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                var_20 &= ((/* implicit */_Bool) 376391455);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 3154041095U))));
                arr_13 [(unsigned char)19] [i_2] [i_3] &= ((/* implicit */short) var_10);
            }
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((min((arr_15 [i_5 + 1] [i_1]), (arr_15 [i_5 + 1] [i_1]))), (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_1])) ? (arr_15 [i_5 + 1] [i_2]) : (((/* implicit */long long int) 1867406165U)))))))));
                        var_23 = ((/* implicit */unsigned int) (unsigned char)102);
                        var_24 = var_3;
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (max(((-(((/* implicit */int) (short)949)))), (arr_18 [i_1]))))))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)27)) / (((((/* implicit */_Bool) 705507241751138087ULL)) ? (((/* implicit */int) var_2)) : (arr_18 [i_1])))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) 1784096094U)) < (((unsigned long long int) var_12)))));
        arr_22 [i_6] = ((/* implicit */signed char) var_16);
        var_28 = ((/* implicit */_Bool) (unsigned char)99);
    }
}
