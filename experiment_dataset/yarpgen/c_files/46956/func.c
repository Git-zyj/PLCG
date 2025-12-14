/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46956
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_1] [18] [i_1] [i_0] = ((/* implicit */unsigned char) max((3052309223U), (((/* implicit */unsigned int) (((~(5))) <= ((-(((/* implicit */int) arr_0 [i_2] [i_3])))))))));
                                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_3 + 3] [i_3 + 3] [i_3] [i_3]), (arr_6 [i_3 + 3] [i_4 + 1] [i_3 + 3] [i_4])))) ? (((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_3 + 3] [4U] [4U] [i_4])) : (((/* implicit */int) arr_6 [i_3 + 3] [i_3 + 3] [i_3 + 3] [i_3 + 3])))) : (((/* implicit */int) (unsigned char)120))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (int i_7 = 3; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_0] [i_6] [i_6 - 1] [i_7]);
                                arr_20 [i_1] [i_5 + 1] = ((/* implicit */signed char) ((unsigned int) var_16));
                                arr_21 [19ULL] [i_1] [i_1] [i_1] [(short)16] [i_6] [21] = ((/* implicit */unsigned short) (~(((int) arr_6 [i_5] [i_5] [i_1] [i_0]))));
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_5 + 2] [i_6 + 1] [(unsigned short)3] = ((/* implicit */unsigned short) arr_19 [i_7] [i_1] [i_1] [i_0]);
                                arr_23 [i_0] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) min((arr_16 [i_5 + 2] [i_1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 - 1]), ((!(((/* implicit */_Bool) (unsigned char)64)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_22 = arr_5 [i_0] [i_1] [i_0];
                                var_23 *= min((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)120)) >> (((((/* implicit */int) arr_6 [12U] [i_8] [5LL] [2])) - (131)))))) / (arr_7 [i_10]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_10]))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)203)) ? (arr_19 [i_10] [i_1] [i_1] [i_0]) : (((/* implicit */int) arr_30 [i_0] [i_1] [i_8]))))), (min((3199387273U), (((/* implicit */unsigned int) (short)7666))))))) ? (13U) : (((/* implicit */unsigned int) ((arr_27 [i_0] [i_1] [i_1] [i_8] [i_9] [i_10]) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_8] [i_9] [i_10] [i_10])) : (((/* implicit */int) arr_1 [i_0] [i_9])))))));
                                arr_32 [i_0] [i_1] [i_1] [i_8] [10U] [i_1] [i_10] = ((/* implicit */unsigned short) arr_10 [i_8] [i_1]);
                                arr_33 [i_0] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) -1424194357))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            for (int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 3; i_14 < 13; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            {
                                arr_49 [i_14] [i_14] [i_13] [i_14 + 1] [i_15] = ((/* implicit */signed char) 1949270567362707782ULL);
                                var_25 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((1242658075U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_11] [i_12] [i_13 + 1] [i_11] [i_15] [i_11])))))), (((((/* implicit */_Bool) ((signed char) arr_27 [i_11] [i_11] [i_13 - 1] [i_14] [i_15] [(unsigned short)0]))) ? (((/* implicit */unsigned long long int) arr_34 [i_13 + 1])) : (9298070721856319605ULL)))));
                                var_26 = ((/* implicit */int) arr_43 [i_11] [i_12] [i_13 - 1] [i_14]);
                                arr_50 [i_15] [i_14] [2U] [i_14] [i_11] = ((/* implicit */short) (!(((((/* implicit */int) ((arr_25 [i_14]) || (((/* implicit */_Bool) (short)6016))))) <= ((~(((/* implicit */int) (short)-14331))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        for (int i_17 = 3; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned char) max((((/* implicit */int) arr_9 [i_13] [i_16])), ((-(((/* implicit */int) (signed char)-35))))));
                                var_28 += ((max((((/* implicit */unsigned long long int) arr_8 [i_11] [i_12] [i_11] [i_17 - 2])), (9298070721856319617ULL))) <= (((/* implicit */unsigned long long int) arr_18 [(unsigned short)4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
