/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54036
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
    var_14 = ((/* implicit */_Bool) 1068186714U);
    var_15 = ((/* implicit */signed char) (~((~(((/* implicit */int) (short)32765))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)65535)))))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_16 = ((((/* implicit */_Bool) (unsigned short)26331)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))));
                var_17 = ((/* implicit */unsigned char) var_3);
            }
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((((/* implicit */int) (unsigned short)39208)) >> (((((/* implicit */int) (short)-32742)) + (32745))))))))));
                arr_13 [i_0] [i_0] [i_3 - 1] [i_3] = ((/* implicit */signed char) arr_2 [i_1] [i_3]);
            }
        }
        var_19 = arr_5 [i_0] [i_0];
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) (short)-13865));
    }
}
