/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36850
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
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-1)), (4294967295U)));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (unsigned char)0);
                                var_12 *= ((/* implicit */unsigned char) min(((+(((long long int) arr_9 [i_1] [i_2] [i_3] [11ULL])))), (((/* implicit */long long int) (+(((unsigned int) var_5)))))));
                                var_13 = ((/* implicit */short) (+(((min((1317236705), (((/* implicit */int) (unsigned char)147)))) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 - 2] [(short)8] [i_0 + 2] &= (~(min((((arr_5 [i_0] [(signed char)16] [i_1]) & (arr_4 [i_0]))), ((+(arr_7 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_14 += ((/* implicit */long long int) (+(((/* implicit */int) min((min(((unsigned char)6), ((unsigned char)141))), (((/* implicit */unsigned char) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(1317236705)))) : (min((((/* implicit */long long int) (short)62)), (-6846532711872424808LL))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)134)) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (1317236705))))))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) >= (((unsigned int) var_9))));
    var_17 = ((/* implicit */signed char) (~(((var_7) / (((/* implicit */long long int) -1317236706))))));
}
