/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207367
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((unsigned short) -747670534030236541LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_0 [i_0] [3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [8]))) : (arr_1 [(_Bool)1] [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2193963868U))))))));
                arr_5 [0] = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [(unsigned short)22] [i_4] = ((/* implicit */int) var_12);
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_4 - 2]))) != (((((/* implicit */_Bool) arr_11 [i_2] [i_4 + 1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_4 + 1])))))));
                    arr_15 [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) arr_11 [i_4 - 1] [(signed char)7]);
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((-(1582783791))) & (((/* implicit */int) arr_9 [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), ((~(var_12)))));
}
