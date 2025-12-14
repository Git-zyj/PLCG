/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48172
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (min((min((arr_5 [i_2] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_2])))), (((/* implicit */unsigned int) -1))))));
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) max((1997899341), (((/* implicit */int) (unsigned char)203))))) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) ((unsigned char) var_0)))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) 5296079283114149481LL);
                            /* LoopSeq 1 */
                            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
                            {
                                arr_20 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                                var_13 ^= arr_0 [9U];
                                var_14 = arr_2 [i_3 + 4];
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)44))))), (arr_12 [i_3 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_11 [i_5]))))) % (min((((/* implicit */unsigned int) (unsigned char)1)), (arr_5 [i_4] [i_5] [i_4] [i_7])))))) : (max((((/* implicit */long long int) 1997899333)), (5296079283114149490LL)))));
                            }
                            arr_21 [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 4] [i_3 + 3] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_5 [i_3] [i_3 - 2] [i_3] [i_5])))) ? ((-(-1035693573))) : (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_16 [i_3] [i_3 + 3] [i_3] [i_3]))))));
                            var_16 = ((/* implicit */int) (signed char)23);
                            var_17 = ((/* implicit */short) (signed char)110);
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 23; i_8 += 4) 
    {
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) -5296079283114149482LL);
                var_20 = arr_22 [i_8] [i_8];
                var_21 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_24 [14]))))));
                var_22 = (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) 627597555))))), (min((arr_26 [i_8] [i_8]), (((/* implicit */long long int) (signed char)16)))))));
            }
        } 
    } 
    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
}
