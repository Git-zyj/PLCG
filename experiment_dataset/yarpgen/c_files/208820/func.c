/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208820
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (4294967294U))));
        var_21 *= ((/* implicit */unsigned long long int) (signed char)67);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (signed char)-68);
                    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))) : (4200651727U)));
                    arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)52)))) / (((/* implicit */int) (short)18831))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (((((/* implicit */_Bool) (unsigned char)221)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))))));
                }
            } 
        } 
        arr_7 [(short)12] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [16ULL]))));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((-5687329418260813730LL) / (5687329418260813713LL)));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)53269)))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [(short)16] [i_3] [(short)16])) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)52)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))) % (-5687329418260813713LL)))) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) ((signed char) var_6))))))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-26516))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (min((((/* implicit */long long int) (signed char)0)), (-1757880266648754777LL)))))));
    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 94315562U)) ? (var_14) : (((/* implicit */int) var_16))))) ? (((int) var_16)) : (((/* implicit */int) var_10))))) ? (((unsigned long long int) (-(var_11)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4200651733U)))) : (((((/* implicit */_Bool) (short)-21703)) ? (4253382037428444028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 254912844U)) ? (((/* implicit */unsigned long long int) ((1545130122U) / (4200651733U)))) : (var_3)));
}
