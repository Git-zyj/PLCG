/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205760
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65202)))), (((/* implicit */int) ((unsigned char) 8929357157074121426ULL)))))) - (9517386916635430189ULL)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (1743826243682201520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34)))))) ? (arr_2 [i_0] [i_0]) : ((~((-(((/* implicit */int) var_3))))))));
        var_14 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [(unsigned char)9] [i_0])) / (6641639686172352918LL)))))) : (((/* implicit */unsigned long long int) (+(arr_2 [(unsigned char)0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (_Bool)1))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_3 [i_1])) : (-29998369)))))) ? (((long long int) arr_1 [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) + (arr_2 [0U] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) 4194176U)))) : (((/* implicit */long long int) arr_2 [i_1] [i_1]))))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((unsigned int) (-2147483647 - 1)))));
}
