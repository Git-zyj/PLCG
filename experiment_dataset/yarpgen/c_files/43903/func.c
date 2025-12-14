/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43903
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) 12890674192858236861ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 = arr_11 [i_0] [i_0] [i_2];
                                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_3 + 1]);
                                arr_15 [5U] [5U] [5U] [5U] [i_2] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) ((signed char) arr_2 [i_0 + 2]))) + (95))) - (28)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_16 = var_2;
                                var_17 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) ((signed char) var_3)))))));
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (unsigned char i_9 = 4; i_9 < 14; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min(((-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_21 [i_7])))))), (((/* implicit */int) ((short) arr_27 [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 4]))))))));
                    arr_30 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */int) (short)-24719);
                }
            } 
        } 
    } 
}
