/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45761
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
    var_11 &= ((/* implicit */long long int) var_0);
    var_12 -= ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_2))));
        var_14 -= ((/* implicit */signed char) 0LL);
        var_15 = ((/* implicit */unsigned short) max((((arr_1 [i_0]) & (var_9))), (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)0)))), (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_16 -= ((long long int) (signed char)0);
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((arr_3 [i_4]) + (2147483647))) >> (((((((/* implicit */_Bool) var_4)) ? (var_8) : (var_9))) + (8333570543628146029LL))))))));
                            var_18 = (~(-80413711119070410LL));
                            arr_15 [i_2 - 2] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)51124)) : (((/* implicit */int) var_0))))) != (((unsigned long long int) 5LL))));
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_0 - 3] [i_3])) ? (((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : ((~(arr_12 [i_0] [2LL] [i_0] [i_4])))));
                        }
                        var_19 = var_0;
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */int) ((max((var_8), (((/* implicit */long long int) var_5)))) != (((/* implicit */long long int) ((int) var_0)))))), (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) (signed char)0)))))))));
                    var_21 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_7] [i_7])) ? (var_3) : (((/* implicit */long long int) arr_23 [4U] [4U] [i_7] [i_7])))), (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) <= (arr_24 [(signed char)2] [(signed char)2])))))))));
                }
            } 
        } 
        arr_25 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) ^ (var_9)))) : (((2023339760319906878ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32764))))))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    arr_30 [i_5] [i_5] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [i_8] [i_8]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) || (((/* implicit */_Bool) var_8)))))) & (((unsigned long long int) arr_24 [i_5] [i_5]))));
                    var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((int) 0ULL))))) || (((/* implicit */_Bool) var_9))));
                    var_24 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_17 [i_5])))));
                    arr_31 [i_5] [i_9] [i_9] &= ((/* implicit */int) (~(var_7)));
                }
            } 
        } 
        var_25 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_27 [i_5] [i_5] [i_5])) > (var_3)))), ((~(var_7)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) ((((max((arr_35 [i_10] [i_10]), (((/* implicit */unsigned long long int) var_9)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? ((-(min((var_8), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_34 [i_10]))))));
        var_27 = ((/* implicit */int) ((arr_32 [i_10] [i_10]) - (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_32 [i_10] [i_10])))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!((_Bool)1))))));
    }
    var_29 = ((/* implicit */int) max((var_9), (((((/* implicit */_Bool) ((var_2) << (((3427867589U) - (3427867584U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_8)) ? (-3836981348590602128LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
}
