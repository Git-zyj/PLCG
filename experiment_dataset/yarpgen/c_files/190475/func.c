/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190475
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned short)56813))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ^ (((2147483647) ^ (((/* implicit */int) (unsigned short)13304)))))))));
                    var_11 = var_5;
                    var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned char)224)))) : (((/* implicit */int) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) min((arr_8 [i_0] [i_1] [i_2] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_2]))))));
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)9])) ? (-1) : (((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1] [i_2]))))))) || (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)28)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [11ULL] [i_1] [i_0])) || (((/* implicit */_Bool) var_5))))))))));
                    var_14 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) arr_10 [i_3]);
                    arr_16 [i_5] [(_Bool)0] = ((((/* implicit */unsigned long long int) var_3)) ^ (((unsigned long long int) (unsigned short)9692)));
                    arr_17 [10ULL] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_4] [i_5]))))))));
                    var_16 ^= ((/* implicit */_Bool) arr_5 [i_3] [0] [i_5]);
                }
            } 
        } 
    } 
}
