/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199122
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                arr_5 [i_0] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)1920)) < (((/* implicit */int) arr_0 [i_0]))))))), ((~(((/* implicit */int) (unsigned short)60297))))));
                var_18 = (((-(((/* implicit */int) arr_0 [i_1])))) * (((/* implicit */int) arr_0 [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_19 = ((/* implicit */int) ((min((arr_6 [i_2 + 2]), (arr_6 [i_2 + 1]))) * (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-441)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-448))))))));
        var_20 = ((/* implicit */unsigned char) arr_7 [1LL] [(unsigned short)13]);
        var_21 = ((/* implicit */int) ((var_12) != ((-(arr_6 [i_2 + 2])))));
        var_22 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)1920)), (arr_6 [i_3])))))));
        arr_10 [i_3] [10] = ((/* implicit */_Bool) var_6);
    }
    var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((~(max((((/* implicit */unsigned long long int) var_17)), (var_15))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */int) var_6)) - (var_16))))))));
    var_25 = ((/* implicit */unsigned char) var_10);
}
