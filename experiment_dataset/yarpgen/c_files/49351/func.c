/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49351
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
    var_15 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */int) ((2058078846) < (((/* implicit */int) arr_4 [i_0] [(unsigned short)14]))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [11]))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_4 [i_0] [i_1])), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_0 [7LL] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_5 [i_1])))))));
                var_17 = max(((~(max((((/* implicit */unsigned int) (unsigned short)33266)), (arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) arr_1 [i_1] [i_1]))), (min((var_13), (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)50528), ((unsigned short)18896)))) || (((/* implicit */_Bool) (short)-11122))));
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)21975)))))));
                        var_20 = ((((arr_18 [i_5] [i_3] [3] [i_5]) / (arr_18 [i_5] [i_3] [i_4] [i_5]))) < (((((/* implicit */_Bool) 6146722529110685344LL)) ? (arr_18 [i_5] [i_4] [i_3] [i_5]) : (arr_18 [i_5] [(signed char)3] [i_4] [i_5]))));
                        arr_20 [i_5] [i_4] [i_5] [i_3] [(unsigned char)0] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) var_7)) ? (arr_11 [i_4]) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_4]))))))));
                    }
                    for (int i_6 = 2; i_6 < 8; i_6 += 3) 
                    {
                        var_21 = ((((((((/* implicit */_Bool) arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 2] [i_4] [i_4]))))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_4 [i_2] [i_3]))))) * (((/* implicit */int) ((unsigned short) var_10))))));
                        arr_25 [i_2] [0LL] [4LL] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) 3419379322U))) < (((/* implicit */int) max((arr_9 [i_2]), (arr_3 [i_3]))))))) : (min((((/* implicit */int) arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2])), (var_12)))));
                    }
                    for (int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        arr_28 [i_2] [i_3] [i_2] [i_7] = ((/* implicit */long long int) arr_17 [i_4] [i_4] [i_2] [i_2]);
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_22 [i_2] [i_3] [8LL] [i_7] [i_4]), (((/* implicit */signed char) (_Bool)1))))) + (2147483647))) >> (((2924166236769098719LL) - (2924166236769098702LL)))));
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((((!(((/* implicit */_Bool) (short)-11122)))) ? ((~(((/* implicit */int) (short)-11122)))) : (((/* implicit */int) arr_4 [i_2] [i_3])))))))));
                        var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) arr_24 [i_2] [i_8] [i_4] [i_8] [i_2])) : (var_12)))), (((4294967294U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))))))), (((((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [9LL]))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_14 [i_2]), (((/* implicit */signed char) var_2))))))))));
                        arr_31 [i_2] [i_3] [i_4] [10LL] [4U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (unsigned short)43561)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) 701584859U))))))) << (((/* implicit */int) (_Bool)1))));
                        arr_32 [6] [10] [6] [(signed char)7] [i_3] [(signed char)7] = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_3] [i_4] [i_4] [i_4] [i_8]))) / (min((arr_29 [9] [i_3] [i_4] [i_8]), (((/* implicit */unsigned int) 1875041781))))))));
                    }
                }
            } 
        } 
    } 
}
