/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239568
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
    var_13 |= ((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)24131)))) == (var_12)))))));
    var_14 = ((/* implicit */short) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) ((824967408) == (((/* implicit */int) var_10))))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53064)) || (((/* implicit */_Bool) var_6))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */int) var_9);
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)51526)) ? (16631560576719925796ULL) : (8190602965193504585ULL))))))));
                }
            } 
        } 
        arr_9 [i_0 - 4] = ((/* implicit */short) arr_0 [i_0]);
    }
    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((+(((/* implicit */int) (signed char)-57))))));
            arr_16 [i_3] = ((/* implicit */unsigned char) arr_2 [i_3]);
        }
        var_16 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (signed char)-96)));
        var_17 -= ((/* implicit */unsigned char) var_12);
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5 + 1] [(signed char)2] = ((/* implicit */unsigned int) arr_18 [i_5 + 1] [i_5 + 1]);
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) (((-(arr_17 [i_5]))) / (var_7)));
    }
}
