/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3364
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
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 ^= (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 2] [(unsigned char)5] [i_1])) > (((/* implicit */int) arr_4 [i_0 - 1] [12U] [14ULL]))))));
                var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_18)) ? (arr_1 [i_0] [i_0 + 2]) : ((-(((/* implicit */int) var_6))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) var_17);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_16))))));
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_2]))))))));
                                arr_24 [i_2] [i_2] [i_2] [3ULL] [6ULL] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_4 [i_6] [i_5] [i_4])) << (((/* implicit */int) arr_4 [i_6] [i_5] [i_4])))));
                                arr_25 [i_2] [i_3] [i_4] [i_5] [(short)9] = ((/* implicit */unsigned short) (+(var_12)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                arr_31 [i_2] [i_3] [i_4] [i_3] [i_8] [i_7] [i_7] = ((/* implicit */short) var_6);
                                arr_32 [i_7] = ((((((/* implicit */_Bool) var_15)) ? (arr_11 [i_3] [i_3]) : (var_16))) % (var_19));
                                arr_33 [i_8] [i_7] [(_Bool)1] = ((/* implicit */signed char) var_15);
                                arr_34 [i_2] [i_3] [i_4] [i_7] [i_4] [i_3] [i_4] = ((/* implicit */int) (!(((13965209821163536189ULL) >= (((/* implicit */unsigned long long int) arr_22 [i_2] [i_3] [i_7] [i_3] [i_7] [4ULL]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) min((arr_12 [i_2] [i_3] [i_4]), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_0))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))))));
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) 240479895U))) : (((/* implicit */int) var_10))))) ^ (((((3U) % (1394512897U))) << (((((240479895U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (240480099U)))))));
}
