/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192671
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_8))));
    var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 3246349620099346930LL)) ? (((/* implicit */int) max(((short)16256), (((/* implicit */short) (signed char)-97))))) : (((/* implicit */int) ((unsigned short) (short)-32761))))) % (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)57))))) ? (((((/* implicit */_Bool) (signed char)-101)) ? (var_8) : (((/* implicit */unsigned long long int) 3246349620099346929LL)))) : (((/* implicit */unsigned long long int) 2147483647))));
                    arr_7 [i_0] [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (2147483647)))));
                    var_18 += ((/* implicit */signed char) (short)-16257);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) -2147483647)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 3063030524778346246LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55598))) : (12229649804904460409ULL))))) : (((/* implicit */unsigned long long int) var_12))));
}
