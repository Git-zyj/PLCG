/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46234
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
    var_19 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */signed char) var_10)), (min((((/* implicit */signed char) (_Bool)1)), (var_11))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)55)), ((unsigned char)157)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((var_5), (((/* implicit */long long int) (signed char)-1)))))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */int) ((unsigned long long int) arr_5 [i_0]));
            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-118)))))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (max((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (unsigned char)13)), (var_12)))))), (arr_6 [i_0])))));
            arr_8 [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */int) (unsigned short)21150)), (var_1))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_23 = ((/* implicit */signed char) min((((((/* implicit */int) arr_10 [i_0] [i_2])) ^ (((((/* implicit */_Bool) arr_1 [(signed char)1] [i_2])) ? (((/* implicit */int) var_13)) : (941356063))))), ((+(((var_4) + (((/* implicit */int) arr_9 [5]))))))));
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2])) ? (min((3407309814U), (((/* implicit */unsigned int) var_6)))) : (((1850742093U) & (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))));
            var_24 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */int) var_18)), (((((/* implicit */int) (unsigned short)65533)) ^ (((/* implicit */int) (_Bool)1)))))));
            arr_12 [i_0] [i_2] = ((int) arr_9 [(_Bool)1]);
        }
    }
    var_25 = ((/* implicit */short) ((signed char) ((unsigned int) ((unsigned short) var_17))));
}
