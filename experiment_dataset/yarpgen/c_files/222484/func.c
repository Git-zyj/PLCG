/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222484
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
    for (int i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [i_0 + 4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((9818963799692064562ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2])))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned short)35289)))) : (((/* implicit */int) arr_4 [i_0]))))));
                arr_8 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (max((((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) - (arr_5 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned short)3765)))))));
                arr_9 [i_0] [i_0] = ((/* implicit */int) (-(((arr_3 [i_0]) >> (((((/* implicit */int) (unsigned short)30246)) - (30242)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_15 [i_3] [i_3] = ((/* implicit */_Bool) ((int) ((unsigned long long int) ((((/* implicit */_Bool) 802480592279728325LL)) ? (((/* implicit */int) (short)-26647)) : (((/* implicit */int) arr_11 [i_3]))))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_23 [1ULL] [i_3] [i_4] [i_2] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551596ULL)))) ? (((unsigned long long int) arr_11 [15U])) : (((/* implicit */unsigned long long int) max((-802480592279728323LL), (((/* implicit */long long int) (short)-15340)))))))) ? (((unsigned int) arr_19 [i_2] [i_4])) : (((unsigned int) arr_22 [i_2]))));
                                arr_24 [i_2] [i_3] [i_2] [i_3] [i_3] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 2])) : (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 2] [i_2 - 1])))), (((/* implicit */int) arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
