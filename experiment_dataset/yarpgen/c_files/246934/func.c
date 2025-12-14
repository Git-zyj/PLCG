/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246934
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
    var_13 = ((/* implicit */long long int) ((var_5) > (((/* implicit */long long int) ((((/* implicit */int) (signed char)-60)) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)175)) && (((/* implicit */_Bool) (unsigned char)88))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_0)))) & ((-((+(((/* implicit */int) (signed char)124))))))));
                                var_14 = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)164))))));
                                var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((var_1) + (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 4; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2282))) != (var_9)))) > (((/* implicit */int) arr_16 [i_5] [i_6]))))))));
                            var_18 = ((/* implicit */unsigned char) arr_18 [i_5] [i_5]);
                            var_19 = ((long long int) (~(2147483647)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) > (((((/* implicit */int) ((unsigned char) var_6))) >> (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) * (arr_22 [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        {
                            arr_29 [i_5] [i_5 + 2] [i_5] [i_5] = (-(arr_24 [i_6] [i_10]));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((arr_15 [i_10]) >> (((var_8) - (47884788))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)88))))))))))));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((((unsigned int) arr_17 [i_5] [i_6])) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) var_1)))))))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_0))))))) >= (((unsigned long long int) arr_27 [i_9] [0U] [i_9] [8LL] [8LL] [0U]))));
                        }
                    } 
                } 
                arr_30 [i_6] [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (((unsigned int) ((var_1) - (((/* implicit */int) var_3)))))));
}
