/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208255
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (arr_2 [i_1]))) | (min((var_2), (((/* implicit */unsigned long long int) arr_1 [10LL]))))))) ? (((((/* implicit */_Bool) (short)-29547)) ? (max((((/* implicit */long long int) (short)29559)), (4489977871076081651LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-17567), ((short)22401))))))) : (((((/* implicit */_Bool) var_12)) ? (min((-8221169004861356431LL), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) arr_1 [i_0]))))));
                var_15 = arr_0 [i_1];
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) ((short) var_6))), (((((/* implicit */int) (signed char)119)) | (((/* implicit */int) (short)-2784)))))));
    var_17 = ((/* implicit */signed char) var_1);
}
