/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234110
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
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)1486)) ? (3642095369050428229ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = min(((+(var_14))), (((/* implicit */unsigned int) arr_0 [i_1])));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [11U])) ? (((/* implicit */int) arr_11 [i_0 + 2] [i_2])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1])))))));
                    arr_13 [i_2] [i_1] [i_2] |= ((/* implicit */short) min((((/* implicit */int) (short)-5678)), (893549419)));
                    var_17 = ((/* implicit */signed char) ((unsigned char) (unsigned short)57344));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((unsigned short) var_7)), (((unsigned short) (+(((/* implicit */int) var_13)))))));
}
