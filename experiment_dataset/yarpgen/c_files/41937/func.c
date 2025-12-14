/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41937
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((short) arr_3 [i_1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -426691936)) / ((~(arr_1 [i_0] [i_0])))))) ? ((-(((/* implicit */int) max(((unsigned char)32), (((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_1] [i_1]))))))) : (((/* implicit */int) (unsigned char)56))));
                                var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_10 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1])), ((-(((((/* implicit */_Bool) arr_6 [i_0])) ? (-2056976927513838928LL) : (((/* implicit */long long int) arr_11 [i_0] [(short)5] [i_2] [i_3] [i_4]))))))));
                                arr_13 [i_1 + 2] [i_3] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (!((!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    var_15 = ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(var_1)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)201))) : (var_1)));
}
