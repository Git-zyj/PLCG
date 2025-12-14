/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213561
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = (-(max((3005655933337313546ULL), (15441088140372238069ULL))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) > (arr_2 [i_1 - 1] [i_1 + 1]))) ? (((/* implicit */int) var_12)) : ((~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63234))) >= (3058487226524138578ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_4] [i_2] [i_6] = ((/* implicit */short) max((15441088140372238056ULL), (15441088140372238069ULL)));
                                var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)255)))) << (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_10))))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (short)2566)))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned char) arr_8 [i_3])), (((/* implicit */unsigned char) (signed char)72)))))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)1)), (1940226370935033266ULL))));
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) (-2147483647 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */int) (short)15841))));
            }
        } 
    } 
}
