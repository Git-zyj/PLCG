/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233743
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
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)3862))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) max((var_5), ((short)-3863))))));
        var_22 = ((/* implicit */signed char) ((max((((((/* implicit */long long int) ((/* implicit */int) (short)-3863))) | (var_13))), ((+(-4433205870160135091LL))))) - (max((0LL), (((/* implicit */long long int) (short)-27679))))));
        var_23 = ((/* implicit */short) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_0)))), (((/* implicit */int) (short)-24868))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-3848);
        var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)7455)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) var_12))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)(-32767 - 1)))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (long long int i_4 = 4; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1]))))));
                        arr_12 [5] [i_1] [i_2] = ((/* implicit */short) (((-(var_9))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                    }
                } 
            } 
        } 
    }
}
