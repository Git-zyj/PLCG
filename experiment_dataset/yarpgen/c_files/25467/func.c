/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25467
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
    var_10 = ((/* implicit */unsigned char) (-(((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6557)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 &= arr_0 [i_1];
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))) < (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)17302)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)187)) ^ (334362911))))));
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) (short)-9)) : (max((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (unsigned short)58981)))), ((-(((/* implicit */int) arr_0 [i_0]))))))));
                                arr_19 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_5 - 4] [i_1] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (min((4557143607173975608LL), (((/* implicit */long long int) (unsigned short)32767)))))));
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_6 [i_5 - 1] [i_0]);
                                arr_21 [i_0] [i_5 - 3] [(unsigned short)3] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_6]);
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((-5653577878585808188LL) % (-6418721913166489458LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 13; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) ((_Bool) (unsigned char)191))))));
                arr_28 [i_7] = ((/* implicit */short) (-((+(((((/* implicit */int) arr_25 [i_7] [i_7 - 1] [13ULL])) * (((/* implicit */int) var_6))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_0 [3LL])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 1003641904)) < (var_3)))) : (((/* implicit */int) (unsigned short)6555)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            {
                arr_33 [i_9] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10]))) & (arr_32 [i_9] [i_9] [i_9]))) / (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_32 [i_9] [i_10] [1])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_10] [i_10]))))))));
                arr_34 [10ULL] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1463774529)), (var_7)))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
}
