/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198782
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
    var_15 |= ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))))), (((unsigned long long int) 1152921504606846720LL))));
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (max((((/* implicit */unsigned int) var_4)), ((+(var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) (unsigned short)5895)) : (((/* implicit */int) (signed char)31)))) > (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) (unsigned char)136)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((1771935460U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */long long int) (unsigned char)167);
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) ((short) max(((-(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
        var_21 += ((/* implicit */unsigned int) ((((2523031843U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)0))));
    }
}
