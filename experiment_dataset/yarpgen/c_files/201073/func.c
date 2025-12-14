/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201073
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((max((((/* implicit */int) ((2220351795212723034ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)4] [(signed char)4] [i_2] [i_2] [i_2])))))), (((arr_5 [i_2] [i_1] [i_2]) & (((/* implicit */int) arr_3 [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3 - 1])) : (((((/* implicit */_Bool) var_15)) ? (1118963045) : (((/* implicit */int) var_7)))))))))));
                                arr_15 [12LL] = ((/* implicit */short) ((unsigned short) (+(-1118963036))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((arr_5 [(signed char)11] [i_1] [i_2 + 2]) | (((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ ((~(((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1118963033))));
                var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1118963045)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) (signed char)127)), (arr_19 [i_5] [i_5]))))));
                arr_23 [i_5] [i_6] = ((/* implicit */unsigned char) -1118963044);
            }
        } 
    } 
}
