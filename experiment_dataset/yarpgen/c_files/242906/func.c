/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242906
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */long long int) ((unsigned short) (~(((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)4603)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [18LL])))))));
                    arr_7 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (var_10)))) != (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-27625)))) << (((min((((/* implicit */unsigned long long int) var_1)), (var_9))) - (5369ULL)))))) : (var_14)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */short) min((12ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) & (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_15))));
                                arr_15 [i_0] [(_Bool)1] [i_2] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) (((~(var_5))) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (arr_2 [i_4] [i_3] [i_1]) : (arr_2 [i_1] [i_2] [i_3]))), (((/* implicit */long long int) (+(var_18)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned short) (unsigned char)123)))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((8052601270779931268ULL) ^ (((/* implicit */unsigned long long int) -2063696301745068862LL)))))) : (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((var_5), (-36028797018963968LL))))))));
    var_24 &= ((/* implicit */long long int) (unsigned char)0);
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 12; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                arr_22 [i_6] = ((/* implicit */unsigned int) ((((_Bool) max((((/* implicit */long long int) var_16)), (arr_17 [i_6])))) ? (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_5] [i_6])), (arr_4 [i_6] [(unsigned short)8] [14]))))))) : (((((/* implicit */_Bool) ((long long int) var_8))) ? (arr_14 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 1]) : ((+(arr_14 [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 1])))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */int) (short)27601)) : (((/* implicit */int) arr_21 [5ULL])))) > (((/* implicit */int) (short)-27603)))) && (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_17)), (arr_13 [i_6] [i_6] [16ULL] [i_5] [i_5]))), (((/* implicit */unsigned long long int) (short)27629))))))))));
                var_26 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)1)))));
                var_27 = ((/* implicit */short) min((((unsigned short) var_1)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_6] [i_5 - 2] [i_5 - 2])) && (((/* implicit */_Bool) arr_2 [(_Bool)0] [i_5 + 1] [i_5 - 1])))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_16))) && (((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_17)))))))));
}
