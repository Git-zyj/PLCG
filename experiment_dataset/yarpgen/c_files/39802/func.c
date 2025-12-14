/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39802
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
    var_17 ^= var_11;
    var_18 = ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (unsigned char)130);
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)17431))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_8 [i_4] [i_2] [(unsigned short)20] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned short)65535)))))) : (1406759146U)));
                var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (arr_10 [i_0] [i_1] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                var_23 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned char)136)), (arr_2 [i_1]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                var_24 ^= ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_3 [i_1] [i_1])));
            }
        } 
    } 
}
