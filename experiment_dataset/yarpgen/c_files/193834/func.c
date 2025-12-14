/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193834
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) - ((-(((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15461341379908015839ULL))))) : (var_4)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))) + (-9223372036854775793LL)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_18 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) && (((/* implicit */_Bool) var_4)))))))) && (((/* implicit */_Bool) var_5))));
        var_19 = ((/* implicit */short) max((((/* implicit */long long int) (short)2047)), (((long long int) (_Bool)0))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_7 [i_2])))))) * (((/* implicit */int) max((arr_6 [i_2] [i_2]), (((/* implicit */unsigned short) max(((signed char)-76), (var_7)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min((var_10), ((unsigned char)63)))), (((((/* implicit */int) arr_6 [i_2] [i_2])) + (((/* implicit */int) (signed char)119))))))) ? (((/* implicit */unsigned long long int) ((((-1945759674) + (((/* implicit */int) (unsigned char)255)))) + (((/* implicit */int) var_8))))) : (5878725016677411549ULL)));
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (_Bool)1)), (((int) (_Bool)1))))));
        var_22 &= ((/* implicit */unsigned char) -474299199);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)202)) * (((/* implicit */int) (_Bool)0))))) / (min((((/* implicit */unsigned long long int) arr_9 [i_3 + 1] [i_3 - 1])), (arr_0 [i_3 + 1])))));
        arr_12 [i_3 - 1] = ((/* implicit */long long int) (_Bool)1);
        var_24 &= ((/* implicit */signed char) (-(((/* implicit */int) (!((_Bool)1))))));
    }
    var_25 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 -= ((/* implicit */unsigned char) min((((arr_15 [i_4]) * (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */signed char) (_Bool)1)), (var_7)))))));
        arr_16 [i_4] [5LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_4 [i_4])))) > (((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4])))));
        var_27 |= ((/* implicit */unsigned char) (+(((var_16) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (3391219771U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    }
    /* LoopSeq 4 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 = max((min((min((((/* implicit */signed char) var_14)), (arr_19 [i_5]))), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)110))))), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_14 [i_5] [i_5])), ((unsigned char)8)))) || (((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65534)))))))));
        var_29 = ((/* implicit */_Bool) max((((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) (short)-32759))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6]))))) % (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (var_4)))) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) max((arr_6 [i_6] [i_6]), (((/* implicit */unsigned short) (unsigned char)255)))))))));
        var_31 -= ((/* implicit */short) (+(((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_27 [i_7] [i_7] = (_Bool)1;
        arr_28 [i_7] = ((/* implicit */_Bool) ((unsigned char) var_2));
        var_32 *= ((/* implicit */short) (~(((/* implicit */int) arr_24 [i_7] [i_7]))));
        var_33 -= ((/* implicit */short) ((unsigned char) arr_24 [i_7] [i_7]));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_34 = ((/* implicit */signed char) -1LL);
        arr_32 [(_Bool)1] = ((/* implicit */short) ((int) var_9));
    }
}
