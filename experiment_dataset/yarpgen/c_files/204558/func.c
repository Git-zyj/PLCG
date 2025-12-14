/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204558
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (-(((((/* implicit */_Bool) 578718169)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        var_11 = ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)127)), (4598741196371944538LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [(unsigned char)8] [i_0])) : ((~(((/* implicit */int) var_6)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 1192363196))) & (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_1]))))));
        var_12 *= ((/* implicit */unsigned int) var_4);
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_13 = ((/* implicit */short) ((arr_9 [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55)))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (-2147483628)));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1192363196)) ? (-4598741196371944545LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        arr_10 [i_2] [i_2] &= ((/* implicit */unsigned short) (~(542962423489104499ULL)));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1)))) : (((((/* implicit */int) var_3)) * (((/* implicit */int) var_9))))))) : (var_7)));
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
}
