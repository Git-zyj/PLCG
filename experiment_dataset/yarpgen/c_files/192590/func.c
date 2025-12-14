/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192590
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
    var_17 = (unsigned char)115;
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) == ((+(((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) < (((/* implicit */int) arr_3 [i_0]))))), (min((max((var_9), (var_9))), (((/* implicit */long long int) (_Bool)1))))));
                            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */signed char) ((-1) <= (((/* implicit */int) (unsigned char)255))))), (var_11)))), (min((((unsigned int) arr_4 [i_0] [i_3])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [0ULL])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */short) arr_11 [(short)12] [i_1] [i_1] [(short)12]);
                            var_22 = ((/* implicit */short) (-(var_14)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */int) ((((/* implicit */long long int) max((arr_13 [i_0 + 3] [i_1] [i_6 + 1]), (((/* implicit */int) (short)(-32767 - 1)))))) ^ (max((((long long int) var_3)), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [13ULL])) + (((/* implicit */int) var_6)))))))));
                                var_24 = ((/* implicit */_Bool) (signed char)92);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 21; i_10 += 1) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) min(((+((+(((/* implicit */int) var_16)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_10 + 2] [i_9] [(short)3] [i_0] [i_0]))))))))));
                            arr_31 [i_0] [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (391841422) : (((/* implicit */int) (short)14))));
                            var_25 = ((/* implicit */long long int) max(((+(min((((/* implicit */unsigned long long int) var_10)), (var_5))))), (((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0 + 3])))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_25 [i_0] [i_10] [i_9] [i_10 - 2])))), ((+(((/* implicit */int) var_6))))))) ? (((unsigned long long int) max((((/* implicit */int) (short)-20)), (1332515005)))) : (min((var_5), (((/* implicit */unsigned long long int) ((int) var_4)))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) (short)19)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
