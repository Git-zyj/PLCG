/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205377
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
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [3] [i_1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)68)), ((unsigned short)57821)))))))) == (((arr_4 [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_3 [i_1] [i_0])))))))))));
                arr_5 [(unsigned char)12] [i_1] = ((/* implicit */unsigned int) ((int) (_Bool)1));
            }
        } 
    } 
    var_13 = (-(((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))))))));
}
