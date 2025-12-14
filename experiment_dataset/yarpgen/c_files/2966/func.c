/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2966
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
    var_18 *= ((/* implicit */unsigned long long int) var_9);
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_15))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_21 |= ((/* implicit */long long int) arr_4 [i_0]);
            arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned char)135)));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (arr_8 [i_2] [i_3] [i_2]) : (arr_8 [i_2] [i_2] [i_2])));
            var_22 &= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) var_17)))));
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(1703536859U))))));
            arr_14 [i_2] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(signed char)14] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */long long int) var_7)) : (-6315376683168322524LL)))) : (arr_13 [i_2])));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5]))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_7 [i_2]))));
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (arr_9 [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_2] [i_2])));
    }
}
