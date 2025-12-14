/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240343
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_3 [i_0 - 1] [7LL] [i_0 + 1]), (var_11)))), (min(((-(arr_0 [i_0]))), ((~(var_8)))))));
                var_17 &= (~(2308980103133485568ULL));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1))))) >> ((((+(-1152921504606846976LL))) + (1152921504606846976LL))))) & ((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_10)))))))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((((+(var_7))) - (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))), (var_13))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) var_0))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)0)))))));
        var_22 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (var_15))), (((/* implicit */unsigned long long int) min(((short)-32761), ((short)31392)))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min(((+((~(((/* implicit */int) arr_7 [i_2] [i_2])))))), ((((+(((/* implicit */int) (unsigned char)161)))) ^ (min((511), (((/* implicit */int) arr_8 [i_2] [i_2])))))))))));
    }
}
