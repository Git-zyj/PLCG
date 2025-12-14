/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242862
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
    var_12 &= ((/* implicit */_Bool) (~(18446744073709551612ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 ^= max(((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))), ((!(((/* implicit */_Bool) (unsigned char)86)))));
                                arr_12 [i_4] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 - 2])))) % (((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_11)) ? (var_0) : (var_0)))))));
                                var_14 -= ((/* implicit */int) ((unsigned char) -793054600));
                                var_15 = ((/* implicit */unsigned short) min(((-(arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 1] [6U] [i_0 - 2] [i_1] [i_2]))), (((/* implicit */unsigned int) min((var_3), (var_3))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (+(var_6)));
                            arr_17 [i_0] [i_0] [i_5] [i_6] = min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min(((unsigned char)225), (((/* implicit */unsigned char) (signed char)12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
}
