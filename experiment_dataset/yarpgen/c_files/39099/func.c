/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39099
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_19)))) ? (min((var_19), (((/* implicit */unsigned long long int) -2810637577256913425LL)))) : (var_14)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-7061032737226878273LL), (((/* implicit */long long int) var_3))))) ? (((/* implicit */long long int) var_5)) : (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) max((((/* implicit */long long int) -93473437)), (-2810637577256913425LL))))), (((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) 93473409)))))) : (-7061032737226878273LL)))));
                var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (15084409343209972950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((1099511496704LL) | (arr_4 [i_0] [i_0]))) != (((long long int) ((long long int) 470733428)))));
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)-9874)) == (((/* implicit */int) (short)-9874))));
                }
                for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    arr_12 [i_1] [i_0] [i_3] = arr_4 [i_0] [i_0];
                    arr_13 [i_0] = ((/* implicit */short) ((((unsigned long long int) -7061032737226878290LL)) % (((/* implicit */unsigned long long int) min((arr_6 [i_3 + 2] [i_3]), (arr_6 [i_3 + 2] [i_3]))))));
                }
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_16 [i_0] [i_0] [i_0] = ((-7061032737226878290LL) / (8002277627396686386LL));
                    var_24 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                    arr_17 [i_0] [16ULL] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-93473437))))));
                }
                var_25 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1024842122438225039ULL) : (((/* implicit */unsigned long long int) ((16LL) | (-2810637577256913417LL))))))) ? (var_3) : (((/* implicit */unsigned int) ((((((arr_1 [i_1]) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775792LL))) + (18LL))))) - (((/* implicit */int) ((arr_4 [i_0] [16]) <= (5725032142750841205LL))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                var_26 = ((/* implicit */long long int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6] [i_6]))))))), ((~((-(1182012090)))))));
                arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((min((9223372036854775807LL), (-6976289807676296213LL))) > (arr_10 [i_6] [i_6] [8LL])));
            }
        } 
    } 
}
