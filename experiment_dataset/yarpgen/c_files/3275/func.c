/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3275
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
    var_11 = ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((long long int) arr_1 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [(unsigned char)16] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_1 [6U])))) ? (((int) var_2)) : ((-(arr_1 [(unsigned short)10])))));
        var_13 = ((/* implicit */unsigned short) ((((int) (short)-17777)) < (((/* implicit */int) ((unsigned short) ((arr_4 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [12ULL])) ? (((((/* implicit */_Bool) (-(0ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20782))))) : (((unsigned long long int) arr_1 [14]))));
        arr_7 [i_1] = ((/* implicit */signed char) arr_0 [(unsigned char)2]);
        var_14 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_0 [14ULL]))))));
    }
    for (int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [16U])), (var_8)))), (min((((/* implicit */unsigned long long int) arr_3 [i_2 - 1])), (var_1)))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) ((signed char) (((-(arr_8 [i_2] [13ULL]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [(signed char)5] [(unsigned char)7] [i_2 + 1] [i_3]))))));
                        var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((int) (~(((/* implicit */int) var_0))))) : ((+(arr_9 [i_4]))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_8 [i_4] [i_5 + 3]))) ? (0) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 - 2] [i_2 - 2] [i_3] [i_5 + 3])) ? (((/* implicit */unsigned int) 2013265920)) : (arr_3 [i_2])))))))));
                        arr_18 [i_2 + 2] [i_3] [i_5] = ((/* implicit */unsigned long long int) max((20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((int) arr_9 [i_3])) : (((/* implicit */int) ((unsigned char) (signed char)-45)))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) var_7);
}
