/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206058
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
    var_12 = var_5;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (max((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_0]))), (min((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    var_14 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_4 [i_1 + 1] [i_1 + 2])) : (min((var_4), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_0]))))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_15 = var_4;
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1436144130U), (var_1)))) ? (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_3] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))))))));
            var_17 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2690180707U))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_3 [i_0])))));
        }
        arr_10 [i_0] &= (short)0;
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((long long int) (_Bool)1));
                        var_19 = ((/* implicit */short) (-(arr_20 [i_4] [i_5] [i_5] [i_4 + 1])));
                    }
                } 
            } 
        } 
        var_20 |= ((/* implicit */short) var_10);
        arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4] [i_4 + 1] [i_4 + 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) : (var_2)));
    }
}
