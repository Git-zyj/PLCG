/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234337
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [(signed char)8] [i_1] [(signed char)8] = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_12 [(short)7] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (+(var_5)))) : (arr_4 [i_0])));
                            arr_13 [i_3] [i_2] [i_2] [i_1] [(_Bool)1] = ((/* implicit */long long int) (-(var_7)));
                            var_17 += var_10;
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3647746568U))))) : (((/* implicit */int) (short)-11708))));
                            var_19 = (((!(((/* implicit */_Bool) var_5)))) ? ((+(var_11))) : ((-(arr_3 [i_1 - 2] [i_1 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            {
                arr_19 [i_4] [i_4] = ((/* implicit */_Bool) var_16);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(arr_21 [i_6] [i_6] [i_5]))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_14 [i_6] [i_4]))));
                    var_22 ^= ((/* implicit */unsigned char) var_3);
                }
                var_23 += ((/* implicit */unsigned int) var_12);
            }
        } 
    } 
}
