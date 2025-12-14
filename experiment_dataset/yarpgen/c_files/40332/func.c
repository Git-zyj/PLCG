/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40332
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
                arr_6 [(short)17] [i_1] [(short)17] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0 + 1]);
                var_13 = ((((/* implicit */_Bool) min(((~(arr_4 [(signed char)23] [(signed char)23] [i_0]))), (((/* implicit */unsigned long long int) min((3989286019U), (((/* implicit */unsigned int) var_2)))))))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)10])));
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)12961)), ((+((~(((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(arr_2 [i_2])))), (arr_4 [i_2] [i_2] [i_2])));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_2]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) arr_5 [i_3]);
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_18 = arr_10 [i_3] [i_5];
                        arr_20 [i_5] [i_5] [(unsigned short)5] [i_5] = ((/* implicit */unsigned short) var_4);
                    }
                } 
            } 
        } 
    }
}
