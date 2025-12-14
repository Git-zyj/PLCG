/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219998
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
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-103)) % (((/* implicit */int) (signed char)-101))))) ? (((((/* implicit */_Bool) min((arr_4 [12LL] [16LL] [16LL]), (((/* implicit */short) (signed char)-103))))) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
                var_17 ^= ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (signed char)103)) / (((/* implicit */int) (signed char)-97)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */short) arr_3 [(signed char)20]);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_6))));
            }
        } 
    } 
    var_20 -= ((/* implicit */short) var_0);
}
