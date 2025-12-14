/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30296
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
    var_11 ^= ((/* implicit */long long int) 4502942983363801321ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((short) ((unsigned int) (short)24098)));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((arr_2 [i_1 - 4] [i_1 - 4] [i_0]) + (arr_2 [i_1 - 4] [i_1 - 4] [i_0])))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [(_Bool)1] &= ((/* implicit */_Bool) -695402777653959382LL);
                                arr_17 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 4] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((13943801090345750299ULL) | (1ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4502942983363801321ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2))))) : (arr_2 [i_0] [i_1 + 4] [i_0])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
