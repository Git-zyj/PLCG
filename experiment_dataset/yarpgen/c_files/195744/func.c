/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195744
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
    var_18 = ((long long int) min((var_2), (((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3444781068212801316LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22840))) : (819609998181132402ULL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (294891372U))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)137)) - (((/* implicit */int) (short)-6473))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3] [i_2] [i_1] [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [12U]))))), (arr_3 [i_0 - 2] [i_1 + 1] [i_1 - 2])))) ? (min((((/* implicit */long long int) max((arr_6 [i_0 - 2] [i_1 - 1] [10ULL] [i_3]), (arr_6 [i_3] [i_1] [i_3] [i_3])))), (min((((/* implicit */long long int) arr_4 [(unsigned char)18] [i_1 + 1] [(unsigned char)16] [2U])), (arr_3 [i_0] [i_1] [i_2 + 2]))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-3616)) ? (1739749054U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))))), (((/* implicit */unsigned int) (unsigned char)154)))))));
                            var_23 = ((/* implicit */short) arr_7 [i_0 - 2] [i_1] [i_2] [i_0 - 2]);
                            var_24 = ((/* implicit */long long int) arr_2 [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)255)), (14149619765024143699ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0 + 2] [i_1] [i_5] [i_5]), (((/* implicit */unsigned char) arr_1 [i_0])))))) - (min((7289756194446000520ULL), (13731678068124275089ULL))))))))));
                            var_26 += ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (short)6474)))));
                            var_27 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
