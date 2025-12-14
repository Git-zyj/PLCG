/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191630
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_9)))))) >= (var_10)));
    var_12 -= ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (261632U)));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_13 -= ((/* implicit */int) (~((-(20U)))));
            var_14 = ((/* implicit */long long int) 4294967275U);
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) arr_9 [i_0] [i_2]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) arr_5 [i_3 - 2] [i_0]);
                arr_14 [i_0] [i_0] [2] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_4 [(signed char)9] [i_3 + 1]))))));
                var_16 -= ((/* implicit */short) (!((_Bool)1)));
            }
            var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28591)) ? (((arr_1 [i_2]) ? (var_8) : (((/* implicit */long long int) arr_13 [i_0] [10U] [i_2] [i_2])))) : (((/* implicit */long long int) ((-1758473631) - (((/* implicit */int) arr_12 [i_0] [i_0] [i_2])))))));
        }
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */int) (!(var_6)))) | (((/* implicit */int) ((_Bool) (signed char)82)))));
            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)36)) & (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (18446744073709551615ULL)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_5]);
            arr_20 [i_0] [i_5] [i_0] = (i_0 % 2 == zero) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_5))) << (((((((/* implicit */_Bool) arr_19 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5]))) : (20U))) - (68U))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_5))) << (((((((((/* implicit */_Bool) arr_19 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5]))) : (20U))) - (68U))) - (4294967138U)))));
            var_21 -= arr_13 [i_0] [(unsigned char)8] [1U] [i_5];
        }
        var_22 = ((/* implicit */int) ((arr_18 [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (arr_6 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_0])))))));
    }
}
