/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208475
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
    var_13 = max((((/* implicit */unsigned int) ((int) min((var_7), (((/* implicit */long long int) var_3)))))), (max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65531)) && (((/* implicit */_Bool) (unsigned char)241))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                                arr_13 [i_4] [i_4] [i_2] [i_2 - 2] [i_4] [i_1] [i_2 + 4] = ((/* implicit */short) ((((unsigned long long int) ((short) (unsigned char)255))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1776370320324123606ULL))))));
                                var_15 = ((/* implicit */signed char) ((6ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223)))));
                                var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                                var_17 -= (-(18446744073709551588ULL));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)72))));
                    arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_3)))), (((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned char)42))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)183)), ((unsigned short)34445))))) * (((((/* implicit */_Bool) (unsigned char)255)) ? (2057832513386983051ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    arr_16 [i_1] [i_1] [(signed char)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) ^ (arr_7 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (var_8))))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (var_8))), (((/* implicit */unsigned int) var_0)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_4)))))));
                    var_18 += ((/* implicit */long long int) (!((!(var_2)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 4; i_7 < 11; i_7 += 2) 
            {
                {
                    arr_26 [i_5] [i_5] = ((/* implicit */_Bool) max((max((arr_22 [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) (unsigned char)0)))), (((/* implicit */unsigned short) ((16388911560322568565ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))))))));
                    var_20 = ((/* implicit */short) var_7);
                    var_21 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16180))) % (2057832513386983035ULL))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-44))))))));
                }
            } 
        } 
    } 
}
