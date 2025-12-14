/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225459
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
    var_10 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] = max((((/* implicit */unsigned long long int) arr_0 [i_1 + 2] [i_1 - 1])), (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (16383919066159364383ULL))))));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)5)), (var_2)))) / (arr_6 [i_0])))) && (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0]))))) != (var_1)))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_0))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 622726341)) ? (((/* implicit */unsigned int) max((-1436571687), (((/* implicit */int) ((unsigned char) var_2)))))) : (((unsigned int) (short)17534))));
}
