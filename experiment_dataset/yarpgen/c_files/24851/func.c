/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24851
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((arr_7 [5ULL] [4ULL] [8ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-122)) : (var_12)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [0] [(unsigned short)0] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 2013265920));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_4 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 + 2])) > (((/* implicit */int) arr_1 [i_2]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))));
                                arr_15 [7LL] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = arr_11 [(unsigned char)10] [i_3] [(signed char)1] [i_3] [11LL] [i_3];
                            }
                        } 
                    } 
                    arr_16 [i_0] [(signed char)0] [i_2] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [6LL] [i_0] [i_0] [i_0] [(short)6] [(signed char)10]);
            arr_20 [i_0] [i_0] [3] = ((/* implicit */unsigned short) arr_10 [i_0] [(_Bool)1] [(unsigned short)6] [6] [i_0]);
            arr_21 [(short)11] [(_Bool)1] = (-(((/* implicit */int) arr_1 [i_5])));
        }
    }
    var_22 = ((/* implicit */int) (short)8128);
}
