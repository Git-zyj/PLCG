/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26298
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) (short)-11475)))) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [16] [i_0])))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? ((-(arr_1 [i_3 - 1]))) : (min((arr_1 [i_3 - 1]), (arr_1 [i_3 + 1])))));
                                arr_14 [i_0] [(unsigned short)10] [i_1] [(unsigned short)10] [i_4] = ((((/* implicit */int) ((unsigned char) -6114514994635713474LL))) >> (((min((((/* implicit */int) (short)-3893)), (arr_13 [i_3] [i_3] [(unsigned char)15] [i_3 - 1] [i_1] [(unsigned char)15] [i_3 - 1]))) + (3921))));
                                arr_15 [i_0] [(unsigned char)8] [(unsigned short)4] [i_0] [i_0] [i_1] [(unsigned char)8] = arr_7 [i_1];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_8) : (var_12))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) : (var_6)));
    var_23 = 67472789987759837LL;
    var_24 ^= ((/* implicit */unsigned char) var_18);
}
