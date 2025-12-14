/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211468
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
    var_19 = ((/* implicit */signed char) min((var_19), (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (min((max(((unsigned short)65531), ((unsigned short)17))), (((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)17))))))))));
                            arr_10 [i_0] [(short)2] [i_0] [(short)10] [i_0] [i_0] = ((/* implicit */int) arr_2 [(unsigned short)3]);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_3]))) ? ((~((~(((/* implicit */int) (_Bool)1)))))) : ((-(arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_3])))));
                            var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((arr_9 [i_0]), (arr_9 [i_3])))) ? (((/* implicit */unsigned long long int) max((arr_8 [(unsigned char)4] [(signed char)12]), (arr_6 [i_3] [i_2] [i_1] [i_0])))) : (max((var_8), (((/* implicit */unsigned long long int) var_14))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */int) var_18))))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0] [(unsigned short)0]))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_4] [i_5])) : (((/* implicit */int) var_18))))) ? (((((/* implicit */int) arr_16 [i_4] [i_4] [i_6])) - (((/* implicit */int) arr_16 [i_4] [i_5] [i_6])))) : (((/* implicit */int) arr_13 [i_4] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_7)))) ? (((/* implicit */unsigned long long int) arr_15 [i_7])) : (max((var_17), (arr_19 [i_7] [i_7] [i_7] [7ULL] [i_7] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_6] [i_7])) ? (arr_25 [i_8] [11] [i_6] [i_7]) : (arr_25 [i_4] [i_4] [i_7] [i_8]))))));
                                arr_26 [i_5] [11ULL] [i_7] [12ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [12ULL] [i_6] [i_5] [i_4])) ? (arr_17 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_4])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) > (18446744073709551597ULL)))) : ((-(((/* implicit */int) var_2))))))) ? ((-(136957427U))) : (min((((/* implicit */unsigned int) arr_9 [i_7])), (arr_25 [(_Bool)1] [i_4] [i_4] [i_4])))));
                                var_26 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_16)), (arr_23 [i_4] [i_6] [i_6] [i_7] [i_8])))));
                                arr_27 [i_4] [i_4] [i_5] [i_6] [i_6] [5] [i_8] = ((/* implicit */int) max(((~(arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_17 [i_6]), (arr_25 [i_4] [i_5] [i_6] [i_8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
