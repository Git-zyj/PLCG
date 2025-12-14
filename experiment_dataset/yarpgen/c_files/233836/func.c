/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233836
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
    var_11 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_13 [7ULL] [i_1] [i_2] [8] [i_4] = ((/* implicit */short) (-(max((((((/* implicit */_Bool) arr_12 [i_2] [i_1] [(_Bool)0])) ? (arr_9 [i_0] [i_0] [10] [10]) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_7 [7]))))));
                                var_12 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)12] [i_2] [i_2] [i_4])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))) ? (10637215698058502061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((((/* implicit */_Bool) ((var_3) ? (((((/* implicit */int) (short)-377)) % (((/* implicit */int) arr_12 [0ULL] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) (short)388)) : (-223517172)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20627)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))))) : (((unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
                var_14 = arr_5 [i_0] [i_0] [1LL];
            }
        } 
    } 
    var_15 = ((/* implicit */int) min(((~(var_1))), (((/* implicit */unsigned long long int) -2133581346))));
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)16394)))))));
}
