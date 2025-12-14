/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236225
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((unsigned char) ((short) (_Bool)0)));
                                arr_13 [i_0] [i_3] = ((((/* implicit */_Bool) ((int) arr_10 [i_3] [i_3] [i_3] [i_3 + 1]))) ? (((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) ((short) arr_10 [i_3] [i_3] [i_3] [i_3 - 1]))));
                                arr_14 [i_3] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (_Bool)0)))));
                                var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_4 + 3] [i_1] [i_2] [i_3 + 2] [i_3])))) / (1LL));
                            }
                        } 
                    } 
                    arr_15 [i_2] [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) ((int) min((arr_9 [i_0] [i_0] [i_1] [i_1] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    arr_16 [i_0] [i_0] [i_1] [(unsigned char)5] = ((/* implicit */unsigned short) ((11LL) & (((/* implicit */long long int) ((/* implicit */int) (short)26777)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_15)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-19991))) != (var_6)))) : ((+(((/* implicit */int) var_11))))));
    var_19 += ((/* implicit */int) var_6);
}
