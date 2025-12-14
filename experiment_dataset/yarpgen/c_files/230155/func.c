/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230155
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
    var_13 ^= ((/* implicit */int) ((unsigned short) ((((_Bool) (_Bool)1)) ? (((((-743090548) + (2147483647))) << (((4090613084681322652LL) - (4090613084681322652LL))))) : (((/* implicit */int) var_1)))));
    var_14 = ((/* implicit */short) ((unsigned long long int) (+((-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((int) ((short) arr_1 [i_0 + 1]))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-4090613084681322672LL))))))), (max(((((_Bool)1) ? (arr_4 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))))), (((/* implicit */unsigned long long int) (short)-29286))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) var_1);
                                var_17 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12)))))))));
}
