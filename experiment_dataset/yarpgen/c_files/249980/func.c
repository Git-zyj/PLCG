/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249980
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((var_12), ((!(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)9))))) && ((!(((/* implicit */_Bool) (unsigned char)204))))))))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) >= (arr_10 [i_4] [i_4 - 2] [i_4 + 4] [i_3] [(unsigned short)12])))))))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_9) ? (1532015162953220771ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (_Bool)1))))));
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((0LL) <= (((/* implicit */long long int) var_1))))) <= ((~(var_1)))));
                    var_15 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((16914728910756330849ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-382)))))) : (((((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0 + 1])) % (((/* implicit */int) arr_6 [22] [(unsigned char)18] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), ((((+(var_6))) + (((/* implicit */long long int) (+(536325168))))))));
}
