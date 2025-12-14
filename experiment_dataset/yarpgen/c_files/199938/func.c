/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199938
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_17 = (~(((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_2 - 2] [i_2 + 1])));
                    var_18 = ((/* implicit */_Bool) (~(967933411U)));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_8))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            arr_9 [i_0] [i_0] = (!(((/* implicit */_Bool) ((var_13) ? (var_6) : (754874712963214542LL)))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_2 [(_Bool)1] [8LL]))));
            var_21 -= (!(((/* implicit */_Bool) 3327033900U)));
            var_22 ^= ((/* implicit */signed char) var_7);
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_23 = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_24 = ((/* implicit */_Bool) var_14);
                var_25 = ((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4]))) | (arr_13 [i_0] [i_0] [i_5])));
                var_27 = ((/* implicit */_Bool) ((var_16) & (((/* implicit */long long int) 3327033904U))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */int) var_10);
                            arr_22 [3U] [i_0] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((_Bool) ((_Bool) arr_17 [i_0] [17] [i_6] [i_6])));
                            arr_23 [i_0] [i_0] [i_6] [i_0] [i_8] = ((/* implicit */_Bool) ((((0LL) >> (((arr_19 [i_0] [i_4] [i_4] [i_7 + 2] [i_8]) - (1837954630))))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_4] [i_6] [i_7 - 1] [i_8])) : (3327033913U))) - (1837954637U)))));
                            var_29 = ((/* implicit */long long int) (+(2500776889U)));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) ((_Bool) arr_8 [i_4]));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((int) var_13)))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_1))));
                            arr_33 [i_0] [i_4] [i_9] [i_0] [i_11] = ((((/* implicit */_Bool) ((signed char) arr_26 [i_11] [i_4] [i_4] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~(var_11))));
                            var_33 = ((/* implicit */long long int) ((arr_14 [i_11] [i_10] [i_9] [i_0]) ? (((/* implicit */unsigned int) arr_19 [i_11 + 2] [i_11 - 2] [i_11 + 2] [i_11 - 1] [i_11 - 1])) : (arr_17 [(_Bool)1] [i_4] [10] [i_10])));
                        }
                    } 
                } 
                var_34 &= ((/* implicit */_Bool) ((arr_5 [2] [i_0] [i_4] [i_9]) ? (arr_13 [i_0] [i_0] [i_0]) : (var_6)));
            }
            arr_34 [(signed char)4] [(signed char)4] [i_4] |= var_5;
            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 1794190407U)) ? (3327033904U) : (((/* implicit */unsigned int) 2147483635)))))));
        }
    }
    var_36 = ((/* implicit */int) ((_Bool) var_9));
}
