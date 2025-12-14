/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191203
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_6 [i_0 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_1] &= ((/* implicit */short) ((int) var_4));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_2] [i_3 + 2])))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((unsigned long long int) var_3)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4 - 2] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)5991)) ? (((/* implicit */int) (short)14173)) : (((/* implicit */int) (short)-14173)))) : (((/* implicit */int) var_7)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)53055)) * (((/* implicit */int) arr_5 [i_0 - 1] [(unsigned char)14] [i_5]))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (short)-14169))))))));
                                var_18 = ((/* implicit */unsigned short) arr_20 [i_0]);
                                arr_21 [i_0] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned long long int) (short)0);
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */_Bool) (short)6)) && (((/* implicit */_Bool) (short)-2))))), ((-(((/* implicit */int) (unsigned char)95)))))) <= (((/* implicit */int) ((unsigned char) 909719168))))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)51780)));
                                var_21 = ((/* implicit */short) ((unsigned char) max((arr_30 [i_0 + 2] [i_0 - 1]), (arr_30 [i_0 - 1] [i_0 + 2]))));
                                arr_31 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3)) & (((/* implicit */int) var_2))))) | ((~(11024447777374483821ULL))))) & (14213576078311696387ULL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((unsigned char) var_3))), (min((var_3), (((/* implicit */unsigned short) var_10))))))) && (((/* implicit */_Bool) var_1))));
}
