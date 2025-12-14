/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207771
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 &= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_14 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = max((-1LL), (((/* implicit */long long int) var_3)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (short)11550);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_16 = ((/* implicit */long long int) ((_Bool) var_6));
            var_17 = ((/* implicit */short) (~((~(((/* implicit */int) arr_9 [i_2 - 2]))))));
            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)121)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (_Bool)0))));
                arr_16 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)121))));
                var_20 ^= ((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 + 1]);
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((arr_14 [i_2] [i_2 + 1]) >= (((/* implicit */unsigned long long int) (~(arr_1 [i_4] [i_3]))))));
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(arr_14 [i_2] [i_5]))))));
                arr_20 [7ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_0 [i_2 - 2] [i_2 - 2]))));
            }
        }
        var_22 = ((/* implicit */long long int) ((_Bool) ((_Bool) (unsigned char)121)));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            {
                arr_26 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7 - 1] [i_6 - 1])) ? (arr_23 [i_6 + 2] [i_7 + 2] [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (arr_21 [8ULL])));
                var_23 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
