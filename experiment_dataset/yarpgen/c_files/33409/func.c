/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33409
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
    var_16 = ((/* implicit */unsigned int) var_2);
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (short)-19633))));
        var_19 *= ((/* implicit */unsigned int) min((-19LL), (((/* implicit */long long int) (unsigned short)54997))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)10)), (arr_5 [10LL]))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11497384758786913361ULL)) ? (((((/* implicit */_Bool) (~(-1155996821)))) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_3])) : ((-(((/* implicit */int) (short)32766)))))) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1]))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 1173443025)) != (arr_1 [(_Bool)1] [i_2 + 3])))), (((((/* implicit */_Bool) arr_1 [i_1] [i_2 + 1])) ? (arr_1 [i_1] [i_2 + 2]) : (arr_1 [i_1] [i_2 + 2])))))));
                }
            } 
        } 
        arr_10 [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])), (arr_5 [i_1]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(unsigned char)4] [i_1] [i_1])))))));
    }
    var_23 = ((/* implicit */short) var_12);
}
