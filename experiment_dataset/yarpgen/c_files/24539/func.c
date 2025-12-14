/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24539
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
    var_11 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) var_7)) ? (10986318516395474168ULL) : (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) arr_0 [i_0] [3]);
        arr_2 [12] |= ((/* implicit */unsigned char) 4746101637353360995ULL);
        arr_3 [i_0] [i_0] = ((unsigned long long int) max((arr_1 [i_0 - 1] [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */_Bool) 17179869183LL);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) | (((/* implicit */int) max((arr_1 [i_0 - 1] [i_0]), (arr_1 [i_0 - 3] [i_0]))))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((long long int) ((unsigned char) ((((/* implicit */int) arr_6 [(unsigned short)13])) / (((/* implicit */int) arr_6 [i_1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) 17179869183LL);
        var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_6 [(unsigned short)10])))))), ((+((-(var_7)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_15 = ((/* implicit */_Bool) min((max((4746101637353360995ULL), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2] [i_2])) / (((/* implicit */int) var_10)))))));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_1 [i_2] [i_2]))) / (((/* implicit */int) arr_1 [i_2] [i_2]))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-15673))))) ? (((((/* implicit */unsigned long long int) var_7)) | ((+(arr_5 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2]))))) : ((~(((/* implicit */int) arr_6 [(_Bool)1]))))))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((short) arr_9 [i_2]));
    }
}
