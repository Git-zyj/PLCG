/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193150
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_10 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [i_2] [i_1]), (arr_5 [i_1])))) * (min((((/* implicit */unsigned long long int) var_5)), (var_7)))))) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (arr_0 [i_0])))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_7 [i_0] [i_0] [i_3]))))));
                            var_11 = ((/* implicit */_Bool) max((var_11), (((_Bool) min((arr_7 [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) min((((arr_18 [i_0] [i_1] [i_4] [i_4] [i_4] [i_6] [i_6]) ? (((((/* implicit */unsigned long long int) var_4)) * (var_1))) : (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [(signed char)6] [i_4] [i_5])))), (min((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_0] [i_5] [i_5])))));
                                arr_21 [i_0] [i_4] [i_1] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (2147483647)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_6)))), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9 + 1])) + (((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1])))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((arr_7 [i_9 + 1] [i_9 + 1] [i_9 + 1]) << (((((/* implicit */int) arr_19 [i_1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])) - (46639))))), (((/* implicit */unsigned long long int) (~(arr_2 [i_9 + 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 23; i_12 += 3) 
                {
                    for (int i_13 = 2; i_13 < 23; i_13 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_35 [i_10] [i_10] [i_10]) ? ((+(arr_30 [i_10] [i_10]))) : (((((/* implicit */_Bool) arr_30 [i_10] [i_12])) ? (((/* implicit */long long int) var_0)) : (arr_28 [i_10 + 2] [i_10 + 2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_10] [i_10] [i_12] [i_13])) ? (var_0) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) min((arr_34 [i_10] [i_11] [i_12] [(signed char)20]), (((/* implicit */int) var_2))))) : (var_7)))));
                            arr_38 [i_11] [i_11] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_33 [i_10 + 3] [i_11] [i_12 - 1]), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_0))) > (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11] [i_11])) ? (((/* implicit */int) var_2)) : (arr_34 [i_10] [i_10] [21] [21])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_5)))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (((var_4) + (((((/* implicit */_Bool) arr_32 [i_10])) ? (arr_30 [i_10] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_10] [(_Bool)1] [i_13 - 2])))))))));
                        }
                    } 
                } 
                arr_39 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3717451259U)) ? (3717451253U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197)))))) : (max((((/* implicit */unsigned long long int) var_4)), (arr_29 [i_10 - 1] [i_11])))))));
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_46 [22LL] [i_10] [i_10 + 1] [22LL] [16U] [i_11] [i_16 + 3])) && (((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10 + 2] [i_10] [(unsigned short)22] [18] [i_16 + 3])))) ? (((((/* implicit */_Bool) arr_46 [i_10] [6ULL] [i_10 + 1] [i_10] [6LL] [(unsigned char)8] [i_16 + 3])) ? (arr_46 [i_10] [i_10] [i_10 + 3] [(short)18] [(_Bool)1] [i_14] [i_16 - 3]) : (arr_46 [i_10 - 3] [i_10] [i_10 - 2] [i_10] [8] [i_11] [i_16 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10 - 4] [i_10] [12LL] [i_15] [i_16 + 2])) || (((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_10 - 1] [i_10] [(_Bool)1] [i_10 - 1] [i_16 + 3]))))))));
                                arr_47 [i_10] [i_11] [i_14] [i_10] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_37 [i_10 - 1] [i_10 + 1] [i_16 + 4] [i_16 + 3]))) ? (max((((/* implicit */unsigned long long int) arr_41 [i_10] [8ULL] [8ULL] [i_15])), (((((/* implicit */_Bool) var_0)) ? (arr_37 [i_10] [i_11] [i_14] [i_11]) : (var_3))))) : (((/* implicit */unsigned long long int) (+(var_6))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
