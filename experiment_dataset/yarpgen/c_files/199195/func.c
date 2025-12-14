/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199195
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
    var_20 = (+(min((((/* implicit */int) ((short) var_12))), (((((/* implicit */int) (unsigned char)244)) * (((/* implicit */int) (unsigned short)45149)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))))), (((1048689270788266700ULL) - (((/* implicit */unsigned long long int) -1211626922))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0 - 1] [i_0 + 1]) != (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)3304)))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))), (min((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25243))) - (min((((/* implicit */unsigned long long int) (unsigned short)60848)), (17398054802921284928ULL))))), (((/* implicit */unsigned long long int) var_16))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            {
                var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) (signed char)-106))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-62)), (arr_6 [i_1]))))))))))));
                arr_9 [i_2] = ((/* implicit */int) ((unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (4823741194940612413ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_24 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (1337384015805923800ULL)))))) | (max((((/* implicit */unsigned long long int) var_3)), (17398054802921284931ULL))));
    var_25 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_0)))))))));
}
