/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195139
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) arr_5 [i_3] [i_0]);
                            arr_10 [i_3] [i_2] = (!((!(arr_8 [i_2] [(_Bool)1] [(_Bool)1] [i_2 - 1] [i_2 + 1]))));
                            arr_11 [i_0] [i_0] [8ULL] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (arr_5 [i_0] [i_0])));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [(unsigned char)7] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                {
                    arr_21 [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_20 [i_6] [i_4] [i_6]), (arr_20 [i_6] [i_6 + 3] [i_6])))), (max((arr_15 [i_6 + 2] [i_4 - 1]), (((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_5])), (arr_18 [i_6 + 1] [i_5] [i_4]))))))));
                    arr_22 [i_6] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_13 [i_5] [i_5]))))))), (arr_15 [i_4 + 1] [i_4 + 1])));
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5]))));
                    arr_23 [i_6] = ((/* implicit */unsigned int) arr_17 [i_4 - 1]);
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                {
                    arr_26 [i_7] [i_5] = ((/* implicit */int) arr_14 [i_5]);
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1]))));
                                var_13 = ((/* implicit */unsigned long long int) arr_16 [i_4 - 1]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_38 [i_4] [i_10] [i_4] [i_4] [i_10] = ((/* implicit */unsigned short) arr_29 [i_4 - 1] [i_4 - 1] [i_10] [i_10]);
                            /* LoopSeq 1 */
                            for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                            {
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_12]))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_4]))))))))));
                                var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_4 + 1]))))), (min((arr_40 [i_11] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_5] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_25 [i_4 - 1]))))))));
                            }
                            var_18 = ((/* implicit */short) min((var_18), (arr_14 [i_4 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_2);
}
