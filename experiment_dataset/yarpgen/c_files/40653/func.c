/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40653
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
    var_20 &= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_21 += ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 3]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) var_9)), ((+(((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0 - 2] = ((/* implicit */_Bool) min((arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)17266)))));
                        var_22 = ((((/* implicit */_Bool) ((unsigned int) ((2196538394U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) ? (min((((/* implicit */int) var_4)), (min((8191), (((/* implicit */int) (unsigned short)65535)))))) : ((+(var_6))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_23 += ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) 2196538387U)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                        var_24 = var_9;
                    }
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min(((unsigned char)169), (((/* implicit */unsigned char) (signed char)-111))));
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) 1959203591)) ? ((+(((/* implicit */int) (short)-17511)))) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)34)) : (var_0))))));
    var_27 = ((/* implicit */unsigned int) var_16);
}
