/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2398
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) max(((signed char)-27), ((signed char)0)))), (min((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_18 ^= var_4;
                        arr_9 [i_3] [i_0] [(unsigned char)7] [i_0] = var_17;
                        arr_10 [i_0] [(short)5] [i_2] [i_3] = (signed char)39;
                        arr_11 [i_0] [i_0] [i_1] [i_2] [10ULL] [i_3] = ((/* implicit */signed char) var_12);
                        arr_12 [i_0] [i_1] [i_2 + 2] [(signed char)0] = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) ((var_17) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)79), (((/* implicit */unsigned char) (signed char)-83))))) >> (((((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_11)))) - (145)))))) : (9221226189124362651ULL)));
    var_20 = ((/* implicit */short) var_16);
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
}
