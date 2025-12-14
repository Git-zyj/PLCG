/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40544
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
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)96)))) : (((/* implicit */int) (short)-32744))))) ? (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((unsigned long long int) ((_Bool) arr_2 [i_0])))));
                var_11 = min((((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2] [i_1 + 2])))), (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_1)), (arr_1 [(short)4] [i_1]))))));
                var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)1)) ? (arr_1 [i_1 + 2] [i_1 - 1]) : (((/* implicit */long long int) arr_6 [2U] [i_1 - 2]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((3), (3))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) arr_14 [(unsigned short)9] [(unsigned short)9] [i_4] [i_5]);
                                var_15 = ((/* implicit */int) arr_20 [i_2] [i_3] [i_4] [1U] [i_3]);
                            }
                        } 
                    } 
                } 
                arr_22 [i_2] = ((/* implicit */unsigned char) arr_19 [i_2] [i_2] [i_2] [i_2]);
                arr_23 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((334914440U), (min((((/* implicit */unsigned int) arr_20 [i_2] [i_3] [(unsigned short)9] [(unsigned char)3] [i_2])), (arr_17 [i_3]))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)61333)) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_10 [i_2])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_3);
}
