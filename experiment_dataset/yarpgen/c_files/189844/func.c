/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189844
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
    var_17 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)23)) * (((/* implicit */int) max(((signed char)-23), (((/* implicit */signed char) var_7))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) (~(-7407520681538530300LL)));
        arr_3 [i_0] [12] |= ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) var_2);
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(arr_5 [i_0] [i_1] [i_1])));
            var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (signed char)23))));
        }
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) - (arr_4 [i_0] [i_2] [i_2 + 3]))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_19 [(unsigned char)1] [i_3] [(unsigned char)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_2])) ? (var_16) : (arr_8 [1U] [i_3] [1U])))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2] [i_5] [i_5] [i_5] [i_2])));
                            var_21 = ((((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */int) var_7)))) + (var_14));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((var_8) & (((int) (_Bool)1)))))));
            arr_20 [i_2 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -7407520681538530320LL)) ? (7407520681538530307LL) : (-7407520681538530307LL)));
        }
        for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            var_23 = ((/* implicit */short) (+(((/* implicit */int) var_0))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                var_24 ^= ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((arr_16 [i_6 - 1] [i_6 - 1]) >= (((/* implicit */unsigned int) arr_17 [i_0] [i_8] [i_7] [i_0] [i_9]))));
                            arr_31 [i_6] [i_0] [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                            var_25 = ((/* implicit */unsigned int) (~(arr_22 [i_6] [i_8])));
                            arr_32 [i_0] [i_6 + 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7407520681538530319LL)))) : (var_9)));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned char) arr_4 [i_0] [i_6] [i_6]);
            var_27 = ((/* implicit */short) (+(arr_10 [i_6 - 1] [i_6 + 1])));
        }
        arr_33 [i_0] [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 2; i_12 < 10; i_12 += 2) 
            {
                {
                    var_28 ^= (_Bool)1;
                    var_29 = arr_40 [i_10 - 2] [i_11] [i_12] [i_10 - 2];
                }
            } 
        } 
        var_30 += ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) var_5)));
    }
    var_31 = ((/* implicit */_Bool) var_1);
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-23)))) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (var_16))) : (((/* implicit */int) var_3))))), (var_9))))));
}
