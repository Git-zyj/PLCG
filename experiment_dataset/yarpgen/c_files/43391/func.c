/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43391
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
    var_20 &= var_19;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1968530848185848486LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62261)) ? (((/* implicit */int) (unsigned short)3287)) : (((/* implicit */int) arr_2 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((arr_5 [i_1] [i_1 + 3]) ? (((((-2122300075) + (2147483647))) << (((2122300074) - (2122300074))))) : (arr_6 [i_1]));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_9 [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(9056020745729911669LL)));
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1 + 3]))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_22 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) + (((((/* implicit */_Bool) (unsigned short)62233)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-9223372036854775807LL))));
                            arr_20 [(signed char)9] [(signed char)9] [i_3] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1]))) > (var_5)));
                            arr_21 [i_1 + 4] [6LL] [i_2] [(unsigned short)10] [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_8 [i_1] [i_2] [i_5])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_1 - 1] [i_2] [i_1 - 1] [i_6] [i_7])) && (((/* implicit */_Bool) arr_18 [i_1 + 3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (9056020745729911669LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [13U])) - (((/* implicit */int) var_2))))))))));
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) var_13))) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_1 + 4] [i_2] [i_3 - 2] [i_1 + 4] [i_7])) - (11092)))));
                        }
                    } 
                } 
            }
            var_26 &= ((/* implicit */long long int) arr_28 [i_1] [i_1] [i_2] [i_2] [i_2]);
        }
    }
}
