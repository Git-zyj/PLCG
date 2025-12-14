/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4356
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
    var_19 = ((/* implicit */unsigned short) var_18);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1472)) : (((/* implicit */int) var_18)))) - (1458)))))) ? (((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18751)))))) ? (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : ((-(var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((3239649138U) - (3239649132U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) var_4)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((arr_8 [(unsigned short)8] [(unsigned short)8] [i_1 - 2] [i_4 - 3] [i_4] [(signed char)4]) ? (((((/* implicit */int) arr_2 [(signed char)12])) / (4194303))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [3] [i_3] [i_3]))))));
                            arr_13 [i_2] [i_1] [i_2] [i_1 + 1] [i_2] [i_3] = ((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) arr_12 [i_3] [i_3 + 1])));
                        }
                        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_3 - 2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                {
                    arr_19 [i_0] [i_0] [i_6 + 3] [i_0] = ((/* implicit */unsigned short) 1U);
                    arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)46785))))) + (((/* implicit */int) var_5))));
                    arr_21 [0U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5] [i_5 + 3] [i_5 + 2]))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0]));
    }
    var_23 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))))), ((+(((/* implicit */int) var_1))))));
}
