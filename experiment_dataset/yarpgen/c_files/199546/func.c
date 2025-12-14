/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199546
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((short) var_2);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [(signed char)14] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((var_4) | (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                                var_12 -= ((/* implicit */int) min((((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [(short)2] [i_0])))))));
                                var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [10ULL])) : (var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))) ? (arr_9 [i_0] [i_3] [i_1] [i_1]) : (((/* implicit */long long int) (~(arr_6 [i_0] [i_0])))))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (signed char)110));
                                var_14 = var_5;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_15 += (short)-16838;
                                arr_23 [i_0] [i_5] [i_5] [i_6] = var_0;
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_2)))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_7])) : (arr_11 [i_0] [i_0] [10U] [i_1] [i_5 - 2] [i_6] [i_1])))))), (arr_9 [i_1] [i_1] [i_6] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (unsigned char)253);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((unsigned int) min((((((/* implicit */long long int) 1615243535)) | ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))));
                var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) arr_24 [i_8] [i_8]))))));
                /* LoopNest 3 */
                for (signed char i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) 524284);
                                var_22 = ((((((/* implicit */_Bool) arr_36 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10 + 3] [12U] [i_10])) ? (((/* implicit */int) arr_35 [i_8] [2U] [13] [i_11] [(signed char)17])) : (((/* implicit */int) var_1)))) >> (((var_10) - (2293516795U))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((int) (+(arr_33 [i_11] [i_9] [i_9] [i_8])))))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30871)) ? (arr_36 [i_8] [i_9] [i_10] [i_10] [(short)7] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26089)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
