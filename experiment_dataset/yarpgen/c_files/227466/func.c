/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227466
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((int) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15057))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
            arr_7 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) (unsigned short)190))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)5))))), (((long long int) arr_2 [i_1 - 1] [i_1 - 1]))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) (unsigned short)0))), (((arr_9 [19] [19]) ? (arr_2 [i_3] [(unsigned short)4]) : (((/* implicit */long long int) var_10))))))) ? ((~(((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((short) arr_11 [1])))));
                    arr_16 [i_0] [8] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (short)32752))))) ? ((+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [18LL]))) : (-8125098295615294954LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)10] [i_3])))));
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned short) ((arr_2 [i_3] [(short)16]) ^ (((/* implicit */long long int) arr_1 [i_2])))));
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1220178727)) ? (372155666809364409LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)77))));
    }
}
