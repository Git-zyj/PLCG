/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41188
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = 9223372036854775807LL;
        var_11 = ((/* implicit */unsigned int) max((((int) ((unsigned long long int) arr_0 [i_0]))), (((/* implicit */int) (signed char)1))));
        var_12 = ((/* implicit */signed char) (unsigned short)52415);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned long long int) ((int) var_5)))));
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    var_15 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((((/* implicit */int) (signed char)-8)) | (((/* implicit */int) arr_9 [i_3] [i_2] [i_3])))) : (((/* implicit */int) (signed char)1)))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */_Bool) (~(max(((~(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_5))))));
    var_17 = ((/* implicit */unsigned char) var_7);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))))))));
}
