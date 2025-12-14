/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43541
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1])))));
                var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2])) ^ (((/* implicit */int) arr_4 [i_1 + 2]))))) ? (var_4) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (arr_3 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (-(arr_2 [i_3])));
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-22659)), (((((/* implicit */_Bool) arr_10 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) (-(arr_3 [i_2])))) : (min((((/* implicit */unsigned long long int) var_4)), (15573325203467009541ULL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (_Bool)1);
}
