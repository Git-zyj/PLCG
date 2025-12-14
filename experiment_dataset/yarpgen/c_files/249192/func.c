/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249192
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 |= arr_0 [(unsigned char)2];
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)251)), (18446744073709551603ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)63)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (-958211733347460277LL) : (arr_0 [i_0]))) : ((~(arr_0 [i_0]))))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_4 [i_1] [11ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))))))) <= (var_6)));
        var_21 += ((/* implicit */unsigned char) arr_3 [6LL]);
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((-(arr_3 [i_1 - 2]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34348))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 - 1]))))) : (((var_6) & (arr_3 [i_1]))))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((var_8) > (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)-1)), (var_10)))) : (max((4497385692520730103LL), (var_6))))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [2LL] [2LL] [(short)12])))))))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((arr_11 [6ULL] [i_2] [i_2] [(signed char)8] [i_4]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_10 [0LL] [i_2] [i_2] [i_3] [i_3] [i_4])))) && ((_Bool)1))))))));
                        arr_14 [i_1] [i_2 - 1] [(unsigned char)6] [i_2] = ((/* implicit */short) max((((unsigned long long int) (unsigned char)251)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_4 + 2] [i_3])))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_15 [i_5]), (arr_18 [i_5]))), (((arr_15 [i_5]) / (arr_15 [i_5])))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (arr_18 [i_5])))), (((((/* implicit */_Bool) var_12)) ? (10840616948560800200ULL) : (((/* implicit */unsigned long long int) arr_18 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5])))))))))));
        arr_19 [(_Bool)1] |= ((/* implicit */long long int) ((unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5]))))) : ((-(((/* implicit */int) arr_17 [16ULL] [i_5])))))));
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((3008459098U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [(signed char)17])), (3141900887295721472ULL)))) || (((/* implicit */_Bool) 553132486U))))))));
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) max((min(((unsigned short)58436), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_16 [i_5])))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_6] [i_6]))))) : (((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (arr_18 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6])))))));
        var_26 = ((long long int) (~(((/* implicit */int) var_7))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */int) var_17)) + (((/* implicit */int) (short)17939)))), (((/* implicit */int) ((unsigned char) var_5)))))) == (var_16)));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned char i_8 = 4; i_8 < 16; i_8 += 3) 
        {
            {
                arr_31 [i_7] [i_8] = ((long long int) 12288331253470739960ULL);
                arr_32 [i_7] [i_8] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
            }
        } 
    } 
}
