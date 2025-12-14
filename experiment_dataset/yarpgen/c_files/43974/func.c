/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43974
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(1758639356)));
        var_20 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [8] [i_0])))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) arr_1 [10ULL] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)29259)) == (((/* implicit */int) (unsigned short)36278))))) : (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (((/* implicit */int) (short)-29597)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_22 &= ((/* implicit */long long int) (short)26380);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_12 [i_2] [i_2] [i_1] = ((/* implicit */long long int) (~(arr_7 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_17 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_5 [i_4 + 1])))) ? (min((((/* implicit */unsigned int) (signed char)-39)), (arr_5 [i_4 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4 + 2] [i_2] [i_4 + 2])) && (((/* implicit */_Bool) arr_9 [i_4 + 1] [i_2] [i_4 + 2]))))))));
                                var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 - 1] [i_5] [i_5]))))) >= (((((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4])) % (((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 3] [i_5] [i_5]))))));
                                arr_18 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */int) var_15);
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) ((short) (short)-31655)))), (1525262341U)));
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */long long int) var_12);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((arr_0 [i_6] [i_6]) - (arr_0 [i_6] [i_6]))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1758639347)) || (((/* implicit */_Bool) ((unsigned short) var_3))))))));
        var_26 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_6])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31664))))) >> ((((~(((/* implicit */int) (short)-14133)))) - (14125)))));
    }
    var_27 += ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28))))), (arr_21 [i_8])))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_8])), (arr_26 [i_7] [i_7] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_7])) | (((/* implicit */int) var_16)))))));
                var_29 = (((!(((/* implicit */_Bool) arr_5 [i_7])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_8] [i_8] [i_7] [i_8]))))))) : (((/* implicit */int) min((((/* implicit */short) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (max(((short)0), (((/* implicit */short) arr_16 [i_8] [i_7] [i_8] [i_7] [i_8] [i_8]))))))));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)0))), (max((arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]), (arr_26 [i_7] [i_8] [i_8]))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_3);
}
