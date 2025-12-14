/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221495
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
    var_10 = ((14255858960960802270ULL) ^ (var_7));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 3] [i_0 - 3] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)23992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))) : (5851463101373211962ULL)));
                    arr_7 [i_0] [i_1 - 2] [i_1 - 2] = var_1;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 6; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */signed char) (~(16607237663148354601ULL)));
                                arr_20 [i_3] [i_4] [i_5] [i_6 - 1] [i_7] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (16607237663148354601ULL)))) | (((/* implicit */int) ((unsigned short) var_5)))))) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) ((4681474302320420265ULL) != (((((/* implicit */_Bool) var_9)) ? (5851463101373211974ULL) : (((/* implicit */unsigned long long int) var_8)))))))));
                            }
                        } 
                    } 
                } 
                arr_21 [(unsigned char)0] [i_4] = ((/* implicit */unsigned char) var_0);
                arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)30085)) % (((/* implicit */unsigned int) arr_1 [i_3] [i_3 + 1]))))) ? (min(((~(((/* implicit */int) arr_12 [i_3 - 3] [i_4] [i_4] [i_4])))), (((/* implicit */int) (unsigned char)239)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) ((unsigned char) arr_8 [i_3 - 2] [i_4]))) : (((/* implicit */int) (signed char)0))))));
                arr_23 [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) max((arr_8 [i_4] [i_3 - 2]), (arr_8 [i_3 - 1] [i_4])))) > (((/* implicit */int) min((arr_8 [i_3 + 3] [i_3 - 1]), ((signed char)-91))))));
            }
        } 
    } 
}
