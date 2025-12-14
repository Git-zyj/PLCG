/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45448
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 ^= ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */_Bool) 1570846214U)) && (((/* implicit */_Bool) var_1))))), (((signed char) (_Bool)1))));
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -2056496475))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) < (2056496474))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : (min((11054840466021021170ULL), (var_9))))))));
            }
        } 
    } 
    var_11 &= ((/* implicit */int) ((signed char) var_9));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2]))))) ? (min((((/* implicit */unsigned long long int) 4294967292U)), (arr_9 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_2])))))));
                arr_14 [15U] = ((/* implicit */int) arr_8 [i_2]);
            }
        } 
    } 
}
