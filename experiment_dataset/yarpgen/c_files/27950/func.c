/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27950
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [4LL] [4LL] |= ((signed char) (signed char)-24);
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 554239360U)) ? (min((((/* implicit */unsigned int) (unsigned short)16376)), (2205951384U))) : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_1])))) ? (min((min((256749382U), (arr_7 [i_0] [i_3] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (short)48)) : (((/* implicit */int) (short)-28087))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_4])), (((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [(signed char)3] [i_2])) : (arr_10 [i_0] [i_1] [i_3]))))))));
                                arr_16 [i_0] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 554239360U)) ? (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (3740727935U)))) : ((~(arr_11 [i_4] [i_1] [i_0]))))), (205316362168510411LL)));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] = (unsigned short)65535;
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] [(unsigned char)13] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 |= ((/* implicit */short) (~(min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_0))))));
}
