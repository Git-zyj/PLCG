/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232692
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
    var_17 = var_13;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 - 1])) + (2147483647))) >> (((18075023884810998803ULL) - (18075023884810998801ULL)))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) ((unsigned long long int) 63));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            var_20 = ((_Bool) (signed char)-50);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_1 [i_1 - 2])));
                            var_22 |= ((/* implicit */int) ((unsigned int) 0));
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))));
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (7ULL)));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))))));
                    }
                } 
            } 
        } 
        var_26 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 1073741824)) & (15ULL)));
        arr_14 [i_0] [i_0] = ((unsigned long long int) -1);
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned char)183)) > (((/* implicit */int) arr_16 [i_5])))));
        var_27 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) * (18075023884810998820ULL))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_11);
    var_29 = ((/* implicit */signed char) ((unsigned short) var_9));
    var_30 = ((short) ((unsigned long long int) var_5));
}
