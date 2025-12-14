/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209139
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) << (((((var_12) + (1894004056))) - (23)))))))))) == (((((/* implicit */_Bool) arr_4 [1U] [i_1] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [8LL] [i_3 + 2] [i_3 + 3])))))));
                        arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) (((-(13354972726678610923ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_14 += ((short) (!(((/* implicit */_Bool) arr_10 [i_4]))));
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(_Bool)1])) >= (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) ((int) (-(((/* implicit */int) arr_7 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_5 - 4])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (_Bool)1);
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            arr_19 [i_0] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)2] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9553)))))));
                            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_0] [i_7 + 1]))));
                            arr_20 [6ULL] &= ((/* implicit */unsigned short) (~(32767)));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_3))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((((_Bool) arr_11 [i_5 - 4] [i_5 - 1] [i_5 + 1] [i_5 - 2])) && (((/* implicit */_Bool) var_12))));
                        arr_21 [i_0] [i_0] [i_0] [8ULL] = ((/* implicit */long long int) 12218704381270078371ULL);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(var_9)));
    var_24 -= ((/* implicit */short) (-((+(((/* implicit */int) var_6))))));
    var_25 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((3623657035U) << (((/* implicit */int) (_Bool)1))))))));
}
