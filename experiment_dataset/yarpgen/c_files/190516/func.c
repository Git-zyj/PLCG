/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190516
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
    var_10 = (_Bool)0;
    var_11 = max((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (var_5)))), (((/* implicit */long long int) var_9)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((!(arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) ((int) 1817034977))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2241133602432421947LL)))))) : (((long long int) var_3))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */int) ((var_2) != (var_3)))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */long long int) (signed char)-65);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_19 [(short)16] [i_1] [i_1] [(unsigned short)11] [i_3] = ((/* implicit */unsigned char) 2241133602432421959LL);
                                arr_20 [i_3] = ((/* implicit */short) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 6309918641123202363ULL)))))));
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) 0);
                }
            } 
        } 
        arr_23 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0];
        arr_24 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
    }
}
