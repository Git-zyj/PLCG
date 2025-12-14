/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2123
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) var_6))), (18446744073709551609ULL)));
    var_12 |= ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))))), (12212524190794208108ULL)))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_7), (var_1))) + (max((var_7), (((/* implicit */long long int) var_9))))))) && (((/* implicit */_Bool) ((unsigned int) (+(var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [11U] = ((/* implicit */short) min((((((((/* implicit */_Bool) (unsigned short)8466)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))) + (((/* implicit */long long int) ((/* implicit */int) ((var_10) != (((/* implicit */long long int) -2107585199)))))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                    var_14 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14349))) : (var_10))))) + (((/* implicit */long long int) ((unsigned int) (unsigned char)205)))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_3 [13LL] [i_0])) / (((/* implicit */int) arr_0 [i_2]))))) != (max((((/* implicit */long long int) var_4)), (var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)17)), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)82))) != (((/* implicit */int) ((unsigned short) var_1))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_5)) : (var_1)))))));
}
