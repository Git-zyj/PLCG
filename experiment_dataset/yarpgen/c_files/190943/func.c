/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190943
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = -2024833263;
                arr_4 [i_0] [i_1 + 1] [i_1] = ((/* implicit */signed char) max((arr_3 [i_0 + 1]), (((/* implicit */long long int) min((2955621350U), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_9 [i_2 + 1] = ((/* implicit */_Bool) var_0);
                arr_10 [(short)12] = ((/* implicit */int) var_3);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    arr_13 [i_2] [i_4] [i_4] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_1) != (((/* implicit */int) var_7))))) <= (((/* implicit */int) ((var_1) <= (var_1))))));
                    var_11 = ((/* implicit */unsigned char) -2024833253);
                    arr_14 [i_4] [i_4 - 2] [(signed char)12] [i_3] = ((/* implicit */long long int) ((_Bool) var_7));
                }
                var_12 = ((/* implicit */int) ((((/* implicit */int) ((signed char) min((((/* implicit */int) arr_8 [i_2] [i_3])), (var_6))))) != (((((/* implicit */_Bool) 67108832)) ? (((/* implicit */int) ((unsigned char) (unsigned short)35704))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)29806)))))))));
            }
        } 
    } 
}
