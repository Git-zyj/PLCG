/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190440
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) (unsigned char)196);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (short)-10518);
    }
    for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_14 -= max((((((/* implicit */int) ((((/* implicit */int) (signed char)35)) == (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))) * (28))), (((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1 - 4])) ? (((((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3])) ^ (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 4])))));
        arr_7 [i_1] &= ((/* implicit */_Bool) min((((int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) != (-1537074421947716410LL)))), (((/* implicit */int) (signed char)50))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        var_15 = (!(((/* implicit */_Bool) 2700751813U)));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) -41)) ? (arr_11 [i_2 - 1] [i_2 + 1]) : (arr_11 [i_2 + 1] [i_2 - 1])));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_2] [(signed char)3] [i_4] [i_5] = ((/* implicit */short) ((_Bool) var_0));
                        arr_19 [(unsigned char)6] [(unsigned char)6] [i_4] [(unsigned char)6] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1594215492U)) || (arr_12 [i_4] [i_5]))) ? ((+(((/* implicit */int) arr_8 [i_3])))) : (((/* implicit */int) arr_15 [i_2] [i_2 + 1] [i_4] [i_3]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_23 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) arr_20 [i_2 + 1])) : (((/* implicit */int) arr_20 [i_2 + 1])));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (arr_14 [i_2 + 1] [i_2 - 1]) : (arr_14 [i_2 + 1] [i_2 + 1])));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) arr_20 [i_2 + 1]);
    }
    var_19 = ((/* implicit */signed char) -1537074421947716413LL);
}
