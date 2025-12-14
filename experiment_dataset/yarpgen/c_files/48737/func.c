/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48737
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 13; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) ((((var_11) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 2] [i_1] [i_2 + 2] [i_1]))))) ? (((long long int) 184998540U)) : (((arr_10 [i_0] [i_3 - 1] [i_2 + 4] [i_0]) % (var_3)))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned int) ((((unsigned int) 4172794232U)) >> (((arr_9 [i_0] [i_3 - 2] [i_0] [i_3 - 2] [i_2 + 1]) - (1260170673U)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_5] [i_4] [i_1] [i_5] [12ULL] = ((/* implicit */_Bool) 1399859160U);
                            arr_17 [i_5] = ((/* implicit */unsigned int) ((1046273203) >> (((min((((/* implicit */unsigned long long int) var_11)), (1740454740326361542ULL))) - (1740454740326361518ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned int) (-(10625817430633138488ULL)));
                            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)43789)))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        for (short i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_35 [i_8] [i_8] [i_9 - 1] [i_10] [12ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_32 [i_8] [i_9] [i_9 - 1] [i_11]))) && (((arr_32 [i_8] [i_8] [i_10] [i_11 - 2]) > (arr_32 [i_8] [i_9] [i_10] [(signed char)3])))));
                            arr_36 [i_8] [(_Bool)1] [i_10] = ((/* implicit */long long int) var_8);
                            var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), (max((((/* implicit */unsigned long long int) ((arr_27 [i_11] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (signed char)3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_44 [i_8] [i_8] [i_12] = var_6;
                                var_17 = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
