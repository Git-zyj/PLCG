/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195222
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
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_5)), (((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) << (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_3] [i_1])), (arr_2 [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2 + 2] [i_1] [i_2])) && (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 - 2] [(signed char)19] [i_2]))))));
                            arr_11 [i_0] [(short)1] [(short)6] [i_2] = ((/* implicit */signed char) min((arr_2 [i_2 + 2]), (max((max((((/* implicit */unsigned int) arr_4 [i_0])), (arr_0 [(signed char)6]))), (arr_9 [i_0] [(short)5] [i_2] [i_3] [i_3])))));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(signed char)13] [(signed char)13] [i_3]))) <= (arr_9 [i_0] [i_0] [i_3] [i_3] [i_3])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [(signed char)12])))))))) <= (arr_9 [i_0] [i_0] [i_1] [i_3] [1U])));
                            var_20 = min((min((((/* implicit */unsigned int) max((arr_8 [i_0] [i_1] [i_1] [i_0] [i_3]), (arr_5 [i_1] [i_2] [i_3] [i_0])))), (((arr_0 [i_1]) + (arr_9 [(signed char)6] [i_1] [i_2] [i_3] [(signed char)12]))))), (arr_9 [i_3] [(short)11] [i_2] [i_1] [i_0]));
                            arr_12 [i_2] [i_1] [i_1] [i_1] [(signed char)15] = ((/* implicit */short) arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_3]);
                        }
                    } 
                } 
                var_21 &= arr_9 [(signed char)7] [i_1] [15U] [i_1] [i_1];
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_22 *= ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)61), ((signed char)-62))))) - (min((arr_9 [i_0 + 1] [i_0 + 1] [i_5 + 3] [i_5 + 2] [i_5 + 1]), (((arr_2 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_5]))))))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                            {
                                arr_22 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_4])) == (((/* implicit */int) arr_13 [i_1] [i_4] [i_5]))))), (min((arr_9 [i_0] [i_1] [i_4] [i_5] [i_6]), (((/* implicit */unsigned int) arr_1 [i_1]))))))) && (((/* implicit */_Bool) min((arr_18 [i_6] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) 704789083U))))))))));
                                var_23 ^= arr_13 [i_0] [i_1] [i_4];
                            }
                            /* LoopSeq 3 */
                            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */signed char) max((((653709779U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)8899))))), (((653709786U) << (((3641257510U) - (3641257479U)))))));
                                var_25 = ((/* implicit */unsigned int) ((arr_20 [12U] [i_4] [i_7]) <= (max((max((arr_18 [2U] [i_1]), (arr_18 [i_4] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_4] [i_4])) == (((/* implicit */int) arr_6 [20U] [(signed char)3] [i_5] [i_5])))))))));
                            }
                            for (short i_8 = 4; i_8 < 20; i_8 += 4) 
                            {
                                arr_28 [i_5] = ((/* implicit */signed char) max((((arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1]) + (arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1]))), (arr_17 [i_5 + 2] [i_5] [i_5] [i_0 + 1])));
                                var_26 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */int) (short)-8900)) % (((/* implicit */int) (signed char)-65))))) % (arr_17 [i_5] [i_5 + 2] [i_5] [i_5]))), (min((arr_19 [i_0 - 1] [i_8] [i_5 + 1] [i_8 - 2] [i_0]), (((/* implicit */unsigned int) arr_7 [i_5] [i_5 + 2] [i_5]))))));
                                arr_29 [10U] [i_5] [(signed char)11] [i_5] = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */short) (signed char)-61))))), (((((/* implicit */int) arr_10 [17U] [i_5] [i_4] [i_4] [i_8])) << (((((/* implicit */int) arr_10 [i_0 - 1] [i_5] [(short)4] [i_0 + 1] [i_8 - 2])) - (25177)))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */short) (signed char)-61))))), (((((/* implicit */int) arr_10 [17U] [i_5] [i_4] [i_4] [i_8])) << (((((((/* implicit */int) arr_10 [i_0 - 1] [i_5] [(short)4] [i_0 + 1] [i_8 - 2])) - (25177))) + (11342))))))));
                                arr_30 [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) arr_0 [i_0]);
                            }
                            /* vectorizable */
                            for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                            {
                                var_27 &= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) & (((/* implicit */int) (short)20002))));
                                var_28 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) * (arr_18 [i_0 + 1] [i_5 + 2]));
                                var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [(short)12] [i_9])) != (((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_9] [i_9]))))) / (((/* implicit */int) arr_32 [i_5 + 2] [i_5 + 2] [i_5] [i_9 + 1] [i_9]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
