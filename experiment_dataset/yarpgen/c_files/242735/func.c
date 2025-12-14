/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242735
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
    var_11 -= ((/* implicit */int) 9223372036854775807LL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-7632)) : (((/* implicit */int) (signed char)127))))), (min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (-750529593)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) var_7))));
            var_13 *= ((/* implicit */unsigned int) ((1841456370249532430LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768)))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_14 &= ((/* implicit */unsigned short) min((arr_10 [i_0]), (((arr_10 [i_0]) / (arr_10 [i_0])))));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (unsigned short)38868))));
            var_16 = var_5;
            var_17 += ((((/* implicit */unsigned int) ((int) arr_10 [i_0]))) * (((((/* implicit */_Bool) (signed char)-36)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_18 += max((((((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */long long int) max((arr_4 [i_3]), (var_7)))) != (arr_10 [i_3])))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) < (2504681571U)))), (min((((/* implicit */unsigned int) (unsigned short)0)), (var_7)))));
                    var_20 = ((/* implicit */signed char) ((698896887U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
                }
            } 
        } 
        arr_19 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (min((((((/* implicit */_Bool) 3596070409U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7634))) : (var_1))), (((/* implicit */unsigned long long int) -1100750911))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((max(((-(arr_3 [i_3] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)57076))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((-885191296) / (((/* implicit */int) (short)-1))))) ? (((unsigned int) var_5)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (unsigned short)45628)) : (((/* implicit */int) (short)-1))))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((min((var_10), (((/* implicit */long long int) arr_13 [i_6])))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42989))) : (var_3)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_6] [i_6] [i_6])) & (((/* implicit */int) var_5)))))));
        var_23 ^= ((/* implicit */unsigned int) (signed char)-1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_7] [i_6])))))));
            var_25 = ((/* implicit */signed char) arr_23 [i_6] [i_6] [i_6]);
        }
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) arr_20 [i_6]);
    }
    var_26 = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((signed char) (signed char)-69)))))));
    var_27 ^= ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))));
    var_28 = ((/* implicit */unsigned int) var_9);
}
