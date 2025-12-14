/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4585
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
    var_18 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */long long int) (unsigned short)49498))));
    var_19 = ((/* implicit */unsigned short) var_0);
    var_20 = ((/* implicit */unsigned long long int) (((+(min((var_12), (((/* implicit */unsigned long long int) var_8)))))) != (((/* implicit */unsigned long long int) ((unsigned int) ((int) var_2))))));
    var_21 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_1 [i_3 + 3] [i_1 + 1]), (arr_1 [i_3 - 1] [i_1 + 1])))) < (((/* implicit */int) ((unsigned short) var_11)))));
                                arr_13 [i_1] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((((/* implicit */int) var_5)) >= (arr_8 [i_3] [(short)11] [i_1] [i_0]))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                var_23 ^= ((/* implicit */int) var_13);
                var_24 -= ((/* implicit */int) min((var_1), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)16029)))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_16 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_4 [i_1]))))));
                    arr_17 [i_1 - 1] [i_1] = ((/* implicit */short) ((signed char) ((short) ((int) arr_10 [i_0] [(unsigned short)10] [(unsigned short)10] [i_1] [i_1] [(signed char)7]))));
                    arr_18 [i_1] [4LL] [i_1] [i_5] = ((unsigned long long int) (~((~(((/* implicit */int) var_2))))));
                }
                for (short i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_25 = ((/* implicit */signed char) var_14);
                    arr_23 [i_1] = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (int i_8 = 2; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) min((arr_21 [i_1] [i_1] [(unsigned char)6]), (((/* implicit */unsigned char) var_4))))))), ((+((~(((/* implicit */int) (unsigned short)49509))))))));
                                arr_28 [i_0] [i_0] [i_0] [i_1] [6] [i_0] [3ULL] = ((/* implicit */unsigned short) ((signed char) arr_14 [i_1] [i_1 + 1] [14ULL] [i_1]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
