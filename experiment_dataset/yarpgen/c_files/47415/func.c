/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47415
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
    var_19 = ((/* implicit */unsigned char) ((var_11) >> (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) ((var_14) >= (var_14)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) min((max((arr_1 [i_0] [8LL]), (arr_1 [i_0] [(short)10]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [(unsigned char)0])) == (((/* implicit */int) arr_4 [i_0])))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), (max((((/* implicit */unsigned short) var_8)), ((unsigned short)40650)))))))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_18)))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), ((unsigned char)174)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)200))))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)60310)) : (var_9)));
}
