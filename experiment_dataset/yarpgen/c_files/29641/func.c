/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29641
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned long long int) 3697379102940140580LL)), (9ULL))))));
    var_20 = 18446744073709551607ULL;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) 18446744073709551603ULL);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) 9ULL));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_1 [i_0])) + (9ULL)))))) ? (((((/* implicit */_Bool) ((18446744073709551603ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (12ULL) : (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (26ULL) : (18446744073709551606ULL))))) : (min((18446744073709551607ULL), (27ULL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((max((min((13ULL), (18446744073709551607ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) | (max((((18446744073709551612ULL) / (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551581ULL) : (((/* implicit */unsigned long long int) arr_1 [(short)16]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((18446744073709551603ULL) > (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 - 2] [i_3] [i_3]))))), (((18446744073709551609ULL) >> (13ULL)))));
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) 9ULL))), (min((((((/* implicit */_Bool) 12ULL)) ? (18446744073709551597ULL) : (28ULL))), (max((12ULL), (9ULL)))))));
                    var_23 &= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 12ULL)) ? (18446744073709551609ULL) : (18446744073709551609ULL))), (((((/* implicit */_Bool) arr_12 [i_1] [2U] [i_1] [2U])) ? (32ULL) : (18446744073709551595ULL)))))) ? (12ULL) : (18446744073709551595ULL));
                    var_24 = ((/* implicit */long long int) (+(6ULL)));
                }
            } 
        } 
        arr_14 [4LL] [i_1] = ((/* implicit */_Bool) 18446744073709551612ULL);
        var_25 = ((/* implicit */long long int) max((arr_12 [18ULL] [i_1] [18ULL] [i_1]), (((/* implicit */unsigned int) ((short) arr_7 [i_1])))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
        {
            arr_18 [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) ((arr_8 [i_4 - 1]) - (arr_8 [i_4 - 2]))))));
            arr_19 [i_1] = ((/* implicit */short) max((arr_12 [i_1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) (+(max((arr_6 [i_4]), (((/* implicit */int) arr_11 [17LL] [17LL] [(unsigned char)9])))))))));
        }
        var_26 = ((/* implicit */long long int) 18446744073709551612ULL);
    }
}
