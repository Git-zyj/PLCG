/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39608
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
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [4] &= ((/* implicit */signed char) arr_1 [(signed char)0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (unsigned char)15);
                            arr_12 [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1380402527))))) - (((/* implicit */int) ((((2781400286U) >> (((/* implicit */int) (_Bool)0)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 2]))))))));
                            arr_13 [i_0] [i_0] [i_3] [(unsigned short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 + 2] [i_3])) >= (((/* implicit */int) (unsigned char)157)))) ? (((/* implicit */unsigned long long int) ((arr_4 [(unsigned char)13] [i_1 - 1]) & (((/* implicit */int) arr_6 [i_0] [i_2]))))) : (((unsigned long long int) 143450260808230755ULL))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) var_3))), (max((((/* implicit */unsigned short) (unsigned char)157)), (arr_1 [i_3]))))))));
                            arr_14 [i_0 - 3] [i_0 - 3] [i_0] [3ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_1 + 2])) ? (((/* implicit */int) arr_9 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1 + 1])))) + (((/* implicit */int) max((arr_9 [i_1 - 1]), (arr_9 [i_1 + 2]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                            {
                                arr_18 [i_0] [11ULL] [i_2] [11ULL] = ((/* implicit */short) ((((unsigned long long int) arr_8 [i_0] [i_2])) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_10 [i_0] [(signed char)22]))))))));
                                arr_19 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_20 [(signed char)7]))))));
        arr_24 [i_5] = ((/* implicit */int) ((long long int) ((min((arr_3 [i_5]), (((/* implicit */int) arr_2 [i_5] [i_5])))) / (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    var_13 = ((/* implicit */signed char) var_3);
}
