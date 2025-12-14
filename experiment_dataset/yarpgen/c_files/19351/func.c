/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19351
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) var_10)) % (var_13))) / (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                var_16 += ((/* implicit */unsigned short) arr_0 [(unsigned char)10]);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) (unsigned short)19728)) ? (11365083962179725956ULL) : (((/* implicit */unsigned long long int) 485358351693677680LL))))));
                    var_18 = ((/* implicit */short) var_0);
                }
                arr_9 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0] [(short)9] [i_0]);
            }
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2]))) : (arr_11 [14ULL] [i_1] [i_4]))))));
                    arr_17 [i_0] [i_0] [i_0] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5])) : (((/* implicit */int) arr_16 [i_5] [i_0] [i_0]))))));
                }
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_14))));
            }
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                arr_21 [(short)9] [i_1 - 2] [(short)9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_6] [i_1 - 2]))) > (var_2)));
                arr_22 [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1]))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) ((((/* implicit */int) arr_16 [i_6] [i_6] [i_0])) != (arr_18 [i_0] [i_0] [i_6])))))));
                var_22 = ((/* implicit */unsigned short) ((long long int) 8388607ULL));
                arr_23 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_0])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_0]))));
            }
            arr_24 [(short)7] [i_0] [i_0] = ((/* implicit */short) 9152764075448369547LL);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_31 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_0] |= ((/* implicit */signed char) ((arr_5 [i_1] [(signed char)12] [i_1 - 1] [i_1 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_32 [i_0] = ((/* implicit */signed char) ((arr_11 [i_7] [i_7] [i_0]) < (arr_11 [i_0] [i_0] [i_0])));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-((-(((/* implicit */int) var_12)))))))));
                    }
                } 
            } 
        }
        arr_33 [(short)10] [i_0] &= min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [(short)2] [i_0])) && (((/* implicit */_Bool) var_6))))), (((long long int) arr_29 [i_0] [(unsigned short)4] [(signed char)7])))), (((/* implicit */long long int) arr_20 [(short)10] [i_0] [i_0] [14])));
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_8))), (((/* implicit */unsigned int) arr_36 [i_9]))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_9])))))))))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_25 = ((/* implicit */long long int) arr_34 [i_9] [i_9]);
            var_26 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_8)))))));
        }
        arr_40 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_34 [i_9] [i_9]), (arr_34 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_9] [i_9]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) ^ (14673575465457281051ULL)))));
    }
    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) & (var_5))))));
}
