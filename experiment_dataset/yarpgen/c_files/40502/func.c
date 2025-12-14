/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40502
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_2 - 1] [i_2 - 1])) ? (8ULL) : (((/* implicit */unsigned long long int) arr_4 [i_3] [i_0] [i_0] [i_0]))))))) * (((long long int) var_5)))))));
                        arr_9 [i_3] [i_2 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2 - 1] [i_2] [i_0 + 1] [i_1] [i_0] [i_1])), (max((12LL), (((/* implicit */long long int) arr_8 [13LL] [i_1] [i_2] [i_3]))))))) ? (8494295276643223200LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46)))));
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2 + 1]))) % (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (arr_2 [i_2])))), (max((((/* implicit */unsigned int) var_7)), (var_1))))))))));
                        arr_10 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1] [i_2 + 1]))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (var_4)));
                            arr_13 [i_2 + 2] [i_2 + 2] [i_2] [i_3] [(unsigned short)9] = ((/* implicit */signed char) var_8);
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_0] [i_0] [i_2 + 1] [(unsigned short)12]));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [15] [i_1] [9ULL] [i_3]))))))));
                            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_7] [i_6] [(short)8] = ((unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_0 - 3] [i_1]))))) * (var_0)));
                                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)16408)) && (((/* implicit */_Bool) var_4))))), (max((((/* implicit */long long int) (_Bool)1)), (6LL)))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)21429)) : (((/* implicit */int) var_6))))), (var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_3))));
    var_19 += ((/* implicit */signed char) var_2);
    var_20 = ((/* implicit */unsigned short) var_1);
    var_21 = var_10;
}
