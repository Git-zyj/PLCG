/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222671
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
    var_19 = ((/* implicit */long long int) var_12);
    var_20 |= ((/* implicit */short) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)17398)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_3))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48134))) ^ (arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) arr_1 [i_1 + 2])))));
        var_25 ^= ((/* implicit */_Bool) (((-(((/* implicit */int) arr_3 [i_1 - 1])))) << (((25ULL) - (23ULL)))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [4U] [(_Bool)1] = ((/* implicit */_Bool) var_5);
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_2 [i_3]);
                    var_26 = ((/* implicit */int) var_6);
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(arr_8 [i_3] [i_2] [i_1 + 1])))), ((~(((arr_7 [i_1] [i_3] [(unsigned short)0]) >> (((/* implicit */int) (unsigned short)2)))))))))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)48134), (((/* implicit */unsigned short) (unsigned char)24))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)18)))), (arr_6 [i_1 - 1] [i_1 - 1])))) : ((~(min((((/* implicit */unsigned long long int) var_17)), (var_6))))))))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned char) var_6);
    }
    var_30 = ((/* implicit */unsigned char) var_0);
}
