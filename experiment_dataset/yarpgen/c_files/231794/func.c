/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231794
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_4 + 2] [10U] [i_2] [i_0] [10U] [i_0] |= ((/* implicit */unsigned char) ((short) var_5));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (7249672671137185872LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_2] [i_3] [i_0]), ((_Bool)1))))) : (min((((/* implicit */long long int) ((arr_16 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (min((((/* implicit */long long int) var_7)), (arr_12 [i_0] [i_2] [i_3] [i_4])))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)12062)))) ? (((/* implicit */long long int) ((/* implicit */int) ((1245358925U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12055))))))) : ((~(-7249672671137185859LL)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_4 + 2] [i_3] [i_1 - 1])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) || (arr_8 [i_0] [i_1 - 1] [i_3] [0ULL]))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) ((_Bool) (unsigned char)0)))))))))));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */long long int) min((((var_3) >> (((arr_13 [i_0] [i_1] [i_1] [i_0] [i_0]) - (5952515546118477482LL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)32)) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))))), (((arr_12 [i_0] [i_1] [i_2] [i_0]) + (((/* implicit */long long int) var_0)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((unsigned int) var_7)))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned char)40)))) : (((/* implicit */int) ((unsigned short) max((var_5), ((short)(-32767 - 1))))))));
}
