/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198256
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (~(((unsigned long long int) ((var_5) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 &= ((/* implicit */long long int) arr_1 [i_1]);
                            arr_14 [i_0] [i_2] [i_1] [(short)2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned int) ((unsigned short) arr_2 [i_2 + 2])))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) arr_8 [i_0] [i_5] [i_6 - 1] [i_0]);
                                arr_24 [i_0] [i_1] [i_4] [i_4] [i_6] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_6])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_6 - 2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 - 2] [i_6 - 2]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_5] [i_5] [12])), (arr_10 [i_0] [8ULL] [11LL] [i_5] [(unsigned char)9])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [3] [i_4] [i_5]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    var_20 = ((/* implicit */short) ((arr_22 [i_7 - 1] [i_1] [i_7 - 1] [i_0] [i_1] [i_1] [i_7 + 1]) || (((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7] [i_7 - 1]))));
                    var_21 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_7 - 2])) : (((/* implicit */int) arr_2 [i_7 - 2]))))));
                    arr_28 [i_7 + 1] [i_7 - 1] [12LL] = ((/* implicit */short) var_2);
                    var_22 &= ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_1] [i_1]);
                }
                var_23 = ((/* implicit */_Bool) max((arr_25 [i_1] [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_9 + 1] [i_8] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1933496412)), (0ULL)))) ? (max((arr_19 [i_0]), (arr_12 [i_1] [i_1]))) : (((/* implicit */int) arr_25 [i_8] [i_9 + 1] [i_9 + 1] [16ULL]))))));
                            arr_34 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) min(((-(((/* implicit */int) arr_9 [i_0])))), (max((((/* implicit */int) arr_8 [i_9] [i_0] [i_9 + 1] [i_9 + 1])), (arr_13 [i_1] [i_8]))))));
                            arr_35 [i_9] [i_1] = ((/* implicit */_Bool) var_15);
                            var_25 &= ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_0)), (arr_16 [i_9] [i_9 + 1] [i_9 + 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [1ULL])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (max((var_11), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_16);
}
