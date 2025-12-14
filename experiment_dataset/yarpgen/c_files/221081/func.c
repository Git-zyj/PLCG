/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221081
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
    var_16 = ((/* implicit */unsigned short) max((min((5910217374702509413ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_15)))))), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_11))) >> ((+(((/* implicit */int) ((var_11) > (arr_2 [10ULL]))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_3 [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) >= (var_13)));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((arr_3 [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 - 2]))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)127))))))))));
            var_21 &= ((/* implicit */unsigned char) ((unsigned long long int) 3924162360752836261LL));
            var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) (signed char)127)), (2148657329U))), (var_5)));
        }
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((9007199254740991ULL), (12536526699007042202ULL))))));
                var_25 = ((/* implicit */unsigned char) arr_9 [i_2] [i_3]);
            }
        } 
    } 
}
