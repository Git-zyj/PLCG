/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39562
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 &= ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)32758)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (unsigned short)511);
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (long long int i_4 = 4; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_12 [i_4] [i_2] = ((/* implicit */signed char) 5909458462701754540LL);
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(arr_10 [i_3] [i_4 - 3] [i_4] [i_3])))) | (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)2469))))), (min((((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_3] [i_1])), (13739668032347749057ULL))))))))));
                    }
                } 
            } 
            arr_13 [i_2] [(unsigned short)4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_2])) >> (((((/* implicit */int) arr_6 [i_1 - 1] [i_2] [i_2])) - (102)))))) ? (14124699860052255785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1] [i_1] [i_1]), (arr_6 [i_1 + 1] [i_1] [i_2])))))));
            var_15 = ((/* implicit */int) min((var_15), (arr_8 [i_2] [20LL] [i_1 + 1] [i_1])));
        }
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 + 1])) << (((arr_10 [i_1] [i_1] [i_1 + 1] [(signed char)12]) + (680205765605527645LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1 - 1]))))) : (min((arr_10 [i_1] [i_1 - 1] [i_1 + 1] [(signed char)2]), (((/* implicit */long long int) arr_9 [i_1 + 1]))))));
            arr_16 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) >= (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [24ULL] [i_5]))))), (-1088579849)));
            var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_5] [i_5])), (((unsigned long long int) arr_15 [i_1 + 1] [i_1] [i_1]))));
        }
        for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
        {
            var_18 = arr_5 [i_1] [i_6];
            arr_20 [i_6] [i_1] [i_1] = 4707076041361802575ULL;
            arr_21 [i_1] = ((/* implicit */_Bool) arr_19 [i_1 - 1]);
        }
        arr_22 [i_1] = ((/* implicit */unsigned char) (unsigned short)18030);
    }
    var_19 = ((/* implicit */unsigned char) var_7);
}
