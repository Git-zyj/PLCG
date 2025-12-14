/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5365
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((long long int) ((arr_3 [i_0] [i_0]) < (arr_3 [i_0] [i_0])));
                arr_5 [4LL] [4LL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (2644778286642220470LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned short) var_8))))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) var_6)))));
                            var_13 = (+(((/* implicit */int) arr_10 [i_1] [i_2] [i_3])));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_9 [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18758))) : (((1847134756U) & (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((((1148417904979476480LL) | (((/* implicit */long long int) arr_3 [i_4] [i_5])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [0LL] [0LL]))) : (arr_8 [i_4] [i_5] [i_5])))))) & (((/* implicit */long long int) min(((~(((/* implicit */int) var_8)))), (max((-916095847), (((/* implicit */int) (unsigned char)187)))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_10)))) : (916095824)));
                arr_17 [i_5] = var_8;
                var_17 = ((/* implicit */unsigned int) max((arr_0 [i_4]), (((/* implicit */unsigned char) ((signed char) arr_4 [i_4])))));
                var_18 += ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */unsigned int) 2147483647)) | (arr_3 [1ULL] [i_5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)107))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
    var_20 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (((long long int) -654290631)))) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_21 *= ((/* implicit */unsigned short) var_9);
}
