/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213483
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
    var_11 |= ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */int) min(((signed char)-97), (((/* implicit */signed char) (!(arr_9 [i_1] [i_4] [i_0] [i_2] [i_1] [i_0] [i_0]))))));
                                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) var_8)))))), (var_1)));
                                var_13 = ((/* implicit */unsigned long long int) -1916788383);
                                var_14 = ((/* implicit */unsigned long long int) (unsigned char)132);
                                var_15 |= (!(((((/* implicit */_Bool) arr_3 [i_4])) && (((/* implicit */_Bool) arr_3 [i_4])))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)62299))));
                    arr_13 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (unsigned char)132));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_1))) | ((+(((/* implicit */int) var_6))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (arr_16 [i_7])));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */int) max((arr_20 [i_5 + 1]), (((/* implicit */unsigned short) (unsigned char)143))))), ((-(((/* implicit */int) ((signed char) var_2))))))))));
                }
            } 
        } 
    } 
}
