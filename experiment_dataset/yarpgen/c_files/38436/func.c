/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38436
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */signed char) arr_2 [i_2]);
                    arr_8 [0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */unsigned char) var_7);
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (min((1432467600), (((/* implicit */int) arr_1 [i_0 - 1]))))));
                    arr_9 [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 3; i_3 < 8; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_17 [i_3 - 1] [i_3] [i_3 + 2] [i_3] = ((/* implicit */short) min((min((var_8), (((/* implicit */int) arr_14 [i_3 - 1] [i_5] [i_5])))), (((/* implicit */int) min((arr_14 [i_3 - 2] [i_4] [i_5]), (((/* implicit */signed char) var_7)))))));
                    var_13 ^= ((/* implicit */signed char) (+(min((((/* implicit */int) arr_10 [i_3 + 2] [i_4])), (max((var_3), (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_0);
}
