/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225189
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
    var_12 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((var_4) ^ (((/* implicit */int) var_3))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)21386)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_4 [(unsigned char)7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) : (((long long int) var_2))))));
                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34409)) ? (((/* implicit */int) (unsigned short)31127)) : (2047))))));
                arr_7 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [2U]))));
                var_14 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_8)), (max((var_9), (((/* implicit */long long int) -2043523784)))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_1])) : (-2047))) == (((/* implicit */int) ((-2040) >= (((/* implicit */int) var_5)))))))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (unsigned short)34409)), (min((((/* implicit */long long int) -2043523767)), (127LL))))))))));
            }
        } 
    } 
    var_16 = min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_4)))) <= (((var_10) ^ (var_10))))), (var_7));
    var_17 = ((/* implicit */long long int) -1483389005);
}
