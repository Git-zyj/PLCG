/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48698
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(unsigned short)5] [i_1] [i_1]))));
                    var_16 &= ((/* implicit */long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_4 [i_2]))))))));
                    var_17 += ((/* implicit */short) var_4);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 = (~(min(((~(arr_11 [i_4 + 3] [i_3] [i_2] [i_1] [i_0] [i_0 + 1]))), (((long long int) var_1)))));
                                var_19 = ((/* implicit */long long int) var_9);
                                var_20 |= ((/* implicit */signed char) ((((/* implicit */int) max((max((arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]), (((/* implicit */short) (signed char)-1)))), (arr_12 [i_0 + 3] [i_3] [i_4] [i_4] [i_4 - 4])))) | (((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(arr_14 [i_5] [3ULL]))))));
                var_22 = ((/* implicit */unsigned char) ((long long int) ((short) ((int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned char) var_5)))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 907116499)) ? (16383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))))));
    var_24 = ((/* implicit */unsigned int) ((short) var_13));
}
