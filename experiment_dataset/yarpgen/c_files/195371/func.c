/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195371
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) ((unsigned long long int) arr_5 [i_0] [(unsigned char)1] [i_0]))))));
                                var_17 = max((((/* implicit */long long int) (-(((/* implicit */int) ((short) var_1)))))), (((long long int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3])));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                            {
                                var_18 += ((/* implicit */unsigned short) (unsigned char)251);
                                var_19 = ((/* implicit */int) (unsigned short)34977);
                                arr_15 [i_0] [i_1] [i_1] [11] [i_3] [(short)11] = ((/* implicit */unsigned char) ((var_8) >> (((9223372036854775795LL) - (9223372036854775793LL)))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-21075)) ? (-7073159412118872795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 1])))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                var_21 = ((/* implicit */short) ((unsigned char) ((unsigned char) (unsigned short)60092)));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)65535)))) : (((((/* implicit */_Bool) ((var_9) % (var_2)))) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (arr_6 [(unsigned char)10] [(unsigned char)10])))) : (((/* implicit */int) arr_17 [i_3 + 2] [i_3 - 1])))))))));
                            }
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((int) ((unsigned char) arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_6)))))) || ((!(((/* implicit */_Bool) arr_4 [i_1]))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) ((_Bool) var_15));
    var_26 = ((unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
