/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234770
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [14U]))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_2] [3]), ((unsigned char)36))))) : (max((8673952432886003536LL), (((((/* implicit */_Bool) 513643727)) ? (((/* implicit */long long int) 1749622997)) : (-4702404390493588806LL)))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((unsigned long long int) (unsigned char)219)) : (((/* implicit */unsigned long long int) arr_6 [6U])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((int) (signed char)82));
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_4]))) * (-14LL))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (var_14)))), (((((/* implicit */_Bool) 4702404390493588806LL)) ? (((/* implicit */long long int) 862760401U)) : (-4702404390493588798LL)))))));
                                var_20 = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) (short)-8)) ? (-1264227647) : (((/* implicit */int) (unsigned char)11)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (1264227645) : (((/* implicit */int) (signed char)38))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (unsigned char)138)) ? (var_14) : (((/* implicit */int) var_10))))))) ? ((((-(((/* implicit */int) var_17)))) * (((/* implicit */int) var_10)))) : (((/* implicit */int) var_1))));
}
