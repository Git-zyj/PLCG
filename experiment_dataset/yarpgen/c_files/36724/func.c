/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36724
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_19 |= ((/* implicit */unsigned short) (+((~(-123003669749070525LL)))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) -2790713463694908328LL);
                        arr_8 [(signed char)5] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned short)8191))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = (+((~(67108863))));
                    }
                } 
            } 
        } 
        arr_10 [(signed char)10] [i_0] |= ((((/* implicit */int) (unsigned char)107)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
        var_21 = -624095855;
        var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(2147483647))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)79)) >> (((((/* implicit */int) (short)-1)) + (5))))) >> (((((/* implicit */int) var_12)) - (34)))))) / (var_11)));
}
