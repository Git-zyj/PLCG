/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210557
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 0U))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1550067214289805744ULL) << (((/* implicit */int) (signed char)56))))) && (((/* implicit */_Bool) (unsigned short)43225))));
                        var_20 = ((/* implicit */unsigned char) (short)2);
                    }
                } 
            } 
        }
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */long long int) ((((((((/* implicit */int) (signed char)0)) << (((((/* implicit */int) (short)-23)) + (46))))) ^ (((((((/* implicit */int) (short)-24419)) + (2147483647))) >> (((-2147483634) + (2147483643))))))) << (((((((-5808018590644616294LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) - (3415353446210159506LL)))));
}
