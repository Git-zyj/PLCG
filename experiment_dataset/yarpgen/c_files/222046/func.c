/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222046
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
    var_16 = (!((!(((/* implicit */_Bool) (signed char)19)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(((((/* implicit */_Bool) 2U)) ? (6092772761043538622LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))))))) : (min((var_8), (((6092772761043538622LL) + (((/* implicit */long long int) var_6))))))));
                var_18 = ((/* implicit */unsigned int) var_1);
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)221))))))))));
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) (_Bool)1)))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [1U]))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 6092772761043538622LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2])) % (32752)))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_16 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_2 + 2] [i_3]))));
                            arr_17 [i_2] [i_3] [i_2 - 1] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_18 [(short)0] [i_3] [i_3] [i_2] = max((((_Bool) -634472847)), ((!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_3] [i_3] [i_3] [i_5])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
