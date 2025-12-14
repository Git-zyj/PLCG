/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42264
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
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [9LL] [i_1])) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_1)))) + ((-(((/* implicit */int) (unsigned char)255))))))) ? (((4240961903104114092LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37636))))) : ((+((+(var_5)))))));
                                var_15 = ((/* implicit */long long int) (unsigned short)37626);
                                arr_14 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) & (((/* implicit */int) (unsigned char)255))));
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0 + 3]) - (arr_3 [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (2199023255551LL))) : (((arr_5 [i_3] [i_2] [i_0]) / (arr_5 [i_4] [i_2] [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                arr_16 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 17179869183LL)) || (((/* implicit */_Bool) (unsigned short)37633))))) >= (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) ^ (-8230635123014301480LL)))));
}
