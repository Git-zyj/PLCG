/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194946
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))), (((/* implicit */unsigned long long int) (+(var_3))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] &= ((/* implicit */int) ((signed char) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_2]))))))));
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    arr_11 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 796640244U)))))) : ((+(((/* implicit */int) arr_1 [i_1]))))));
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) min((((/* implicit */int) arr_4 [i_2])), (var_2)))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_3]))))) : (arr_0 [i_3]))));
                    arr_17 [i_3] [i_1] |= ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) var_5)), (arr_15 [i_0] [i_0] [i_3])))));
                    var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_7 [i_0] [i_1] [i_3] [i_1]))))) : (((unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1]))));
                }
                arr_18 [i_0] [i_0] |= ((/* implicit */unsigned char) (((_Bool)0) ? ((~(((/* implicit */int) arr_6 [i_0] [i_1])))) : ((+(((/* implicit */int) ((unsigned char) 1213745356071065116ULL)))))));
                arr_19 [i_0] = ((/* implicit */int) (~((-(((((/* implicit */_Bool) arr_3 [0ULL] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (13ULL)))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((18446744073709551603ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) 18446744073709551600ULL)))));
}
