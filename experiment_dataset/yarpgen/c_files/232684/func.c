/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232684
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) ((int) -1748726200));
                                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) max((max((arr_10 [i_0] [i_3 + 3] [i_1 - 2] [i_3 - 1]), (arr_6 [(unsigned short)17]))), (((/* implicit */unsigned short) arr_1 [12]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_0]))))));
                            arr_19 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1] [i_1 - 2] [i_6])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 12; i_11 += 1) 
                        {
                            {
                                var_13 = var_2;
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(9700546131959997452ULL))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_29 [i_7] [i_9] [i_9] [i_8])) ? (((/* implicit */int) (unsigned short)63820)) : (((/* implicit */int) arr_15 [i_7] [i_9] [i_8] [i_9])))));
                }
            } 
        } 
    } 
}
