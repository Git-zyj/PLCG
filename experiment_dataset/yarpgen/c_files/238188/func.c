/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238188
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
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 7419860956218756828LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */_Bool) -7419860956218756818LL);
                var_22 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (arr_0 [i_0] [i_1])))), (288230376151711232ULL))) >> (((((/* implicit */int) (short)-19302)) + (19311)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2]))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((288230376151711260ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 1])))))))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2 + 1] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2 + 2] [(short)19]))) : ((+((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((arr_4 [i_2] [(unsigned short)4]) ? (((/* implicit */int) arr_9 [i_3 + 1] [14LL] [i_2] [i_1] [18] [(signed char)7])) : (((/* implicit */int) arr_9 [i_1] [18ULL] [4U] [i_1] [i_1] [i_1])))) == (((/* implicit */int) (!(arr_2 [19LL])))))))));
                            var_24 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 2] [i_1] [i_0]))) >= (max((((/* implicit */long long int) var_2)), (-9223372036854775800LL))))) ? (((/* implicit */unsigned long long int) min((920317759), (((/* implicit */int) (!(((/* implicit */_Bool) (short)8)))))))) : (max((((288230376151711238ULL) & (((/* implicit */unsigned long long int) -3024419525308375224LL)))), (((/* implicit */unsigned long long int) min((arr_2 [(_Bool)1]), (arr_2 [i_0 + 1]))))))));
                            var_25 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22720)) ? (((/* implicit */long long int) 2641914166U)) : (arr_6 [i_0] [i_0] [i_2])))) && (arr_4 [i_1] [(_Bool)1]))) ? (arr_6 [i_0] [i_0] [i_2]) : (min((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [(signed char)1]))))), (((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */long long int) var_11)) : (arr_10 [i_3] [i_0] [i_0])))))));
                            arr_11 [i_0] [i_1] [(unsigned short)14] [i_3 - 2] |= ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2])) / (((int) arr_10 [i_0] [i_0] [(_Bool)1]))))) : ((-(arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 2]))));
                            var_26 ^= ((/* implicit */long long int) var_19);
                        }
                    } 
                } 
            }
        } 
    } 
}
