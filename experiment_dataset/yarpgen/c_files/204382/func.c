/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204382
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11324)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((unsigned short)20128), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)32767)) << (((arr_2 [i_1 - 2]) - (4269933887011562609LL))))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)184)) ^ (((/* implicit */int) (unsigned short)55456))))) >= (((unsigned long long int) (unsigned short)32785)))))));
                }
                arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)65)) >= (((/* implicit */int) arr_8 [i_1 + 1] [i_0] [i_1 + 1] [i_1 - 2]))))) > ((-(((/* implicit */int) (unsigned short)24592))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) (unsigned short)45401);
}
