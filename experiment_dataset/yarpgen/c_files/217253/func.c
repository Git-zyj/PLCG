/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217253
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
    var_15 -= ((/* implicit */int) (signed char)91);
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (6055339377107405679LL) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)80)) ? (4294967295U) : (var_13)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1887840015)) ? (((/* implicit */int) var_3)) : (((((((/* implicit */int) (signed char)-81)) + (2147483647))) >> (((arr_4 [6]) - (1850549403)))))))) % (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1])) ? (((/* implicit */long long int) arr_3 [i_0 + 2] [i_1 + 1])) : (var_7)))));
            var_18 = ((/* implicit */unsigned short) var_6);
        }
        var_19 = arr_2 [i_0] [i_0];
        var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2])))), (((/* implicit */int) arr_6 [i_2] [i_2]))));
        var_22 = ((/* implicit */unsigned int) var_5);
        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */int) min((var_3), (arr_6 [i_2] [i_2])))) >> (((max((arr_8 [i_2]), (((/* implicit */long long int) -1887840033)))) - (4881309836417028729LL)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((min((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3]))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)82)) << (((/* implicit */int) ((arr_10 [i_3] [i_3]) || (((/* implicit */_Bool) var_9))))))))));
        var_24 = ((/* implicit */unsigned int) ((arr_9 [i_3] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
}
