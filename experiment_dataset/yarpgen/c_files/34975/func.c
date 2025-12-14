/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34975
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-11942)), (((((/* implicit */unsigned long long int) var_3)) + (34091302912ULL))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    var_15 = ((/* implicit */short) ((2473226347707365496ULL) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_2 - 2]))))), (var_12))))));
                    var_16 = ((/* implicit */unsigned short) ((2473226347707365496ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_1] [4U])), (var_13)))))));
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1048560ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((2588164315U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-11945))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1781294185))))) : (var_3))))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) * (arr_5 [i_0] [i_1] [(signed char)1])))) ? (((/* implicit */int) ((15973517726002186120ULL) >= (((/* implicit */unsigned long long int) 2057894057))))) : (((/* implicit */int) arr_2 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 4; i_3 < 9; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [i_3])) & ((-(((/* implicit */int) (short)23906))))))) ? (((/* implicit */int) min((arr_0 [i_3 - 3] [i_3]), (((/* implicit */signed char) var_8))))) : (((/* implicit */int) min((min((((/* implicit */signed char) arr_10 [i_3] [i_3] [i_3])), (arr_4 [i_4] [i_3 + 1]))), ((signed char)-107))))));
                arr_11 [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_7 [i_3 - 4] [(short)3])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_3 - 4] [i_4])) : (((/* implicit */int) var_8)))));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_4), (var_2)))), (max((((/* implicit */unsigned long long int) (short)8191)), (var_9))))))));
            }
        } 
    } 
}
