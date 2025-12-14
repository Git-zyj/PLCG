/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192350
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 4] [i_2] = ((/* implicit */signed char) ((short) (signed char)-19));
                    var_11 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_7))) | ((+(((/* implicit */int) ((unsigned char) -1709867343)))))));
                    var_12 = ((/* implicit */int) (+(arr_3 [i_0] [i_1])));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))) : ((-(arr_3 [i_0] [i_0]))))));
        arr_10 [14U] [i_0] &= ((/* implicit */short) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20443)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_14 += ((/* implicit */unsigned int) 9192831703978696921ULL);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */_Bool) arr_11 [i_4]);
                    arr_22 [i_3] [i_3] &= ((/* implicit */unsigned int) max(((-(arr_13 [i_5]))), (((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))) : (arr_13 [i_4])))));
                    arr_23 [i_4] [i_4] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_16 [i_3]))))));
                    arr_24 [i_3] [i_4] [i_4] = ((/* implicit */signed char) var_9);
                }
            } 
        } 
        arr_25 [i_3] |= ((/* implicit */unsigned long long int) (+(-1709867343)));
    }
    var_15 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 782000824U))));
}
