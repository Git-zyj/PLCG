/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36039
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
    var_13 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((+(4615473751541894070LL))) << (((((((/* implicit */int) (signed char)-112)) + (114))) - (2)))))))))));
    var_15 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1952192885)) * (min((((/* implicit */long long int) var_12)), (4615473751541894070LL)))))) ? (((((/* implicit */_Bool) (signed char)-112)) ? ((+(((/* implicit */int) (signed char)16)))) : (min((-1952192885), (((/* implicit */int) (short)31629)))))) : ((~(((/* implicit */int) (short)14632))))));
                    var_16 = ((/* implicit */unsigned short) min((((max((((/* implicit */long long int) (short)31482)), (4615473751541894092LL))) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 188895067U)))))))));
                    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((long long int) arr_7 [i_1 - 1] [12] [16])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) arr_10 [i_0] [16U] [16U])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (var_11) : (((/* implicit */int) arr_6 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_2 + 2]))))));
                }
            } 
        } 
    } 
}
