/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223023
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-32755)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_13)) - (177))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) var_16);
                                var_21 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_2 [(short)6] [i_2 - 2] [i_3 + 1])))));
                                var_22 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_11 [i_3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3])), ((unsigned short)6808)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 - 2] [16] [i_4] [i_1])) ? (arr_9 [i_0] [i_1] [i_1] [i_3 + 2]) : (16549361979539267325ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (short)32741))))) : ((~(10734574724104485950ULL))))));
                                var_23 -= ((/* implicit */_Bool) -1);
                                var_24 ^= ((/* implicit */short) arr_12 [i_0 - 1] [i_1] [(_Bool)1] [i_2 - 1]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [18ULL] [i_0 - 1] [i_2 - 2] [18ULL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_2 - 1] [i_0 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65516)) || (((/* implicit */_Bool) (unsigned short)65510)))))));
                    var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((var_14), (((/* implicit */long long int) arr_3 [(unsigned short)5])))) & (((/* implicit */long long int) ((/* implicit */int) ((var_19) && (((/* implicit */_Bool) var_14))))))))) ? (((/* implicit */int) arr_6 [i_0])) : ((+(((/* implicit */int) var_10))))));
                    var_27 = (((-(arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_2 - 2] [i_2] [i_2 + 1])) * (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) var_16);
    var_29 = ((/* implicit */unsigned int) var_18);
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) var_10)) < ((-(((/* implicit */int) var_2)))))))));
}
