/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212745
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
    var_13 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_10)))));
    var_14 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_15 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_3 + 1])) ? (arr_2 [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) arr_4 [i_3 - 1])))))));
                            var_16 = (+(((((/* implicit */_Bool) (+(arr_5 [i_0] [i_0])))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)0))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((signed char) (short)1601)))) / (((((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 - 1])) / (((/* implicit */int) arr_6 [i_3 + 2] [i_3] [i_3] [i_3 - 1]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10))))))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_1]))) ? ((+(arr_7 [i_1] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_1] [i_1] [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_5] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1602)) ? (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64631)))));
                                var_19 = ((/* implicit */_Bool) ((2251250057871360LL) * (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 34357641216ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (short)-1608)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
}
