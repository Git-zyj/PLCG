/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235269
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min(((-((((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 + 3])))))), (max((((/* implicit */int) max(((short)-12808), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) var_5)) ? (-498737562) : (((/* implicit */int) var_4)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_9), (((/* implicit */int) var_10))))), (max((arr_1 [i_1 + 1] [i_0]), (((/* implicit */long long int) var_4))))));
                            arr_9 [i_0] = ((/* implicit */long long int) ((signed char) var_2));
                            var_13 = ((/* implicit */unsigned int) ((((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) % (((/* implicit */unsigned long long int) min((max((var_7), (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned short)65533)))))))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                arr_11 [i_0] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (1054006502))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */int) (unsigned char)142);
                                arr_24 [i_7] [i_5] [i_7] [i_5 - 3] [i_7] [i_5 - 3] = ((/* implicit */int) 4211915427U);
                                var_16 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_8 - 1] [i_7 + 1] [i_5 - 3]));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) (~((+((+(var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_19 &= ((/* implicit */long long int) ((unsigned long long int) arr_26 [i_9]));
                arr_29 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_9)) : (arr_28 [(unsigned short)0])))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))))) ? ((+(arr_25 [i_9]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1054006502)) ? (((/* implicit */int) var_6)) : (arr_26 [i_10])))), (((((/* implicit */_Bool) 850208385U)) ? (((/* implicit */long long int) var_9)) : (arr_25 [(_Bool)1])))))));
            }
        } 
    } 
}
