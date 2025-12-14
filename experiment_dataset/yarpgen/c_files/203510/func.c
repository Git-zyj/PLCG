/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203510
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
    var_11 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((min((4726841917840023501LL), (((/* implicit */long long int) arr_2 [5])))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [(_Bool)0] [i_2])) * (((/* implicit */int) (short)-32745)))))))), (var_1)));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [(unsigned short)0] [i_3] [(unsigned short)0] = (+(((/* implicit */int) var_9)));
                            arr_18 [i_2] = ((/* implicit */short) min(((~((+(((/* implicit */int) arr_14 [i_0 + 1] [i_3] [(signed char)10] [(_Bool)1] [0ULL])))))), (((/* implicit */int) ((short) arr_8 [6ULL] [6ULL])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_5])) ? (((/* implicit */unsigned long long int) arr_20 [i_0])) : (var_7)));
                var_14 = ((/* implicit */signed char) ((_Bool) 127276539));
            }
            var_15 *= ((/* implicit */_Bool) ((unsigned int) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_10 [i_0] [5U] [i_0])))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_7] [i_7] [i_7 - 1] [i_6 - 4] [i_0 + 2]))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))));
                            var_18 = ((/* implicit */_Bool) arr_25 [i_6 + 2] [i_0 + 2] [i_7 + 1] [i_7]);
                            var_19 = arr_5 [i_0] [i_1] [i_0 - 1];
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 9; i_9 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned int) arr_15 [i_9] [i_9 + 1] [i_6 - 2] [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                            var_22 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_7 + 1] [i_0 + 1] [i_6])) : (((/* implicit */int) arr_1 [i_6 - 4])));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6075281248952994230LL))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] [4ULL] = ((/* implicit */signed char) var_10);
                            arr_33 [i_9] [i_7] [(_Bool)1] [i_6] [1] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)17)) != (((/* implicit */int) var_1))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 ^= ((/* implicit */_Bool) min(((short)32745), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_6 - 4] [i_6])))))));
                            arr_36 [i_10] = ((/* implicit */unsigned char) 16676931);
                        }
                        arr_37 [i_1] [i_1] [i_1] [i_1] [5U] = ((((/* implicit */_Bool) min((arr_28 [i_0 + 1] [i_6 + 1]), (arr_28 [i_0 - 1] [i_6 + 2])))) ? (((arr_28 [i_0 + 2] [i_6 - 3]) ^ (arr_28 [i_0 + 1] [i_6 - 4]))) : (((arr_28 [i_0 + 2] [i_6 - 2]) / (arr_28 [i_0 + 1] [i_6 - 1]))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) (short)32745);
        }
        arr_38 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)30822)) | (((/* implicit */int) arr_26 [2ULL] [i_0 + 1] [i_0] [(short)8] [i_0]))))))) || (((/* implicit */_Bool) (+(var_4))))));
        arr_39 [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_40 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_3 [i_0 + 2]))))));
    }
    var_26 = ((/* implicit */int) (_Bool)1);
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (min((((/* implicit */unsigned int) (+(var_2)))), (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
}
