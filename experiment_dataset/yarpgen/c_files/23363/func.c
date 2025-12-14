/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23363
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_19 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)19822))))), (((((/* implicit */_Bool) max((var_0), (15336619959618463013ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1695440734200642987ULL))) : (3110124114091088602ULL))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((arr_6 [i_3 + 1]) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)-19823)))))) : (((/* implicit */int) (!(((((/* implicit */int) var_17)) < (((/* implicit */int) (short)-7895)))))))));
                            var_21 = ((/* implicit */int) var_16);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_9 [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1])))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 917727110U)) && (((arr_6 [i_4 + 2]) || (arr_6 [i_4 - 1])))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_2 [i_0]) + (arr_1 [i_5])))))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_1] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? ((-(3110124114091088617ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_7] [i_6] [i_1] [i_0])) || ((!(((/* implicit */_Bool) (short)-7895))))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) (signed char)44)))), (((((/* implicit */int) arr_22 [i_0] [i_6] [i_0])) << (((-1817965833) + (1817965837))))))) / ((~((+(arr_4 [i_0] [i_1] [2LL])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    var_27 = ((/* implicit */int) ((((/* implicit */int) (short)-999)) > (max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_4))))));
    var_28 = ((/* implicit */int) var_13);
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((16751303339508908622ULL) == (((/* implicit */unsigned long long int) var_6))))) << ((-(((/* implicit */int) (short)0)))))))));
}
