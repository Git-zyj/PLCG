/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207091
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
    var_11 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max(((~(-6804216985471571052LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) max(((signed char)-118), (((/* implicit */signed char) var_7))))), ((unsigned short)13184))))));
                arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) 49904933)), (-6804216985471571052LL)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1)))))));
                            var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((-6804216985471571035LL) & (((/* implicit */long long int) 558697043U)))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_14 = (signed char)-125;
                                arr_15 [i_0] [i_0] [i_1] [i_3] [i_0] [i_4] [i_1] = ((/* implicit */long long int) var_3);
                                arr_16 [i_3] [i_1] [i_1] [i_3] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((183835573), (arr_11 [i_2] [i_3] [i_3] [i_3 - 3])))) ? (((((/* implicit */unsigned int) 134217727)) & (arr_9 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
                                var_15 += ((/* implicit */unsigned short) ((_Bool) (!((!(((/* implicit */_Bool) var_9)))))));
                                var_16 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_11 [i_1] [i_2] [i_2] [i_3 - 1])) & (((arr_13 [i_0] [i_0] [i_2] [5LL] [i_4]) >> (((arr_10 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_4]) - (8300373985073822797LL)))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                arr_19 [i_5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) -49904933);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47423)) ? (((/* implicit */unsigned int) -134217733)) : (var_4)));
                            }
                            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_7 [i_3] [i_3] [i_3]))) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) < (((/* implicit */int) var_1)))))));
                                arr_22 [i_0] [i_1] [i_1] [i_6] [i_1] [i_6] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)16384)), (var_5)))), ((~(arr_13 [i_6] [i_1] [i_2] [i_3 - 3] [i_6])))));
                            }
                            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) -1073998656)) ? (((/* implicit */long long int) 0)) : (-6797895270008675826LL)));
                        }
                    } 
                } 
                arr_23 [6] [i_1] = ((/* implicit */unsigned int) max((max((216172782113783808LL), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -134217738)) : (arr_9 [i_0]))))));
            }
        } 
    } 
}
