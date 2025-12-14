/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195112
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
    var_16 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_9 [i_1] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_3]))));
                        arr_10 [i_0] [i_1] [i_2] [(_Bool)1] &= ((/* implicit */long long int) ((unsigned char) var_4));
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) arr_7 [i_3]);
                        arr_12 [(signed char)4] = ((/* implicit */signed char) arr_7 [(short)0]);
                        arr_13 [i_0] [(unsigned short)12] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 924685170U);
                                arr_21 [i_5] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), ((-(arr_7 [i_4])))))) ? (((/* implicit */int) ((arr_7 [i_4]) == (((/* implicit */long long int) ((/* implicit */int) (short)20204)))))) : (((/* implicit */int) arr_5 [i_1]))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_0] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) 14661397495487037563ULL)) ? (250395262294076630LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))))), (((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_0] [(unsigned short)16] [i_2] = ((/* implicit */unsigned char) arr_0 [i_1]);
                        arr_27 [i_6] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_15 [i_0])))) == (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                        arr_28 [i_1] [i_1] [i_0] [i_6] [i_2] [i_0] = ((((/* implicit */_Bool) (short)20204)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_6] [i_2] [i_1] [i_0]));
                        arr_29 [i_0] [i_0] [i_1] [i_6] [i_2] [i_6] = 7LL;
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) % (((/* implicit */unsigned long long int) var_15))));
}
