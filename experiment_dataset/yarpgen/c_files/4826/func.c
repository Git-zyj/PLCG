/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4826
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_1 - 1])) % ((+(((/* implicit */int) arr_0 [i_0]))))))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)62283);
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0] [4ULL])) - (13441351266083203998ULL)))) || (((arr_4 [5ULL] [5ULL] [i_2]) >= (var_7))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                var_13 *= ((((arr_4 [i_3] [10ULL] [10ULL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_9 [11U] [i_3] [i_4])) <= (((/* implicit */int) arr_0 [i_3]))))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (0ULL) : (arr_4 [i_3] [i_3] [i_3]))) << (((min((min((((/* implicit */unsigned long long int) arr_3 [i_4] [i_4])), (10272702949939715523ULL))), (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) - (4136269725ULL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_8)) != (var_0)))), (var_9))))) : (((((((/* implicit */_Bool) (unsigned short)62274)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (var_6))) << (((/* implicit */int) (!(((/* implicit */_Bool) 13441351266083203998ULL)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_20 [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)3] [i_5] [i_7])) || (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_5] [i_6] [11ULL] [(short)12]))))), ((-(var_8))))))));
                    var_16 = arr_17 [i_5] [i_6] [i_7] [i_6];
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (short i_9 = 4; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (signed char)-51)))))));
                                arr_25 [i_5] [i_7] [7ULL] [i_9] [i_9] = ((/* implicit */unsigned short) arr_2 [i_5] [i_6] [i_8]);
                                arr_26 [i_6] [i_9] [0ULL] [i_6] |= ((/* implicit */unsigned int) min(((((-(arr_24 [12ULL] [12ULL] [i_9] [i_9]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [12LL] [i_9] [i_9] [i_9 - 2] [i_9 - 1] [i_9 + 1] [i_9]))) + (min((((/* implicit */unsigned long long int) 125658604U)), (8174041123769836090ULL)))))));
                                arr_27 [i_5] [i_6] [i_7] [i_8] [2ULL] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_9 + 1] [i_9 - 2] [i_9 - 3] [i_9 - 2] [i_9 - 2] [i_9 - 1] [(short)6]))));
                                arr_28 [i_7] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)25942))))) & (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3253)) && (((/* implicit */_Bool) var_2))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9 - 2] [i_6] [(signed char)8]))) <= (var_6))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (((((/* implicit */_Bool) (signed char)110)) ? (18446744073709551611ULL) : (16048688073155985081ULL)))))) : (((/* implicit */int) (unsigned short)3253))));
}
