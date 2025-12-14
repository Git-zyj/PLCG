/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3112
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
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)25789)) : (((/* implicit */int) (unsigned short)25789)))) << (((((/* implicit */int) ((unsigned short) var_4))) - (4579)))))), (max((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)44579), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)39746))))))))));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (var_0) : ((~((~(((/* implicit */int) (unsigned short)39746)))))));
                    arr_10 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_1) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_1])))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (var_2)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))) ? ((-(11463626616608928323ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_12)))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_0) / (((/* implicit */int) (unsigned char)102)))), (((((/* implicit */int) var_10)) | (var_11)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)39746)) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
