/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5058
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
    var_15 &= ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) var_9)), (var_2))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_1)))))))) & (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_16 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), (var_7))))) * ((~(1515257759U))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((min((2779709537U), (((/* implicit */unsigned int) (short)-1)))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        var_18 = min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (arr_0 [i_0] [i_0]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) arr_1 [i_1 + 3]);
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-9))) | (var_2))) + (((/* implicit */long long int) ((((/* implicit */int) (short)1)) | (((/* implicit */int) arr_3 [i_1 + 1])))))));
            arr_6 [(unsigned short)5] [(unsigned short)5] [i_1] = ((/* implicit */short) max((max((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])), (var_13))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 2]))) <= (arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 1]))))));
            arr_7 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((unsigned long long int) (short)-15476))))));
        }
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (arr_4 [i_0] [6] [i_0])))));
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_11 [i_2] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(2779709537U)))), (((long long int) 2147483636))));
        var_21 = ((/* implicit */int) arr_8 [i_2]);
        var_22 = min((var_2), (((/* implicit */long long int) min((arr_8 [i_2]), (arr_8 [i_2])))));
    }
}
