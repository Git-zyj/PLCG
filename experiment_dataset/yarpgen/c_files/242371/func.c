/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242371
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
    var_10 -= ((/* implicit */_Bool) ((unsigned int) ((int) ((unsigned short) var_2))));
    var_11 = ((/* implicit */int) max((var_9), (((unsigned char) (~(var_0))))));
    var_12 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) + (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1])))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [i_0 - 1]))) < (((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) (short)25283))))))));
        var_15 = ((/* implicit */long long int) arr_1 [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) var_6);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)25287)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) % (((long long int) (signed char)30))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)110)) << ((((~(var_3))) + (1382487346840747035LL)))))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)25306)) ? (((/* implicit */int) arr_8 [i_2])) : (-1)))), (((((/* implicit */_Bool) (short)25301)) ? (2933280309286249037LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned long long int) -461140174)) : (656286675966879069ULL)))) ? (((/* implicit */int) (unsigned short)5650)) : (((/* implicit */int) var_6)))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) -461140193))) << (((((unsigned long long int) (unsigned short)52462)) - (52448ULL)))))) ? (((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_9 [17])) : (17790457397742672567ULL))) : (min((17790457397742672546ULL), (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_3])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) 17790457397742672546ULL))) <= (((/* implicit */int) (unsigned char)33))))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(var_7)))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_2])), (arr_0 [i_5])))));
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((unsigned int) -461140165)))) << (((((/* implicit */int) ((unsigned char) arr_4 [i_4]))) - (143)))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned long long int) ((int) arr_8 [i_2]));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_2] [i_2])), (arr_13 [12ULL] [12ULL] [i_2] [i_2])))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) | (arr_17 [i_2] [i_2]))) - (18446744073709551527ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (var_7)))) ? (((/* implicit */unsigned long long int) arr_9 [(unsigned char)5])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (17944076990336026416ULL))))));
        arr_19 [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) arr_6 [i_2])) + (max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))))));
    }
}
