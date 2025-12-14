/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232697
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */int) (signed char)8)) - (((/* implicit */int) arr_3 [i_0] [i_1])))))), (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (!(((/* implicit */_Bool) 2648730273137140447ULL)))))))));
                arr_7 [i_0] [i_1] = 8357384025628472652ULL;
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1] = ((/* implicit */long long int) (((-(((var_0) << (((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) var_2)) + (25854)))));
                                var_10 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_17 [i_1] [i_3 - 4] [i_1] [i_1] [i_0])))), (((/* implicit */int) var_2))))) & (arr_9 [i_3 + 1] [i_1 + 2] [i_1 + 2])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */long long int) var_0);
        var_11 = ((/* implicit */long long int) var_2);
        var_12 -= (+(((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_28 [i_5] [i_5] [10LL] [i_7] &= ((/* implicit */short) 3042068902618642839ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_9] [i_5] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)18))));
                                arr_34 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)30);
                            }
                        } 
                    } 
                    arr_35 [i_5] [i_6] [i_7] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (15404675171090908765ULL) : (2648730273137140447ULL))));
                    arr_36 [i_7] [i_6] [i_5] = ((/* implicit */_Bool) 9223372036854775807LL);
                }
            } 
        } 
    }
    var_13 = (+(((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) -6463834830483557592LL)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (var_8))))))));
}
