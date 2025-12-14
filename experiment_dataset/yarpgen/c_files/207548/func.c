/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207548
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
    var_19 = ((/* implicit */_Bool) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (2504911876U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))));
    var_20 = ((/* implicit */_Bool) (unsigned char)229);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = arr_4 [i_0];
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [2ULL]))))) ? ((+(-1171259520))) : ((~(((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_3] [i_2]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_1 - 1] [i_2 - 1] [i_0 + 2]) & (arr_9 [i_1 - 1] [i_2 + 1] [i_0 + 1])))) ? ((~(arr_4 [i_0]))) : (((/* implicit */long long int) (-(arr_3 [i_0] [i_1 + 1] [i_0]))))));
                        }
                    } 
                } 
                var_25 = ((int) max((((((/* implicit */int) (unsigned short)4882)) ^ (((/* implicit */int) (unsigned char)48)))), (((/* implicit */int) max(((short)14015), ((short)-32745))))));
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_26 ^= arr_6 [i_1 - 1] [i_5] [14];
                                arr_19 [i_0] [i_0] [1U] [(short)7] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_4 + 2] [i_6])))))));
                                var_27 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_6] [i_5] [i_4] [i_1] [i_0 - 2])), (((((((/* implicit */_Bool) -2147483643)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6] [i_5] [i_4] [i_1]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [0U] [i_6])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (int i_8 = 4; i_8 < 19; i_8 += 2) 
        {
            {
                arr_26 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (arr_22 [i_8 - 2]) : (((/* implicit */int) max((arr_21 [i_7]), (((/* implicit */unsigned char) var_11)))))))) + ((~(((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14030))) : (arr_24 [i_7] [i_7] [i_7])))))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13983)))))) ? ((((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((1258234341) ^ (((/* implicit */int) arr_25 [2ULL] [i_8 - 4])))))));
                var_30 = ((((/* implicit */_Bool) ((arr_20 [i_8]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)28))))) ? (((/* implicit */int) max((arr_20 [i_8 - 3]), (((((/* implicit */_Bool) -1723899714)) || (((/* implicit */_Bool) var_17))))))) : (((/* implicit */int) (_Bool)0)));
            }
        } 
    } 
}
