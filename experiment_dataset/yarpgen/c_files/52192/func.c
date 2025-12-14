/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52192
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_0 + 3] [i_2])) : (((/* implicit */int) (unsigned char)140))))) <= (-1451092118258005385LL)));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_2] [i_1] [i_2 - 3] [(unsigned char)13] [i_1] = ((/* implicit */unsigned char) ((((_Bool) 2199023255551LL)) ? (min((((/* implicit */long long int) (_Bool)1)), (2199023255551LL))) : (min((3803561203993546170LL), (((/* implicit */long long int) (unsigned char)96))))));
                        arr_10 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_2 - 2] [i_1] [2LL] [i_1])) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) arr_4 [i_3 + 3]))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_3 - 2])))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_2] [i_2] [i_3] [i_4] = var_9;
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47271)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2021233588000768662LL)));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_12 = ((/* implicit */long long int) ((unsigned short) (unsigned short)18264));
                            var_13 -= ((unsigned short) arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0]);
                        }
                        var_14 -= ((/* implicit */long long int) min((arr_6 [i_1]), (((/* implicit */unsigned short) ((unsigned char) arr_12 [i_0] [i_2 - 3])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_20 [i_2] [i_1] = min((((((/* implicit */_Bool) 5154440946254193312LL)) ? (4914844960940349362LL) : (4914844960940349359LL))), (((/* implicit */long long int) ((arr_7 [i_0] [i_6] [i_0 + 1] [i_6] [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 2] [11LL] [11LL])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 + 3] [i_2] [i_2 - 3]))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) * (((((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 1] [i_0 + 1] [i_2])) * (((/* implicit */int) arr_2 [i_1]))))));
                    }
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned short) ((long long int) max((((/* implicit */long long int) (_Bool)0)), (144115188075823104LL))));
}
