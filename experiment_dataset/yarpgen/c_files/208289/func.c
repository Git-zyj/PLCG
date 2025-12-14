/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208289
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((short) arr_6 [i_1]));
                                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38153))) / (arr_4 [i_2] [i_2] [(unsigned short)8])));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [(signed char)4] [i_0] |= ((/* implicit */_Bool) var_3);
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) var_3);
                            arr_20 [i_0] [(short)9] [(short)9] [(short)0] [i_1] [(short)0] = ((/* implicit */_Bool) ((((/* implicit */int) max(((short)-27321), ((short)16324)))) - (var_3)));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1048575)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10697))) * (arr_17 [i_0 - 1] [i_0 - 1] [i_5 + 1]))))));
                            arr_21 [(signed char)2] [(unsigned short)6] &= ((/* implicit */short) ((((/* implicit */int) arr_15 [i_1] [i_1] [(short)8] [2LL])) == (((/* implicit */int) arr_19 [i_0] [i_1] [(unsigned char)6] [i_6] [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) var_1)))))));
}
