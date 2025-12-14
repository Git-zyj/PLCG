/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51541
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((unsigned int) ((long long int) 4503599627370495ULL)));
                            var_16 = arr_5 [i_0] [i_0] [i_2] [i_0];
                            arr_12 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-59)) | (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (_Bool)0)) : ((-2147483647 - 1))))));
                            arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) ((268369920U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_0])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_8 [i_0] [i_1] [i_1]))));
                var_18 = ((/* implicit */_Bool) ((int) arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 1]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (int i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_30 [i_4] [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((((((/* implicit */_Bool) arr_29 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_5] [i_6]))) : (1356503986U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35134)) ? (arr_17 [i_4] [i_5]) : (((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 937304048))));
                            }
                        } 
                    } 
                    var_20 = arr_0 [i_4];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_14);
}
