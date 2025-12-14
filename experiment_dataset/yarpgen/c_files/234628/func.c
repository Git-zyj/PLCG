/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234628
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
    var_19 &= ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */signed char) (~(arr_1 [i_0])));
        var_20 = ((/* implicit */short) 7256023667354993021ULL);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_21 -= ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                        arr_14 [i_3] [13U] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2])) <= (((/* implicit */int) (short)-18545))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)10159))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) < (var_3))))))) : (((/* implicit */int) var_7))));
}
