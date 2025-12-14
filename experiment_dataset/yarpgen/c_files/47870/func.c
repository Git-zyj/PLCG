/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47870
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) (unsigned short)58612);
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) var_0))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)6919)) ? (var_12) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) - (3792549541U)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)58612)), (143552238122434560ULL)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_6))))), (var_2))) : (min((((/* implicit */long long int) arr_1 [i_0] [i_1 + 1])), (((var_2) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6924)))))))));
                    var_14 = (unsigned short)6935;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((short) (unsigned char)250))), (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_14 [i_3] [i_4] [i_3]))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_20 [i_3] [i_3] [i_7] |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_3] [i_7] [i_5] [i_3])) >> (((((/* implicit */int) arr_11 [i_6])) + (151))))) | (((/* implicit */int) var_0))));
                                var_16 ^= ((/* implicit */unsigned long long int) 9191036652941237888LL);
                                var_17 *= ((/* implicit */short) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] [i_5] |= ((/* implicit */unsigned char) arr_17 [i_3] [i_4] [i_5] [i_4] [i_3]);
                }
                arr_22 [i_3] = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) (unsigned short)58597)) + (((/* implicit */int) (unsigned short)58597))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_29 [i_4] [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_28 [i_8] [i_8 - 1] [i_8 - 1] [(unsigned short)20])) : (((/* implicit */int) arr_13 [i_3]))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((max(((+(var_11))), (((/* implicit */long long int) var_12)))) >= (((/* implicit */long long int) min(((-(arr_25 [i_9]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_28 [i_8] [i_8] [i_8 - 1] [i_9])), (((unsigned char) var_10))))) && (arr_28 [i_8] [i_3] [i_8 - 1] [i_8 - 1])));
                            var_20 -= ((/* implicit */unsigned int) ((var_4) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8] [i_8 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
