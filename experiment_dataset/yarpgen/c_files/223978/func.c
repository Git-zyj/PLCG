/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223978
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
    var_16 = ((/* implicit */unsigned char) max(((unsigned short)16243), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (var_0)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 2] [i_0 + 1] = ((/* implicit */unsigned int) var_13);
                var_18 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_15))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 0U)) ? (min((arr_2 [i_0 + 2] [i_3]), (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -977674477)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)203)))))))), (((/* implicit */long long int) ((_Bool) ((int) var_0))))));
                                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min(((unsigned char)52), ((unsigned char)180))), (((/* implicit */unsigned char) ((signed char) (unsigned char)68))))))) : (((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (1920U)))));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_2])))) : (min((var_1), (((/* implicit */unsigned int) var_15))))))));
                                arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_4 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]) << (((((/* implicit */int) var_11)) - (204)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)4)), (1920U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
