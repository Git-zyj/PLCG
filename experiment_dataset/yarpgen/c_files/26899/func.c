/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26899
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)84))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) (unsigned short)65024);
                        var_18 = ((/* implicit */unsigned long long int) arr_9 [i_3]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (-(9223372036854775782LL)))), ((~(var_6))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */long long int) 0)) : (-9223372036854775782LL)))))))));
        var_20 = ((/* implicit */unsigned char) (unsigned short)63599);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                arr_21 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((((~(9223372036854775807LL))) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)66)) - (66)))))) ? (arr_19 [i_6 + 2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6 + 2])))));
                var_21 = ((/* implicit */unsigned char) 0U);
                var_22 = ((/* implicit */unsigned short) arr_20 [i_5]);
            }
        } 
    } 
}
