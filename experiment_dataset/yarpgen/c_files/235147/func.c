/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235147
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
    var_14 ^= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 3835184950U)) && ((_Bool)1)))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_2))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_5 [i_2] [i_3]))))) < (((/* implicit */int) (signed char)117)))), (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_2)))))))));
                                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((arr_8 [i_3 - 1] [i_3 + 1] [i_4] [i_4]) >= (((/* implicit */long long int) -212815664)))))));
                                var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))) ^ (((/* implicit */int) max(((_Bool)0), (var_5))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((2116547187U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) | (((/* implicit */int) max((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_3 + 1]), (arr_9 [i_0] [i_0] [i_0] [7ULL] [i_3 + 1] [i_0]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [15ULL] [i_1] = ((/* implicit */signed char) ((((arr_12 [i_3] [(signed char)4] [(signed char)4] [i_3 + 1] [i_3]) * (((/* implicit */unsigned long long int) var_12)))) | (max((((/* implicit */unsigned long long int) 1720459314)), (arr_12 [9U] [9U] [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [0ULL] [(_Bool)1] [(short)4] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)-26174)) * (((((/* implicit */int) (unsigned char)168)) % (((/* implicit */int) (signed char)-117))))));
                                arr_20 [i_1] [(short)8] [(short)8] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)-117)), (5900861889164449283ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
