/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48520
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
    var_14 = 3392926309U;
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((902040986U) <= (3706802257U))))));
    var_16 = max((2203143734990037911ULL), (((/* implicit */unsigned long long int) (unsigned char)0)));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65533)) ^ (513913235))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) (unsigned char)175)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((min((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]), (((/* implicit */unsigned int) arr_13 [i_1] [i_2] [i_3] [i_0])))), (((/* implicit */unsigned int) ((int) var_11))))) == (((/* implicit */unsigned int) arr_16 [i_0] [i_4]))));
                                var_18 ^= ((min((max((((/* implicit */int) (unsigned char)71)), (524287))), (arr_11 [i_1]))) * (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-102)) ? (128849018880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4 - 1] [i_1] [i_2] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) arr_22 [i_1] [i_1] [i_5]);
                                var_20 = ((/* implicit */_Bool) (~(arr_20 [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
