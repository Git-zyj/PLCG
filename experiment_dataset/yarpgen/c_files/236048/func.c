/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236048
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) > (((/* implicit */long long int) var_3))))) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((unsigned long long int) max((986516890U), (((/* implicit */unsigned int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_1)))), (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((18516738) * (((/* implicit */int) var_13)))) + (((((/* implicit */_Bool) 18516738)) ? (((/* implicit */int) var_12)) : (974159699)))));
        var_22 = ((/* implicit */unsigned short) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((-1532015768) <= (((/* implicit */int) (signed char)-12))))) | (((arr_3 [i_1] [i_1]) + (((/* implicit */int) arr_0 [2LL])))))) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) >= (max((arr_3 [(_Bool)1] [i_1]), (((/* implicit */int) arr_1 [(unsigned char)10] [(signed char)1])))))))));
        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_1]))));
        arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_12))) < (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) (signed char)-126)))))))), (min((((((/* implicit */_Bool) 1008)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(unsigned short)6] [(unsigned short)6])))), ((+(var_19)))))));
    }
    var_25 = ((/* implicit */unsigned char) var_15);
}
