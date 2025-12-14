/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213361
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
    var_18 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) (unsigned char)96);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((-3282633718894512760LL) | (-3565350282023436908LL)));
                                arr_14 [i_3] [i_4] [i_2] [i_2] [(unsigned char)12] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((17962862378086706189ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) || ((!(((/* implicit */_Bool) (short)2044))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((3565350282023436898LL) - (3565350282023436897LL)))))) ? (arr_16 [(signed char)14] [i_2 + 2] [i_5 - 2] [i_6 + 1]) : (((/* implicit */int) (unsigned char)12))));
                                arr_22 [8LL] [8LL] [i_2] [i_2] [i_2] [4ULL] [i_2 - 1] = ((/* implicit */short) ((arr_2 [i_2 + 4] [i_2 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6 - 1] [i_5] [i_5 - 1] [i_1])) || ((!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_17))) + (arr_5 [i_0] [i_0] [i_2]));
                        var_23 = ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2 + 2] [i_7])) ? ((~(((/* implicit */int) (short)11208)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_7]))))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */int) var_10);
}
