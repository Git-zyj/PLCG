/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221962
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_18 += ((((/* implicit */int) arr_4 [i_0] [i_1])) & ((~(((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1])) : (((/* implicit */int) (signed char)75)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_1 [i_5 - 2])), (((unsigned int) 16447024580806110022ULL)))), (((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_5 + 2] [(_Bool)1] [8] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((8492723039406595161ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1])))))))));
                                arr_22 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [15]))))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_3] [i_5 + 2] [i_7 + 1]))))));
                                var_20 = ((((/* implicit */_Bool) ((int) var_12))) ? (min((((/* implicit */long long int) arr_12 [i_3] [i_4 + 2])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
                                var_21 = ((/* implicit */int) ((unsigned short) arr_16 [i_3] [i_4 + 2] [i_3] [i_7 - 1]));
                                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)23048))));
                            }
                        } 
                    } 
                } 
                arr_23 [(unsigned char)1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-25798))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_4 + 2])) << (((((/* implicit */int) arr_1 [i_4 + 2])) - (45912)))))) : (min((((/* implicit */unsigned int) arr_1 [i_4 - 1])), (var_15)))));
                var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)42488)), (arr_13 [(unsigned char)3])))), (((((/* implicit */_Bool) ((long long int) var_9))) ? (min((var_7), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [4] [i_4] [i_4] [i_4 + 2] [i_4 + 1])) ? (arr_13 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_4]))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_17);
}
