/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190957
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((2147483647), (((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))))) ? ((-(((/* implicit */int) min((var_3), (var_8)))))) : ((-(((/* implicit */int) var_8))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) arr_1 [i_0]))))) / (min((var_1), (((/* implicit */long long int) 2147483647))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) (short)-9404);
                    var_14 = ((/* implicit */_Bool) (-((~(((long long int) arr_7 [i_3 + 1] [i_3]))))));
                    arr_14 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)9404)) : (((/* implicit */int) var_5))))) ? (var_4) : (((((/* implicit */unsigned long long int) -248229437)) ^ (var_4)))))));
                    arr_15 [i_3] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_5)), (arr_2 [i_3] [i_3 - 1] [i_3]))) >> (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)-9405))))));
                }
            } 
        } 
    } 
}
