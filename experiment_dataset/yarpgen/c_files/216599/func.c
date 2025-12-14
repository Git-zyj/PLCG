/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216599
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-32741)))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)20457), (((/* implicit */unsigned short) (short)-20918)))))) : (13629277303041178076ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [(unsigned char)8] [(unsigned char)8] [i_0] [i_1 + 2] [i_3 - 1] [(unsigned char)8])), ((short)20512)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (short)32755))))) : ((~(((/* implicit */int) var_19))))));
                                var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)8] [i_1] [(short)8])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_1] [i_3 - 2])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(_Bool)1]))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1 + 1] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_13)) << (((((((/* implicit */int) var_11)) + (12440))) - (18))))) : (((/* implicit */int) (unsigned char)1)))) * (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)245)), (var_1)))) ? (min((1985879200), (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)1989)) : (((/* implicit */int) var_12))))))), (((max((9488773883818690678ULL), (((/* implicit */unsigned long long int) var_5)))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))))))));
    var_24 = ((/* implicit */short) var_10);
    var_25 = ((/* implicit */_Bool) var_0);
}
