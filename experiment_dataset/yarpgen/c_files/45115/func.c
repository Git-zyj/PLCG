/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45115
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
    var_16 ^= var_5;
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) | (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-121)))) | (((((((/* implicit */int) var_6)) | (((/* implicit */int) var_14)))) & (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-115)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1201138389U), (arr_1 [i_0] [i_1])))) ? (min((var_0), (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_2)))))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0])) == (arr_3 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) (((-(var_9))) != (var_9))))));
                var_18 ^= ((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_2 [i_1])));
                var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)112)) - (90)))))) ? (((((/* implicit */_Bool) 1201138394U)) ? (arr_3 [(unsigned char)6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_15);
}
