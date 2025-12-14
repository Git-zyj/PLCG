/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242422
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]);
                                arr_15 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) arr_7 [i_4]);
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_1]))) * (arr_9 [i_2] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (int i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)5658));
                var_16 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (9223372036854775807LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 1) 
    {
        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) (+(var_6)));
                    var_18 = ((/* implicit */unsigned short) 2147483647);
                    var_19 = var_0;
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5)))))));
                    arr_26 [i_8] [i_8] [(unsigned short)5] [i_8] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_20 [i_7] [i_7]))))))), (((/* implicit */long long int) var_2))));
                }
            } 
        } 
    } 
}
