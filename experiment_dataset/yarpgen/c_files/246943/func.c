/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246943
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */long long int) 552077271U)) - (((((var_19) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))) | (((unsigned int) arr_2 [i_3] [i_2] [i_0]))));
                                var_23 = ((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_0]);
                                var_24 = ((/* implicit */_Bool) min((var_24), (arr_6 [i_4] [i_0] [i_0] [i_1])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (min(((+(arr_7 [i_6] [(unsigned char)10] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) (_Bool)1))))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(arr_14 [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_2 [i_0] [i_1] [i_5])))))))));
                            var_27 = ((/* implicit */signed char) ((long long int) (((+(arr_10 [i_0] [i_0] [(short)6] [i_0] [(unsigned char)2]))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned short)0] [3LL]))))))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [8ULL] [(unsigned short)14] [i_1] [i_6]))) > (max((arr_7 [i_0] [i_1] [12] [i_5] [i_6]), (((/* implicit */unsigned int) var_9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                var_29 = min((((/* implicit */unsigned int) ((((/* implicit */int) ((2102093894U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7])))))) | (((/* implicit */int) (!(((/* implicit */_Bool) 2192873385U)))))))), ((~(arr_18 [i_8]))));
                var_30 ^= ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((var_19) | (var_6)))))) || (((/* implicit */_Bool) (unsigned short)61957))));
    var_32 *= var_16;
}
