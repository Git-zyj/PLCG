/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198290
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned short) (unsigned char)133));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-29)) + ((~(((/* implicit */int) var_6))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-406137950944578028LL)))) || (((/* implicit */_Bool) (unsigned char)156))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        for (short i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((short) (+(min((((/* implicit */long long int) (short)-31224)), (arr_0 [i_1] [i_2]))))));
                arr_8 [i_2] = ((/* implicit */signed char) (~(-4951615564399236417LL)));
            }
        } 
    } 
}
