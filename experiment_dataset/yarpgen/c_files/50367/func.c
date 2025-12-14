/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50367
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
    var_18 = var_3;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [15] [i_1] [i_0] = ((/* implicit */unsigned char) var_15);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_15))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_0);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_10))));
                arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_5)))) ? (0ULL) : (18446744073709551615ULL)));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
                    {
                        {
                            arr_25 [(_Bool)1] [i_4] [i_6 + 2] [(_Bool)1] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (arr_21 [i_7 - 1] [i_6 + 1] [i_4 + 1])))) ? (((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_6 + 2] [i_4 - 1])) ? (((/* implicit */int) arr_21 [i_7 - 1] [i_6 + 1] [i_4 + 1])) : (((/* implicit */int) arr_21 [i_7 + 1] [i_6 + 1] [i_4 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-122)) && (((/* implicit */_Bool) arr_21 [i_7 + 1] [i_6 + 1] [i_4 + 1])))))));
                            arr_26 [i_4] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) 18446744073709551605ULL);
                        }
                    } 
                } 
                var_23 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((signed char)-99), ((signed char)-87)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))));
            }
        } 
    } 
}
