/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237653
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
    var_19 = ((((var_13) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))) & (((/* implicit */unsigned int) var_2)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [16LL] [16LL]))) / (arr_0 [12] [12])))))));
        var_21 = ((/* implicit */unsigned short) ((unsigned int) var_5));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_2]));
            var_23 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(arr_2 [i_1]))))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(-822363634))))));
        }
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3])) >= (((/* implicit */int) var_5))));
            var_26 = ((/* implicit */unsigned char) ((unsigned int) ((short) 4294967284U)));
            arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)11)) != (((/* implicit */int) (short)-14074)))) ? (((((arr_7 [i_1] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)63818)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38239)))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) arr_6 [i_1] [i_4] [i_4]);
            var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned char)255)))));
        }
        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((arr_5 [i_1] [2U] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))) + (arr_0 [i_1] [4U])));
    }
    var_30 = ((/* implicit */unsigned short) (~(((long long int) ((short) var_12)))));
    var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((unsigned int) var_3)))));
}
