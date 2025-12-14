/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242157
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
    var_13 = ((/* implicit */_Bool) (~((-(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_3)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((unsigned short) var_7));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_10 [1LL] [1LL] [i_2] [(short)2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_0] [4ULL]), ((unsigned short)7932))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_8))), ((unsigned short)65514))))));
                                var_15 = max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)0))))))), (min((((unsigned long long int) (short)-32408)), ((+(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_6 [5U] [(_Bool)1] [i_3 - 1] [(_Bool)1]))) ? ((-(((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1] [(signed char)5] [(signed char)5] [8ULL] [i_0 - 2] [i_1] [i_1]))) : (4994803619102520362LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) (signed char)-4)))))) - (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)34344)))) - ((-(((/* implicit */int) arr_6 [10LL] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */_Bool) ((4162597591339130494ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2412777408175043084ULL), (((/* implicit */unsigned long long int) var_2))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_8)))))));
}
