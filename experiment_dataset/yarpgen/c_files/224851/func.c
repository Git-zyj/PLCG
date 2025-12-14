/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224851
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
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_2)), (var_11)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [(unsigned char)12] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)8]))) : (var_10)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_10))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), ((((!(((/* implicit */_Bool) var_11)))) ? (arr_0 [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))));
        var_15 &= ((/* implicit */unsigned int) var_11);
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (var_10) : (max((min((((/* implicit */long long int) var_2)), (var_10))), (((/* implicit */long long int) var_1))))));
        var_17 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) 1448456818))), (((((/* implicit */_Bool) min((arr_8 [(_Bool)1] [(signed char)14]), (((/* implicit */short) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) : (var_12)))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_18 = ((/* implicit */signed char) arr_1 [0ULL]);
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 8463458097131504855ULL)))))));
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1]))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1944496806U)))));
        var_19 = var_3;
        arr_16 [3LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [(unsigned short)0])) > (((/* implicit */int) var_9))));
    }
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))))))))));
    var_21 = ((/* implicit */unsigned short) var_10);
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_6))));
}
