/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19146
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) var_12));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 18446744073709551606ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_4 [i_1]) % (arr_4 [i_1]))))));
        var_18 = ((/* implicit */unsigned char) arr_4 [i_1]);
        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)36127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10ULL)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_20 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)29407))));
            var_21 = ((/* implicit */unsigned short) arr_9 [(short)5]);
            var_22 = ((/* implicit */_Bool) ((18446744073709551615ULL) - (15431819143802671806ULL)));
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_4 [i_3]) * (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        }
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            arr_14 [i_2] [i_4] [i_4] = ((long long int) arr_5 [i_2]);
            var_23 = ((/* implicit */signed char) (-(arr_8 [i_2] [i_2] [i_2])));
            arr_15 [i_2] [i_4] = ((/* implicit */signed char) var_14);
        }
        var_24 = ((/* implicit */short) var_14);
        var_25 = ((/* implicit */unsigned char) (-(var_7)));
        arr_16 [(unsigned char)5] = ((/* implicit */unsigned short) (((~(911244684U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))));
        var_26 = ((/* implicit */unsigned char) (+(var_8)));
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_20 [i_5] = (((((~(var_7))) << (((/* implicit */int) var_3)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [7] [(unsigned short)0]))));
        var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_5]))))), (((((/* implicit */_Bool) ((signed char) arr_13 [i_5] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))) : (((((/* implicit */_Bool) var_7)) ? (arr_13 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5])))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((min((arr_21 [i_6]), (((/* implicit */int) (unsigned char)62)))) / ((((+(((/* implicit */int) arr_22 [i_6])))) / (((/* implicit */int) max(((unsigned char)254), (var_11))))))));
        var_29 = ((/* implicit */unsigned short) ((((((arr_21 [i_6]) | (arr_21 [i_6]))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (3014924929906879827ULL) : (((/* implicit */unsigned long long int) var_8))))) ? (((10ULL) << (((449289140U) - (449289114U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_6])) + (((/* implicit */int) var_2))))))) - (671088640ULL)))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-1)))))))));
        arr_23 [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)255)), (3014924929906879809ULL)))) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))));
    }
    var_31 = ((/* implicit */long long int) var_0);
    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22905))) * (18446744073709551615ULL))))));
}
