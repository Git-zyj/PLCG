/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211001
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_20 += arr_1 [18LL];
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            arr_11 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */_Bool) var_9);
                            arr_12 [i_4] [i_3] [i_2] [i_1 - 2] [5U] = ((/* implicit */signed char) ((long long int) arr_1 [i_0 - 2]));
                            arr_13 [7LL] [i_0 - 1] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-1))));
                            arr_14 [i_2] [i_3] [i_0 - 2] [i_2] [i_2] [i_1] [i_0 - 2] = ((/* implicit */int) ((arr_8 [i_0 - 1] [14LL] [i_2] [i_1 - 3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (signed char)-84);
                            var_22 -= ((/* implicit */unsigned long long int) 1293677197670172304LL);
                            var_23 = ((/* implicit */short) 2251799813684224ULL);
                        }
                        var_24 = ((/* implicit */unsigned char) (unsigned short)24244);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_2] &= ((/* implicit */_Bool) 858195109U);
                            arr_21 [i_0] [(unsigned short)1] [i_0] [11ULL] [i_0 - 1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(var_6))))))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-115)) / ((-(428795227)))));
        var_26 = ((/* implicit */unsigned char) var_7);
        arr_22 [i_0] = ((/* implicit */short) (-(min((((long long int) 1056964608U)), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (1825246346U))))))));
    }
}
