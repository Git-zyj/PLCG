/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225640
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
    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(var_7)))))) ? ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)510)) : (var_3))))) : ((~((-(((/* implicit */int) (unsigned char)209))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_4))) / (((/* implicit */int) ((((/* implicit */_Bool) 4503599627239424LL)) && (((/* implicit */_Bool) (unsigned char)46)))))))) ? ((-(5201224361378448655LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4285273510U))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))) < (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(_Bool)1]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1]))))) : (1478702019U)))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((short) ((((/* implicit */_Bool) (short)-20464)) ? (var_2) : (arr_0 [i_1])))));
            }
        } 
    } 
}
