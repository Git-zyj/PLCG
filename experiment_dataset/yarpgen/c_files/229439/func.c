/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229439
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
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 += ((/* implicit */short) ((max((arr_3 [i_1 - 2] [i_3 + 3]), (arr_3 [i_1 + 1] [i_3 - 1]))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_3 + 3])) : (15374891134552314255ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4724833184087584083LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (894835002U))))))))));
                                var_13 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))) + (3264911696288498123LL))) << (((max((arr_0 [i_0] [i_0]), (-4724833184087584083LL))) - (279429041310107153LL))))) << (((((arr_3 [i_4] [i_1]) + (2649723869295802069LL))) - (51LL)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))) + (3264911696288498123LL))) << (((((max((arr_0 [i_0] [i_0]), (-4724833184087584083LL))) - (279429041310107153LL))) - (2792973094041278017LL))))) << (((((((arr_3 [i_4] [i_1]) + (2649723869295802069LL))) - (51LL))) - (1LL))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2067919894)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (short)-30879))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_3);
}
