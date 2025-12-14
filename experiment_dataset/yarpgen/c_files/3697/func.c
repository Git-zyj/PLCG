/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3697
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4 + 1] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13))) : (511LL)));
                                var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_11))))))))) ? (((((/* implicit */_Bool) (signed char)102)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_0 + 1])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_4)))) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])))))));
                                var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_2] [i_1] [(unsigned short)15] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]))), (((unsigned long long int) arr_14 [i_2] [i_1] [i_2] [6U] [i_2 + 1] [i_2 + 1] [i_2]))));
                                arr_16 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_9)))))) ? ((-(max((((/* implicit */long long int) (unsigned short)53735)), (4095LL))))) : (((/* implicit */long long int) (+(max((-581266997), (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_3))))) * (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 1])), (var_6)))))) ? (((long long int) ((unsigned long long int) arr_5 [i_2] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1492374440)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) * (arr_2 [i_2] [i_1]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (+((+(var_0)))));
    var_16 = ((/* implicit */short) (((((-(((/* implicit */int) var_9)))) > (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) 1802397697732471631LL))))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23475))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)99))))))))));
}
