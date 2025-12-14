/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237018
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (((~(((/* implicit */int) ((unsigned short) 778549906))))) < (((/* implicit */int) ((signed char) 1625113389U))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) -778549907)) ? (((/* implicit */int) (short)-27390)) : (((/* implicit */int) (short)-27394))));
                    var_14 -= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned char)101))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((long long int) 778549919));
                    arr_15 [(unsigned short)21] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_10 [i_4 + 2] [i_4 + 1]), (((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5])) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124)))))))) : ((~(((/* implicit */int) ((unsigned char) (short)-1403)))))));
                    arr_16 [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned short) arr_9 [i_4 - 1]));
                    arr_17 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
}
