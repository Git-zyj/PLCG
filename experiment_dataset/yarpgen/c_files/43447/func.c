/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43447
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
    var_19 = max((((((/* implicit */int) (unsigned char)131)) + (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_0 [(_Bool)1] [7ULL])), (arr_4 [i_0 - 3] [i_1 - 2])))), (min((((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_1 - 2])), (min((arr_6 [i_1] [i_0] [i_1 + 3]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 4] [(short)5]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */int) var_4);
                            arr_13 [(unsigned char)5] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_0 - 1])), ((unsigned char)131)))) ? (((unsigned long long int) arr_10 [i_0] [9])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (5243431223285965314LL))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (arr_18 [i_0] [(unsigned char)10] [i_0] [i_0] [i_0 + 1] [7LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_5 + 1] [i_6]))))));
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) / (var_0))))));
                                var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 + 3])) ? (var_6) : (var_1))), (((/* implicit */unsigned long long int) ((((unsigned int) arr_16 [i_0] [i_1 + 2] [i_1 + 2] [(_Bool)0])) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2445037995U)) || (((/* implicit */_Bool) (signed char)-103)))))) / (((unsigned int) ((((/* implicit */_Bool) -5243431223285965314LL)) ? (1849929324U) : (1849929322U))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */short) min((((unsigned long long int) arr_0 [i_0 - 4] [i_1 + 3])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (11143219556903406772ULL)))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) arr_22 [i_8 + 1]);
                            var_28 += ((/* implicit */unsigned long long int) (((_Bool)0) ? ((+(0LL))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_8])))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) : (arr_19 [i_0 + 2] [(unsigned short)10] [i_1 + 3] [10ULL] [i_8])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
