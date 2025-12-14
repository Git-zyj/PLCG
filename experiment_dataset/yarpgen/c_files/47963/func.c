/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47963
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
    var_17 = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))))) > (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */int) (short)-8563);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((var_9), (((/* implicit */unsigned int) -408302934))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)207))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((unsigned int) 2147483647))));
        arr_5 [i_0] = min((((/* implicit */short) (signed char)-96)), ((short)2323));
        arr_6 [(short)12] = ((/* implicit */_Bool) var_6);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                arr_12 [i_1] = ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) (short)-19155)))))), ((+(((/* implicit */int) var_11))))));
                arr_13 [i_2] = ((/* implicit */int) arr_8 [i_1] [i_1]);
            }
        } 
    } 
}
