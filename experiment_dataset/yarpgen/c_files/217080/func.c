/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217080
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] = ((/* implicit */_Bool) 4294967293U);
                                var_13 *= ((/* implicit */signed char) ((((/* implicit */int) ((max((var_4), (arr_12 [i_0] [14] [i_4]))) > (((/* implicit */long long int) (((-2147483647 - 1)) + (((/* implicit */int) arr_11 [(unsigned char)3] [(unsigned char)3] [6] [i_3] [i_4])))))))) / (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) <= (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (_Bool)1)) : (0))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_1 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) 5);
    var_15 -= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) 1297248940U)) : (arr_17 [i_6])))) ? (((/* implicit */unsigned long long int) ((1297248943U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (unsigned short)3065)) : (((/* implicit */int) (short)32767)))))))) : (18446744073709551611ULL));
                arr_21 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (10) : (1763474590)))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_5]))) : (((/* implicit */int) max((arr_3 [i_6]), (arr_3 [i_6])))));
                var_17 -= ((/* implicit */long long int) (+(var_2)));
                var_18 = ((/* implicit */short) min((((/* implicit */int) var_1)), (4)));
            }
        } 
    } 
}
