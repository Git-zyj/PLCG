/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214654
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0 - 1]));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (unsigned short)7);
        var_19 += (unsigned short)61266;
        arr_4 [i_0] [(unsigned short)18] = max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 2]))))));
        var_20 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (~(-2305843009213693952LL)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (-(max((((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_7 [i_1])) - (43924))))), (((/* implicit */int) arr_7 [i_1]))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
        arr_11 [i_1] = ((/* implicit */_Bool) var_5);
        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) 2834993141U))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_18 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (+(min((arr_17 [i_1] [i_1] [i_3] [i_3]), (((/* implicit */unsigned int) arr_6 [i_1]))))));
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)7)), ((-(((/* implicit */int) (signed char)-8))))));
                    var_23 |= ((/* implicit */short) ((int) arr_5 [(signed char)6]));
                    var_24 *= ((/* implicit */unsigned short) (((+(max((((/* implicit */int) var_17)), (var_11))))) / (((/* implicit */int) arr_7 [i_1]))));
                    arr_19 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_13 [i_1])))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)99)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
}
