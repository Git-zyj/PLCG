/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21914
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
    var_13 = (!((!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((var_12) - (13162349900769185617ULL)))))))));
    var_14 = ((/* implicit */short) -1029095628);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-7349)), (arr_0 [5])))) / (max((arr_3 [i_0] [i_0] [14LL]), (((/* implicit */unsigned long long int) 0LL)))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 3066505675335287610ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_2 - 1] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(16LL)))) <= (arr_3 [i_1 + 2] [i_0] [i_0])))) : (arr_5 [i_1 - 1] [i_1 - 1] [i_3])));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_10 [i_1 - 1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), ((-(max((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [8] [i_1])))))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)207)) << (((/* implicit */int) ((_Bool) var_2)))))) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (2147483647) : (((/* implicit */int) (unsigned short)46446)))) >= ((+(arr_5 [i_0 + 2] [i_0 + 2] [i_2 - 1])))))))));
                    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7337))) & (var_9)))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) (short)-7349)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_1 - 3] [i_1 - 3] [i_0]), (((/* implicit */unsigned long long int) 29LL))))))))));
                }
            } 
        } 
    } 
}
