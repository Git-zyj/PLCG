/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235785
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
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1 + 1])), ((unsigned short)58261)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7265)) || (((/* implicit */_Bool) (unsigned char)83))))) : (((/* implicit */int) (unsigned short)7271))));
                                arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)7275)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)52623)))), ((-(((/* implicit */int) (unsigned short)12909))))));
                                arr_16 [i_2] [i_1 - 3] [i_2] [i_3 - 1] [i_4 + 1] [i_4] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) >> (((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) + (502013690)))))) & (min((arr_14 [i_4 + 1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1 - 3] [i_1 - 3])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)58243)))))));
                                var_18 = ((signed char) min((arr_0 [i_2]), (arr_0 [i_4 + 2])));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)2)) ^ (((/* implicit */int) (unsigned short)58235))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 7; i_6 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) (unsigned short)12909);
                                arr_22 [i_6 + 1] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */signed char) arr_18 [i_0] [(signed char)10] [i_2] [i_5]);
                                var_20 = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) 4462892382736810028ULL);
}
