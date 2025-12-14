/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192664
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max((((int) arr_3 [i_1 + 1] [i_1 + 2])), (((((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])) - (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 3]))))));
                var_11 |= ((/* implicit */signed char) (short)32760);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (-((~(((/* implicit */int) (short)-32761))))));
                            var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_9 [i_1] [i_1] [i_1 + 1] [(signed char)5] [i_2] [i_2 + 1]))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (var_0)))), (max((16630524500117331192ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_14 |= ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_14 [i_4]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                arr_17 [i_4] [i_4] [i_5] = ((/* implicit */long long int) (!(((arr_14 [i_4]) == (((/* implicit */unsigned int) arr_16 [i_5]))))));
                var_15 -= ((/* implicit */unsigned int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (1816219573592220405ULL))) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (arr_14 [i_4])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_4])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 4; i_6 < 21; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_23 [i_7] [i_6] [i_7] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_13 [i_6])) ? ((~(16630524500117331183ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
        }
        arr_24 [i_6] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) arr_20 [i_6] [i_6])), (var_4))));
    }
}
