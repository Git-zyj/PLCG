/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232160
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_17 -= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) < (5664199828525405198ULL)))) < ((-(((/* implicit */int) arr_0 [i_0 + 2]))))))), (((((/* implicit */int) (unsigned char)200)) + (((/* implicit */int) (unsigned char)217))))));
        arr_3 [i_0] = (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1]))))) ? ((~(var_8))) : ((~(((/* implicit */int) arr_2 [(signed char)14]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) < (arr_1 [i_0 + 3]))))))) : (((((((/* implicit */int) var_12)) < (((/* implicit */int) arr_0 [i_0 + 3])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [10LL])))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_0 + 3] [i_1 - 1])))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_4))))))) ? (min((((/* implicit */long long int) ((arr_5 [i_0 + 3] [i_0 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 2])))))), (arr_1 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)25))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0 + 1])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_6))))))) ? ((-(max((4294967295U), (((/* implicit */unsigned int) 2147483647)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) arr_0 [i_1 - 2]))))))))));
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_5 [i_0 + 1] [i_1 + 1]) < (arr_5 [i_0 + 2] [i_1 - 2]))))));
            arr_6 [i_0] = ((/* implicit */signed char) min((max(((unsigned char)214), ((unsigned char)29))), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) ((arr_1 [i_1 - 2]) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
        }
        var_23 = ((/* implicit */short) arr_5 [i_0 + 2] [i_0 + 2]);
    }
    var_24 = ((/* implicit */short) ((((unsigned long long int) var_16)) < (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)41315)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (signed char)-53)))))))));
}
