/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248785
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((signed char) ((short) ((unsigned short) var_4))));
                        var_15 = ((/* implicit */unsigned int) ((short) ((long long int) ((unsigned char) (unsigned short)64443))));
                        var_16 = ((/* implicit */short) ((signed char) ((unsigned char) ((int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((short) ((unsigned short) arr_2 [i_0])));
                        var_18 = ((/* implicit */short) ((unsigned int) ((_Bool) 18446744073709551615ULL)));
                    }
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) ((unsigned int) (unsigned short)64462))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((long long int) var_6))));
}
