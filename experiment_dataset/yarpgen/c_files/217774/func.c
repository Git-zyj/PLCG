/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217774
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
    var_12 = ((/* implicit */short) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(776437431)))) + (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))))));
                var_14 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))) > (((/* implicit */int) max(((unsigned short)49173), (((/* implicit */unsigned short) (short)21203)))))))) != (((/* implicit */int) arr_0 [i_0] [i_1 + 1]))));
                arr_4 [1LL] [1LL] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_1 [(short)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4020))) : (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))))) << (((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((/* implicit */int) arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)127)) >> (((/* implicit */int) (unsigned short)3))))) : (max((arr_3 [i_0] [i_1 + 3] [i_0]), (((/* implicit */unsigned int) arr_2 [(unsigned short)8] [i_1]))))))));
                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_3 [i_0] [i_1 + 2] [i_1 + 3]) >= (arr_3 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)42902))));
    var_18 = ((/* implicit */long long int) ((unsigned int) (signed char)-61));
    var_19 ^= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-5733)) : (1743992040))))) ? (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))) ? (((/* implicit */unsigned long long int) var_5)) : ((~(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
