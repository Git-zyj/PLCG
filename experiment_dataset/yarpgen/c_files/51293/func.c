/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51293
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) -1939599556))));
                                var_16 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_5 [i_4 + 2] [i_0 - 4])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (unsigned short)0);
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_2 [i_5 + 1] [i_6]))))) <= (9197490009375119689ULL))))) & (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_1] [i_5 - 1] [i_6] [i_5 - 1] [i_0]))))), (((unsigned long long int) 9197490009375119689ULL)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((/* implicit */int) ((signed char) var_12))) * (((((_Bool) (_Bool)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))));
    var_20 = ((/* implicit */unsigned short) (short)19010);
}
