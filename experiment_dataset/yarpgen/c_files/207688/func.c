/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207688
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_5 [i_0])))), (var_9)));
                var_14 = ((/* implicit */signed char) max((((((_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_1])), (var_0)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
            {
                {
                    arr_16 [i_4] [i_4] [i_2 - 1] = ((/* implicit */_Bool) ((int) min(((_Bool)1), ((_Bool)1))));
                    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_14 [i_2 + 3] [i_4])) - (((/* implicit */int) var_6)))), (((/* implicit */int) arr_7 [i_3]))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_2 - 3]);
        var_17 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = max((((/* implicit */signed char) (_Bool)1)), ((signed char)57));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) min(((_Bool)1), (arr_18 [i_5] [i_5])))) : (((/* implicit */int) min((arr_18 [i_5] [i_5]), (arr_18 [i_5] [i_5]))))));
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) (unsigned short)46484)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) (unsigned char)20))))));
        arr_23 [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
    }
    var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_10))));
}
