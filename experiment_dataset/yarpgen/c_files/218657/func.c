/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218657
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 6063171720431993756LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)13240), (((/* implicit */unsigned short) (short)13205))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1))))))) : ((~(((((/* implicit */_Bool) (short)-13206)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15689036182330450516ULL)))))));
                var_12 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [(_Bool)1])) < (((/* implicit */int) arr_0 [i_0] [i_1])))) ? (((/* implicit */int) max(((unsigned short)54009), (((/* implicit */unsigned short) ((signed char) (signed char)45)))))) : (1770571892)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (((+(1770571892))) != ((+(((/* implicit */int) (unsigned char)21))))))), ((-(var_4)))));
}
