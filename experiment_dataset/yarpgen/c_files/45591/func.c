/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45591
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [(short)1]);
        arr_2 [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (signed char)-122)))), (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) arr_1 [(_Bool)1])));
    }
    for (long long int i_1 = 3; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-106)) / (((/* implicit */int) (signed char)120)))))), (((arr_4 [i_1 - 3]) ? (((/* implicit */int) arr_4 [i_1])) : (((arr_4 [i_1]) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)-121))))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-123)) ? (arr_3 [i_1]) : (((/* implicit */int) (signed char)120))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1272657918)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned int) (unsigned char)255)), (4294967272U)))))) : (((long long int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_6)))))));
    }
    var_16 &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6144))) == (var_10)))))), (((/* implicit */int) (_Bool)1))));
}
