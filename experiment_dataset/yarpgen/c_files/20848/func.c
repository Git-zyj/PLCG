/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20848
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
    var_11 = min((((2958651359106757875ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32216))))), (min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) (short)25359)), (var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) var_5);
                    var_13 = ((/* implicit */signed char) ((((((arr_6 [1U] [i_1 + 1] [(unsigned char)2] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)64)) - (64))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) >> (((((/* implicit */int) (signed char)-65)) + (80)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((var_9) + (3138701920081884980LL))) - (7LL))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_2 [i_2] [i_0]);
                    var_15 = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        var_16 = ((/* implicit */short) var_2);
    }
    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) + (((/* implicit */int) (unsigned short)1))))), (var_7))))))));
        var_18 = ((/* implicit */unsigned short) ((short) var_4));
        var_19 += ((/* implicit */unsigned short) ((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))));
    }
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((var_9), (((/* implicit */long long int) (short)1380)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-65)) == (((/* implicit */int) (short)1391)))))))))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-49)), (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))))));
}
