/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193427
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_13))))));
        arr_2 [(unsigned short)0] = min((max((var_12), ((unsigned short)7274))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (3925395062171209652LL))))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(1009369444U)))) ? (((/* implicit */int) (unsigned short)7272)) : (((/* implicit */int) (unsigned short)7279))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_1)), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (9043295282777507716LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7274)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) var_13)), (5251979260952593523ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13194764812756958092ULL)) ? (-5334411805119619228LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) 13194764812756958093ULL)) ? (var_7) : (((/* implicit */long long int) 4294967286U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) ? (max(((~(-2251799813685248LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (short)15266)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15290))) : (9U))))))));
                arr_8 [i_2] [(short)12] [i_1 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((var_7), (((/* implicit */long long int) arr_1 [(unsigned short)0])))))))));
                var_23 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)58262)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)512))))))))));
                arr_9 [i_2] [(unsigned short)5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((2251799813685232LL), (((/* implicit */long long int) (short)-1))))) ? (((((/* implicit */_Bool) arr_7 [i_2] [(_Bool)1] [i_1])) ? (((/* implicit */int) (unsigned short)4551)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [(short)5] [i_2]))))))), (max((1407727467), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_19 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((min(((_Bool)1), (arr_16 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_10))))) : (max((min((arr_10 [3LL] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_3])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [(short)5] [i_3] [i_3])))))))));
                    var_24 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) (unsigned short)7264)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17421))) : (16001259455747418724ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35022))) : (var_7)))))))));
                }
            } 
        } 
    } 
}
