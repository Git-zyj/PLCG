/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208816
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 - 2] [i_1]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-3005)), (1878906442U))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : ((-2147483647 - 1)))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) var_4);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) (unsigned char)224))))) ? (((unsigned long long int) min((arr_5 [i_0] [i_1] [i_3]), (arr_9 [i_0] [i_0] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 2]))))));
                            arr_11 [i_0 - 2] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_2] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned short)6093))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10)))))) >= (arr_7 [i_0] [i_2] [i_0]))))) : (((((/* implicit */_Bool) max((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)17275))))) ? (((long long int) (signed char)(-127 - 1))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_6) <= (((/* implicit */int) var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)49), ((unsigned char)32))))) : ((+(var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)38101)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) var_7))))))))) : (max((((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (0ULL))), (((/* implicit */unsigned long long int) var_6))))));
    var_21 = ((/* implicit */unsigned short) ((signed char) (~(18446744073709551615ULL))));
    var_22 = ((/* implicit */unsigned short) max(((+(var_10))), (((/* implicit */unsigned int) var_1))));
}
