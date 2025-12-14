/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234258
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned short)47865))));
                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned short)17670)) << (((((/* implicit */int) (unsigned short)65535)) - (65523)))))))) + (var_16)));
                arr_6 [i_0 - 3] [15U] [i_1] = ((/* implicit */short) var_4);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65530))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)68)), ((unsigned short)47865)))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17672))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_6), (((/* implicit */long long int) (unsigned short)31835)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 2061584302080LL)))))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)53078)) ? (((/* implicit */int) ((unsigned char) 511717709U))) : (((var_7) ? (((/* implicit */int) (short)-13906)) : (((/* implicit */int) var_1)))))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) (short)-25311)))))))))));
                                arr_16 [i_0 - 1] [i_0 - 2] [i_1] [(short)19] [i_3] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) var_12);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_11);
}
