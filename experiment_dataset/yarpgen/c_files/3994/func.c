/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3994
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) arr_0 [i_0])));
        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [1ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)125), (arr_0 [(_Bool)1]))))) : (((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((unsigned long long int) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)32765)))), (min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            arr_9 [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) min((max((arr_8 [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
            arr_10 [(unsigned short)16] &= ((/* implicit */signed char) min((max(((-(arr_8 [i_1] [i_2 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30419)) * (((/* implicit */int) (short)30412))))))), (((/* implicit */unsigned long long int) (unsigned short)42784))));
            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2]))))), (min((arr_7 [i_1] [i_1] [i_2 + 3]), (arr_7 [i_1] [i_1] [i_2 + 1])))));
            arr_12 [i_1] = ((/* implicit */unsigned int) ((unsigned char) max((((((/* implicit */_Bool) (unsigned short)36425)) ? (2358003898U) : (arr_4 [i_1]))), (((/* implicit */unsigned int) max((arr_6 [i_2] [i_1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1] [i_2])))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_19 *= ((/* implicit */int) min((min((arr_13 [i_1] [(signed char)22] [i_1 + 1]), (arr_4 [i_4 - 3]))), (((/* implicit */unsigned int) ((0) & (0))))));
                        var_20 = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_4 + 2] [i_1])))));
                        var_21 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_18 [i_2 + 1] [i_2] [i_3] [i_1])), (arr_6 [i_1] [i_1] [i_3])))), (min((((/* implicit */unsigned long long int) arr_15 [i_1] [i_2] [(_Bool)1] [i_4])), (arr_8 [i_3] [i_2]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_22 *= ((/* implicit */unsigned long long int) min(((+(arr_4 [i_1 + 1]))), (min((((/* implicit */unsigned int) min((var_6), (((/* implicit */short) (signed char)-47))))), (max((var_3), (arr_13 [i_5] [(_Bool)0] [i_1 + 1])))))));
            var_23 *= min((((unsigned int) (signed char)66)), (((/* implicit */unsigned int) min((-1644797876), (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        var_24 *= min((((((/* implicit */_Bool) ((unsigned char) (unsigned short)33226))) ? (max((((/* implicit */unsigned int) arr_19 [i_6] [i_6])), (arr_13 [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6]))))))), (((/* implicit */unsigned int) min((arr_22 [i_6]), (arr_22 [i_6])))));
        var_25 = ((/* implicit */_Bool) max((var_25), ((!(((/* implicit */_Bool) min((((/* implicit */int) ((short) (_Bool)1))), (-15))))))));
        arr_25 [i_6] = ((/* implicit */signed char) arr_24 [i_6] [i_6]);
    }
    var_26 = ((/* implicit */int) max((var_26), (max((1644797876), (((/* implicit */int) (signed char)30))))));
}
