/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190773
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) (((((-2147483647 - 1)) ^ (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) var_12))))));
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1316540402U)))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_2 [i_2])))) : ((+(((/* implicit */int) (short)-18822))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)186))))))))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62813)) ? (arr_6 [6U] [(unsigned short)7] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
        var_19 ^= ((/* implicit */unsigned char) ((13507954469350155656ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) == (1316540389U)));
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_20 |= ((/* implicit */unsigned long long int) ((int) (_Bool)0));
        arr_13 [i_3] = ((/* implicit */long long int) (signed char)(-127 - 1));
        arr_14 [i_3] [i_3] = ((unsigned short) (((~(((/* implicit */int) (unsigned short)36679)))) - (((int) var_4))));
    }
    var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)12829)) : (var_15)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)249))))));
}
