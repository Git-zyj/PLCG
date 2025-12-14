/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219528
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = var_10;
                                arr_14 [i_0] [(unsigned short)1] [i_4] [i_3] [i_2] [(signed char)13] = ((/* implicit */_Bool) max(((-((((_Bool)1) ? (((/* implicit */int) (unsigned short)15060)) : (((/* implicit */int) (signed char)-7)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (2397636070U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) (signed char)31)))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_12 [i_0] [i_1 - 1]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) + (var_10))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */long long int) 1119002681)), (max(((((_Bool)1) ? (-2079517726548812857LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-4724))))))))))));
                    arr_21 [i_6] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)197)), (-184453023)));
                }
            } 
        } 
    } 
}
