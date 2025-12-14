/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196306
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) ^ (min((var_10), (((/* implicit */unsigned long long int) var_5)))))) << (((var_12) - (3549826387787377833LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_1] = ((/* implicit */int) 3495301251U);
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)50215)))) > (min((arr_1 [i_4]), (var_1))))));
                                arr_12 [i_0] [i_0] [i_3] [i_0 + 2] [i_0 + 1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_4 + 2]))))), (min((var_7), (((/* implicit */unsigned long long int) (unsigned char)115)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (max((((/* implicit */unsigned int) (unsigned char)184)), (var_16))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_6 [i_0 + 1] [11LL] [11LL] [i_0 + 1])))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]))));
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) > (6484463277032384981ULL)))), (-1911854721824803331LL)))));
                arr_14 [i_0] [i_1] |= ((/* implicit */int) var_6);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2659619523412103119ULL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) - (((unsigned int) -341137598)))))));
}
