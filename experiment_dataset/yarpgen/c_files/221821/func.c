/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221821
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_8))))) != (((/* implicit */int) var_2)))) ? (min(((-(((/* implicit */int) (signed char)-30)))), (-411247657))) : ((-(((/* implicit */int) ((signed char) var_15)))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 2171161324954241141ULL))) ? (((/* implicit */long long int) 411247657)) : (((((/* implicit */_Bool) 16275582748755310474ULL)) ? (-1198383737965502915LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6131)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1 - 4] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_5 [i_1 - 3] [i_1 - 4]), (arr_5 [i_1 - 3] [i_1 - 4])))) / (((/* implicit */int) ((signed char) -1942114191)))));
                    arr_10 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) -8003118888833250395LL);
                    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16))));
                }
            } 
        } 
    } 
}
