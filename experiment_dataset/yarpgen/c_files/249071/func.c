/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249071
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
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((long long int) max((var_9), (((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_1))));
        arr_7 [(short)17] = ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [(_Bool)1]))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))));
        arr_8 [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 844861848)) / (4294967284U)));
            arr_11 [i_2] [(unsigned short)1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_7)))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (arr_5 [(unsigned short)3]) : (arr_5 [(short)13]))))))));
            arr_12 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_1])))) ? (min((arr_10 [16U] [i_1]), (11U))) : (arr_10 [i_1] [i_1])));
            var_23 = 844861859;
        }
        var_24 = ((/* implicit */int) max((var_24), ((-(((/* implicit */int) ((short) arr_4 [i_1])))))));
    }
    var_25 = ((/* implicit */signed char) var_7);
    var_26 = ((/* implicit */short) var_10);
}
