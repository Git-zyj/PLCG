/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29459
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
    for (short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_10 = (-(((/* implicit */int) (unsigned short)65531)));
                    var_11 = ((/* implicit */unsigned int) 9571751558737561284ULL);
                    var_12 = ((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */unsigned int) arr_7 [i_0 - 2] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((arr_2 [i_3 - 3]) << (((arr_2 [i_3 - 2]) - (1278602008U)))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            arr_16 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [(unsigned char)0] [i_4 + 1]) < (arr_8 [i_0] [i_0 - 1]))))) <= ((-(arr_8 [i_1] [i_3 + 3])))));
                            var_13 = ((/* implicit */short) (unsigned short)65520);
                            arr_17 [i_2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-100)))) ? (((arr_4 [i_0] [i_1] [i_3 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)14] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [5LL]))))))));
                            arr_18 [i_1] [i_0 + 1] [i_1] [i_2] [i_1] [i_3] [i_4 - 1] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_1] [i_3 + 2] [i_3 + 4] [i_4 - 1]))));
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [0ULL]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) 
        {
            {
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_6] [i_5]))));
                var_15 = ((/* implicit */long long int) max((((/* implicit */int) (!(arr_7 [i_5 - 1] [i_6 + 1] [i_6 + 1])))), (((((/* implicit */int) arr_7 [i_5 - 2] [i_6 - 1] [i_6 - 3])) << (((((/* implicit */int) arr_10 [20] [i_5 - 2] [i_5 + 2] [i_6 - 3] [i_5 - 2])) + (129)))))));
                arr_25 [i_6 - 3] [i_6] [i_6] |= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) min((arr_22 [i_5] [i_6] [i_6]), (((/* implicit */short) (signed char)99))))), (((unsigned long long int) arr_15 [i_5] [(unsigned short)14] [i_6 - 3] [i_6] [i_6] [i_5] [i_6 - 3])))) << (((min((arr_3 [i_6 - 2] [i_5]), (arr_3 [i_6 - 1] [i_6]))) - (2473470989590569451ULL)))));
            }
        } 
    } 
}
