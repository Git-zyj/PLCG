/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247952
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-23823), ((short)23822)))) || (((/* implicit */_Bool) min((arr_7 [i_0] [i_1 - 2] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)23823))))))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((arr_6 [i_2] [i_1 - 2] [i_2] [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (arr_2 [i_0] [i_0])))))) < (((long long int) ((10298257491205672841ULL) * (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                    var_15 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 3] [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)23822))));
}
