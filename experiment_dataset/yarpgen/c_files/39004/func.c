/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39004
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) ((signed char) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_11 [i_2] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) (-((-(((((/* implicit */int) var_8)) - (((/* implicit */int) var_0))))))));
                    arr_12 [i_0 + 1] [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((arr_6 [i_0] [i_0] [i_1 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)26405))) & (4197739480656750264LL))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((signed char)79), (((/* implicit */signed char) arr_7 [i_2] [i_1] [i_0 - 2]))))))))));
                    arr_13 [i_2 - 1] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0 - 3]), (((/* implicit */unsigned long long int) ((var_3) ? (var_5) : (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), (arr_3 [i_1 - 1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (arr_8 [i_1 - 3] [i_1 - 3] [11ULL]))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10))))) ? ((~(((/* implicit */int) ((unsigned short) var_1))))) : (((((/* implicit */_Bool) max((var_1), (var_1)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_6))) : (var_5)))));
}
