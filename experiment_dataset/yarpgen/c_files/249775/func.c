/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249775
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [3]);
        arr_5 [(unsigned short)7] = arr_2 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((-(var_11))) : (((/* implicit */int) ((short) var_4)))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((((long long int) (short)-3275)) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_2))))))) << ((((((!(((/* implicit */_Bool) -673359890)))) ? (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)46)))) : (var_11))) + (1520873167)))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_12 [(short)2] = ((/* implicit */unsigned short) (-((-(288230376151580672ULL)))));
        arr_13 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) /* same iter space */
        {
            arr_16 [i_3] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */int) var_10)), (((int) arr_11 [i_2] [i_2]))));
            arr_17 [19LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : (((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 2]))) : (var_8)))));
            arr_18 [i_2] [i_3] [i_3 + 3] = min((((/* implicit */int) var_0)), (min((max((((/* implicit */int) var_5)), (var_12))), (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_3] [i_3]) : (var_11))))));
        }
        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
        {
            arr_22 [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
            arr_23 [i_4] [i_4] = ((/* implicit */_Bool) ((max((arr_14 [i_4 - 2]), (arr_14 [i_2]))) ? (((long long int) arr_21 [i_4])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_2])))))));
            arr_24 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (-(((/* implicit */int) arr_15 [i_2])))))));
            arr_25 [i_2] [i_4 + 3] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-3261)) : (-673359895))))))));
        }
        for (short i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            arr_30 [i_2] [i_2] [i_2] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) 3120806611U)))), ((!(((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_15 [i_5])))))))));
            arr_31 [18ULL] [3LL] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_6))))) ^ (((arr_20 [i_2] [i_5 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82)))))));
        }
    }
    var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) > ((~(var_12))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) ((_Bool) var_12)))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((669492742188912991LL) == (((/* implicit */long long int) var_12)))) ? (((/* implicit */int) var_3)) : (((((var_11) + (2147483647))) >> (((var_12) - (623488966)))))))) ? (((/* implicit */int) (short)32755)) : ((+((+(((/* implicit */int) var_0))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((var_12) - (623488974)))));
}
