/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38097
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4701566035510497791LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)255))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((int) 15612249862350418076ULL));
                            var_18 = ((/* implicit */short) (-((((+(((/* implicit */int) var_3)))) >> (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [(short)18] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_1])) ^ (((/* implicit */int) var_14))))))));
        }
    }
    var_20 = ((/* implicit */int) ((signed char) var_13));
}
