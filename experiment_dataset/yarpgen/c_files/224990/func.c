/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224990
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = var_9;
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_1] [i_1])), (((((/* implicit */int) arr_4 [i_1] [i_1])) - (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_7))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (var_5))))))));
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
    {
        for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((short) 5345768326073112608ULL))))), (((/* implicit */int) (!((_Bool)1))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (max((134217600), (((/* implicit */int) (unsigned short)18917)))))))));
                    arr_16 [i_3] [i_3] [i_3] = arr_12 [i_5] [i_4 - 1] [i_5] [i_4 - 1];
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_12);
}
