/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50603
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */short) -2020733269631395917LL);
            arr_7 [(unsigned short)0] [i_1 - 1] = (!(((/* implicit */_Bool) (unsigned short)54885)));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_21 ^= (-(var_17));
                arr_10 [i_0] [14LL] [i_1 + 1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                var_22 = ((((/* implicit */_Bool) (short)5)) ? (arr_0 [i_2] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1]))));
            }
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_18 [i_4] &= ((/* implicit */int) ((-1943922802680054147LL) == (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                arr_19 [i_3] = ((/* implicit */short) (-((+(1485757624)))));
                arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1943922802680054141LL))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((var_5) < (((/* implicit */long long int) arr_1 [i_0])))))));
            }
            var_24 = ((((/* implicit */_Bool) ((1943922802680054166LL) >> (((-1943922802680054167LL) + (1943922802680054217LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3]))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-1943922802680054167LL))));
        }
        var_25 = ((/* implicit */unsigned char) ((var_17) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)222)))))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1943922802680054158LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1943922802680054160LL)) ? (((/* implicit */int) (short)9897)) : (((/* implicit */int) (short)-9903))))) : (arr_0 [i_0] [i_0])));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((long long int) (unsigned char)136)))));
    }
}
