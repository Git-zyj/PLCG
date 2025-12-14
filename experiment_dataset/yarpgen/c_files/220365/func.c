/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220365
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
    var_17 |= ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */long long int) ((signed char) var_7));
    var_19 += ((/* implicit */_Bool) ((((((int) var_4)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)39106)) - (39079)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) var_8))));
                var_21 = ((/* implicit */int) var_13);
                var_22 = ((/* implicit */unsigned char) (-((~(arr_0 [i_1 - 2])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned char) (~(((min((((/* implicit */unsigned int) var_15)), (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)89)) && (((/* implicit */_Bool) var_5))))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_10 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) <= (((/* implicit */int) ((255U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4 + 1] [(unsigned char)4] [i_4 + 1] [i_4 + 1]))))))));
                                var_24 -= ((/* implicit */int) ((unsigned short) (((~(((/* implicit */int) (unsigned short)63447)))) >= (((/* implicit */int) ((arr_2 [(_Bool)1]) >= (((/* implicit */long long int) arr_4 [0LL] [(signed char)10] [0LL]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
