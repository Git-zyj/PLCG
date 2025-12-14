/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248328
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = var_10;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_2] [(unsigned char)7] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) var_1)));
                                arr_16 [i_0 + 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    var_13 = var_4;
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0 + 1] [i_0] [i_6] [i_5] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2257982380U)) ? (-1616030834122580456LL) : (((/* implicit */long long int) 2257982380U))));
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_10) : (var_10));
                                arr_23 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(10841771389509288726ULL)));
                                arr_24 [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7)))));
                                var_15 += ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (signed char)97)))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_1] [8ULL] [i_1 - 1] = ((/* implicit */long long int) ((unsigned long long int) var_3));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7)))))));
}
