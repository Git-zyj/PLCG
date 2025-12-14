/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2179
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) (unsigned char)131))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) + (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)48124)), (var_2))))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((min((var_6), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((signed char) -6097171206347674822LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        for (int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_7))) ^ (((767924003U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_3 + 2])))))))) & ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))) | (13686343114812649491ULL)))))));
                            var_16 = ((/* implicit */long long int) ((unsigned char) ((arr_14 [i_5 + 1] [i_4] [i_4] [i_2]) & (arr_14 [i_2] [i_3] [i_4] [i_5]))));
                            var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_14 [i_2 + 1] [i_3 + 1] [i_3] [i_4])))) ? (((((/* implicit */_Bool) ((arr_14 [i_2] [i_4] [i_3] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2])))))) ? (min((((/* implicit */unsigned long long int) arr_9 [i_4 + 2])), (13686343114812649491ULL))) : (((/* implicit */unsigned long long int) ((arr_8 [i_4] [i_3]) / (((/* implicit */int) arr_10 [i_5] [i_4] [i_3]))))))) : (((min((((/* implicit */unsigned long long int) var_4)), (11858636518607680312ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) == (((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_3 + 4] [i_4] [i_5] [(unsigned short)0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_7] [i_2] [i_2])) ? (14811157151751886316ULL) : (((/* implicit */unsigned long long int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (153990164U))))))), (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_6 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_6 - 2] [i_7 - 2])) : (((/* implicit */int) arr_10 [i_2 - 1] [i_6 + 1] [i_7 - 2]))))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_5)))))))));
                            arr_25 [i_2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_2) / (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_7 [i_6 - 2] [i_7]))))))) * (((((/* implicit */_Bool) var_5)) ? (arr_14 [i_2 + 1] [i_2 - 1] [i_6] [i_2 + 2]) : (((/* implicit */unsigned long long int) -1))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_7 + 1] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2 - 1] [i_6 - 2])) & (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]))))) : ((~(var_7)))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned long long int) ((int) 4760400958896902124ULL));
            }
        } 
    } 
}
