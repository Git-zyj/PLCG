/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248716
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
    var_16 = ((/* implicit */_Bool) ((signed char) var_12));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((long long int) 9251801393870750409ULL))) | (arr_7 [i_2] [i_1] [3ULL])))));
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (9194942679838801207ULL)));
                    arr_8 [i_1] [7LL] [(signed char)8] = ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_2] [i_0 - 1] [(unsigned char)2] [(unsigned char)2] [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_13 [i_3 + 1] [i_1] [i_0 + 1] [i_3] [i_1] [i_2] [i_4]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_13 [i_0] [i_3] [i_0] [7] [i_0] [i_1] [i_3])))))))))))));
                                var_20 = arr_11 [i_0] [i_1] [8ULL] [i_3] [i_4] [i_3] [i_3];
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13174299947588810450ULL)) ? (((((((/* implicit */_Bool) 288195191779622912LL)) ? (13174299947588810450ULL) : (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_3] [i_3] [(_Bool)1] [i_1] [i_0])))) * (((/* implicit */unsigned long long int) (-(arr_13 [7ULL] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0] [i_1] [12U] [i_2] [i_3] [i_3] [i_4])))));
                                arr_15 [i_1] [i_1] [i_2 + 1] [i_1] [i_4] = ((/* implicit */int) (~((~(((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */unsigned long long int) -952513946)) : (9251801393870750409ULL)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
