/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49465
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
    var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (6902224640081415124ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((var_5) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2142043927U))))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-22185)) : (((/* implicit */int) (unsigned short)65535))))) : (((unsigned long long int) var_0)))) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)5779)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned short)8250)))), (var_7))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((var_8) < (var_5))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (2499169469728320242ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57286))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_15 [i_2] [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) var_10))) || (((/* implicit */_Bool) var_1)));
                        arr_16 [i_4] = ((/* implicit */unsigned char) max((((max((var_0), (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_4])) < (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_9)), (2142043944U))), (((/* implicit */unsigned int) (unsigned short)8250)))))));
                        arr_17 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_11 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((unsigned char) 3838398187U))), ((unsigned short)1)));
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57286)) ? (((/* implicit */int) (unsigned short)8232)) : (((/* implicit */int) (_Bool)1))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned char) arr_1 [i_5]);
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        arr_30 [i_6] [i_6] [(unsigned char)10] [i_6] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_6]))) : (var_5))) : (max((var_2), (((/* implicit */unsigned long long int) (unsigned short)9)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_28 [i_5] [i_6] [(unsigned short)16] [(unsigned short)14]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_8))) : (((/* implicit */unsigned long long int) ((arr_27 [i_8] [i_7] [12U] [12U]) - (arr_25 [i_8] [12U] [12U] [i_5]))))))));
                        arr_31 [8ULL] [i_6] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((var_5) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0))) - (373593578ULL))))) : (min((((/* implicit */unsigned long long int) arr_27 [i_5] [i_6] [i_7] [(unsigned char)19])), (18446744073709551615ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            arr_36 [i_5] [(unsigned short)15] [10U] [i_6] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_6] [i_7]))))), (((/* implicit */unsigned int) var_7))))), (var_5)));
                            arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_35 [i_6] [i_9] [i_9 - 1] [(unsigned short)19] [i_9 - 1]);
                            arr_38 [i_5] [i_5] [i_6] [i_7] [i_6] [i_5] [i_9 + 2] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) < (3838398171U))));
                        }
                    }
                } 
            } 
        } 
    }
}
