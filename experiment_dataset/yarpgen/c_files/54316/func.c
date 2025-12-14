/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54316
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
    var_14 = (-(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_5)) != (var_9)))), (var_8)))));
    var_15 = ((/* implicit */unsigned long long int) (-(min((max((9007199254740480LL), (((/* implicit */long long int) (short)(-32767 - 1))))), (((/* implicit */long long int) ((((/* implicit */int) (short)32766)) ^ (((/* implicit */int) (short)-32761)))))))));
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        arr_3 [15U] [i_0] = ((/* implicit */short) (-(min((arr_1 [(unsigned short)7] [i_0 + 1]), (((/* implicit */int) min(((short)(-32767 - 1)), ((short)(-32767 - 1)))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)13] [i_0])) ? (arr_1 [i_0 + 1] [i_0 - 2]) : (((/* implicit */int) (short)-32767))))) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)16383)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_7)), (var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) || (((/* implicit */_Bool) arr_1 [10ULL] [i_0]))))) : (arr_1 [i_0 + 1] [i_0 - 3])))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((min(((-(134217216U))), (((/* implicit */unsigned int) (-(var_9)))))), (((/* implicit */unsigned int) (unsigned char)240)))))));
        var_19 = ((/* implicit */short) min((min((max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) (unsigned short)2))))))), (((/* implicit */unsigned int) (-((~(var_9))))))));
    }
}
