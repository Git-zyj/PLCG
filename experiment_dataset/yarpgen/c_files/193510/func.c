/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193510
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
    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)54029)) ? (2147483647) : (((/* implicit */int) (unsigned short)53878)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), ((((!(((/* implicit */_Bool) 4294967277U)))) ? (min((((unsigned int) var_4)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53878)) / (var_5)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)53873)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] [1ULL] [i_0 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (var_7)))) ? (min((((/* implicit */unsigned long long int) 2376932802U)), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)15473))))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) & (arr_5 [i_0] [i_0 - 1] [i_1])))));
                arr_8 [(signed char)9] [i_0 + 2] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(4294967292U)))) && (((/* implicit */_Bool) 2045485980U))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((802513742U) ^ (40U)))) == (((((/* implicit */_Bool) var_19)) ? (13711100447563671276ULL) : (((/* implicit */unsigned long long int) 2084033977))))))), (((((/* implicit */int) (signed char)-103)) | (((/* implicit */int) (unsigned short)11660))))));
            }
        } 
    } 
}
