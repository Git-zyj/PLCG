/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24886
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_1 - 1] [i_2] [i_3 - 2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3])))), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0])));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4 - 2] [i_2] = ((/* implicit */unsigned long long int) ((arr_5 [i_3] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 4; i_5 < 7; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [(unsigned short)2] [i_6] [i_6] |= ((/* implicit */signed char) min((((18446744073709551581ULL) << (((/* implicit */int) (_Bool)1)))), (arr_0 [i_5 - 2])));
                arr_21 [i_5] = ((/* implicit */unsigned char) max((arr_11 [i_5] [i_5] [i_6] [i_6] [i_6 - 1] [i_6] [(_Bool)1]), (((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_14 [i_6])))), (arr_15 [i_5] [i_5]))))));
            }
        } 
    } 
}
