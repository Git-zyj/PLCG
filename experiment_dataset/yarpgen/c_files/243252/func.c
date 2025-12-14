/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243252
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((var_11), (var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 65535)) && (((/* implicit */_Bool) (unsigned short)60396))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1430927273)) && (((/* implicit */_Bool) 3673354114U))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((var_0), (arr_1 [i_0 + 2])))) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2]))))), ((+(max((((/* implicit */int) (unsigned char)41)), (arr_1 [i_0 + 1]))))))))));
                arr_4 [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)74))));
            }
        } 
    } 
    var_18 -= max((max((((/* implicit */unsigned long long int) ((unsigned int) var_12))), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10732)) ? (3215221711178310023LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_0 [i_2 - 3] [i_2 - 2])) != (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 3])))));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -3674548692315583241LL)) ? (-6310989466869932733LL) : (((/* implicit */long long int) 2710742029U))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 255U)) && (((/* implicit */_Bool) (unsigned short)16376))));
    }
}
