/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217021
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
    var_12 = ((/* implicit */int) var_9);
    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (short)-32764))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                    arr_9 [i_2] = ((/* implicit */short) arr_6 [(unsigned short)4] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)11)) >> (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */int) var_4)) >> (((var_10) + (6590427854970031269LL)))))))) : ((~(((((/* implicit */_Bool) var_3)) ? (2961224357U) : (2961224335U)))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */short) ((unsigned long long int) (-(var_7))));
                    var_16 += ((/* implicit */unsigned short) ((int) min((((/* implicit */long long int) var_1)), (arr_1 [i_5] [i_5]))));
                    arr_17 [i_3] [i_3] [6] [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_3] [i_4] [0])))));
                }
            } 
        } 
    } 
}
