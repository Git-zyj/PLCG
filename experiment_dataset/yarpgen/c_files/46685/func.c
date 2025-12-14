/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46685
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (unsigned short)40677)) ? (((/* implicit */int) (unsigned short)24861)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)(-32767 - 1)))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) var_15)))) - (var_5))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_20 = max((((((/* implicit */unsigned long long int) var_0)) >= (((unsigned long long int) var_10)))), ((!(((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */int) arr_5 [i_0] [i_4 - 1] [i_4 + 2] [i_4]))))))));
                                var_21 = ((/* implicit */long long int) (short)32767);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */int) (+((+(min((((/* implicit */unsigned int) (signed char)-46)), (1062816803U)))))));
                arr_13 [(_Bool)1] [i_1 - 1] [(_Bool)1] = ((/* implicit */int) var_7);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) (-(((((((/* implicit */int) var_6)) > (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */int) var_6)) : (arr_7 [i_1] [i_6 - 1] [i_7])))));
                                var_23 -= ((/* implicit */short) (-(((/* implicit */int) (!(arr_19 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] [9]))))));
                                var_24 -= ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (var_16) : (var_16)))) || (((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_1] [i_1])))))), (max((1416343866U), (((/* implicit */unsigned int) (short)-1))))));
                                var_25 = ((((/* implicit */_Bool) (-(arr_17 [i_0] [i_0] [i_7])))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) max((((min((((/* implicit */long long int) (short)(-32767 - 1))), (var_13))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (min((var_9), (((((/* implicit */int) (unsigned short)14623)) >= (((/* implicit */int) (_Bool)1))))))));
    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)80)))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) var_16)))))));
}
