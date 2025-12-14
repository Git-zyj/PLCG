/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218331
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) max((-7070146203913532142LL), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((217087695U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52797)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (signed char)100))))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_12 = arr_4 [i_1] [i_0] [i_1];
                    var_13 = ((/* implicit */unsigned long long int) (short)-10);
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) arr_4 [i_0] [i_1] [(_Bool)1])))));
                    var_15 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (7430651704480097696LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1]))));
                    var_16 -= ((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_0]);
                }
                var_17 = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_9);
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned short)41576)) : (var_5))))))), (((((/* implicit */int) var_4)) & (((((/* implicit */int) var_1)) | (((/* implicit */int) var_3))))))));
}
