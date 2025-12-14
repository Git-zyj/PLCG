/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229839
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
    var_16 |= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)65515)), (0)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)6)) << (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])) - (43842)))))));
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_2 + 1]))));
                    var_18 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [8LL])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65529)))))))), (((unsigned long long int) (unsigned short)10)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned long long int) max((1361403968U), (((/* implicit */unsigned int) -1133703906))))) : (6480629001897558947ULL)));
                                var_20 = ((/* implicit */short) max((max((((/* implicit */long long int) 1133703905)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))) - (2437270276U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                                var_22 |= ((/* implicit */unsigned long long int) min((4294967265U), (4294967279U)));
                                var_23 = ((unsigned short) max((((_Bool) arr_15 [12U] [12U] [15U] [15U])), (((((/* implicit */_Bool) 31U)) && ((_Bool)1)))));
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_16 [i_0] [i_1 + 1] [15LL] [i_5 + 3]), (arr_16 [i_0] [i_6] [i_2] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_15);
    var_26 += ((/* implicit */unsigned long long int) ((unsigned short) (short)-1));
}
