/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36514
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
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 1773161331))) ? (((8539868495956412895ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_6 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((8539868495956412904ULL), (((/* implicit */unsigned long long int) -3457491461445385707LL))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0 + 1])) - (1490683154)))))) ? (-1066257044) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)43626)) / (((/* implicit */int) (unsigned short)31357))))))));
                    var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) 8539868495956412895ULL))) && (((/* implicit */_Bool) ((int) arr_0 [i_1] [i_1]))))) ? (((long long int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (signed char)86)) > (((/* implicit */int) (unsigned char)218))))))));
                }
            } 
        } 
    } 
}
