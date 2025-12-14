/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52788
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_1 [i_0] [i_0])));
        var_16 = ((/* implicit */int) ((long long int) 2147483647));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)51674)) ? (-1342744795981427423LL) : (1784440622403668726LL)));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43))))) : (((/* implicit */int) arr_10 [i_3]))));
                    var_19 -= ((/* implicit */signed char) (short)32767);
                }
            } 
        } 
    }
}
