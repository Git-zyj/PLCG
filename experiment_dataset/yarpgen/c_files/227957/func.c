/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227957
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) var_6);
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_3 [i_1 + 3] [i_1 + 3] [i_0]), (((/* implicit */unsigned short) (unsigned char)182))))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
            arr_10 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
            arr_11 [i_2] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)64451)))) : (arr_8 [i_0] [i_0])));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-6671963419633717422LL) : (((/* implicit */long long int) arr_8 [i_0] [i_2]))));
        }
        var_21 *= ((/* implicit */unsigned short) max((((max((5118998177780342582ULL), (((/* implicit */unsigned long long int) (unsigned short)38239)))) & (((((/* implicit */_Bool) (unsigned char)1)) ? (var_3) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)246))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
        arr_12 [(short)0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(8961142801514629688LL))) / (((/* implicit */long long int) ((404914803) | (((/* implicit */int) var_1)))))))) ? ((~((+(var_3))))) : (max((((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */int) arr_2 [1U]))))), (((unsigned long long int) var_8))))));
    }
    var_22 += ((/* implicit */_Bool) var_6);
}
