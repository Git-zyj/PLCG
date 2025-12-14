/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24798
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
    var_20 |= ((unsigned short) ((unsigned short) (-(((/* implicit */int) var_0)))));
    var_21 = ((/* implicit */unsigned short) 10727220683156539451ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)17] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) - (arr_2 [(short)14])))) ? (((/* implicit */unsigned long long int) var_1)) : (min((((/* implicit */unsigned long long int) (unsigned short)12288)), (arr_0 [i_0]))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19222)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1024))) : ((-9223372036854775807LL - 1LL))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (var_6) : (arr_6 [i_0] [(short)4])))) & (min((((/* implicit */unsigned long long int) arr_11 [(unsigned short)5] [i_1])), (arr_10 [i_0] [i_0] [(unsigned short)0] [i_2]))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_9 [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
                    arr_13 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (-326131616567426089LL)))) ? (((1521370427) - (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_0] [i_0]))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_5))))))));
                    arr_14 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (-9223372036854775787LL) : (2774679890902720021LL)))));
                    arr_15 [i_0] [17LL] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_12) : (var_10)))) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))))))));
                    arr_16 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) arr_6 [(unsigned char)12] [i_1]);
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_19 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_11 [i_0] [(unsigned short)7]), (arr_11 [i_0] [i_0])))) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (short)1))))), (((signed char) var_1))))) : (((((/* implicit */_Bool) ((long long int) arr_1 [i_1]))) ? (var_1) : (var_1)))));
                    arr_20 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0]);
                }
            }
        } 
    } 
}
