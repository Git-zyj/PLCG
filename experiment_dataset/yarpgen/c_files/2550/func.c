/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2550
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
    var_18 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)2049)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1479930163U))))) ? ((~(((/* implicit */int) (unsigned short)52579)))) : (var_3)));
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_9)) << ((((+(((/* implicit */int) var_6)))) + (6172))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((short) (signed char)-115)))))) * (((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 3])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_0 [i_0 - 1] [(short)9]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((signed char) var_16));
        var_20 = ((/* implicit */signed char) ((int) arr_4 [i_1] [i_1]));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)115)), (((((((/* implicit */_Bool) (unsigned short)38230)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-10893)))) - ((-(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */int) ((806479377U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-18214)))));
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            var_22 = ((((/* implicit */_Bool) (short)32767)) ? (1098856801) : (1098856810));
            arr_14 [i_2] = ((/* implicit */int) var_10);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_4)))))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (signed char)118))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (short)-18215))));
        }
        arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_10))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) ((short) arr_1 [(short)9])))))) ? ((-(max((var_17), (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    }
}
