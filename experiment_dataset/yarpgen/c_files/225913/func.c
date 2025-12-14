/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225913
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
    var_18 = ((/* implicit */_Bool) min((var_18), ((((+((-(((/* implicit */int) (signed char)32)))))) != (((/* implicit */int) var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_2] [16LL] [i_4] = ((/* implicit */_Bool) (-(min((var_11), (((/* implicit */unsigned long long int) var_13))))));
                                var_19 &= ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_0)))), (arr_7 [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_18 [i_0] [12ULL] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) (signed char)-1);
                                arr_19 [i_0] [i_0] [5ULL] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5]))))) != (((/* implicit */int) min((arr_5 [i_2] [i_2] [i_2]), (arr_5 [i_0] [i_0] [i_2]))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (min((max((17872255472137106050ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)26366)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = var_11;
}
