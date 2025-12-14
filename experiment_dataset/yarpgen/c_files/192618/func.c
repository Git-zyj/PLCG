/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192618
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
    var_10 ^= ((/* implicit */int) (~(((var_5) * (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_6))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_11 -= ((/* implicit */long long int) var_8);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((unsigned short) (-(var_7))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (~(arr_1 [i_3])))), (var_0)))));
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((arr_7 [i_0] [i_1] [i_2]) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_2]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3])))))) | ((+(arr_9 [i_1] [i_1] [(signed char)2] [i_1] [6LL]))))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1]) % (((/* implicit */long long int) arr_3 [i_0 - 1]))))))))));
                        var_14 *= ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        }
        for (short i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            var_15 = ((/* implicit */int) (((-(min((((/* implicit */unsigned long long int) arr_14 [i_4])), (6336775064598453277ULL))))) > (((/* implicit */unsigned long long int) min((arr_8 [i_4 + 2] [(signed char)0]), (arr_8 [i_4 - 1] [i_4]))))));
            arr_15 [i_0] = ((/* implicit */_Bool) 3386269546U);
            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_4 [i_0]))));
        }
        var_17 = ((/* implicit */short) var_3);
    }
    var_18 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_22 [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_19 [i_5]) >= (arr_19 [i_5]))))));
            var_19 = ((/* implicit */unsigned int) ((((arr_18 [i_5]) - (((/* implicit */unsigned long long int) arr_19 [i_6])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            var_20 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_17 [i_7 + 2] [8])) * (((((/* implicit */unsigned long long int) arr_17 [9] [i_5])) / (var_1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 - 1] [5ULL] [i_5])))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (((+(var_1))) / (((/* implicit */unsigned long long int) arr_20 [i_7 + 1])))))));
        }
        arr_25 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [(_Bool)1] [i_5]))) : (var_7))))) ? (min((arr_21 [i_5]), (((/* implicit */unsigned long long int) (unsigned short)47363)))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5]))))))));
        var_22 = ((/* implicit */unsigned long long int) (signed char)48);
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        var_23 |= ((/* implicit */unsigned short) arr_20 [i_8]);
        arr_29 [i_8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_27 [i_8] [5ULL]))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_16 [i_8]))))) : (min((((/* implicit */int) arr_23 [i_8] [i_8] [i_8])), (268402688)))))));
        arr_30 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_27 [(short)2] [(short)2])))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [10])) >= (((/* implicit */int) arr_16 [i_8]))))), (min((((/* implicit */unsigned long long int) arr_19 [i_8])), (var_7)))))));
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((min((var_1), (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))))))))));
}
