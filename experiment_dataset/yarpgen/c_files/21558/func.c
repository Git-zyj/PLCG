/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21558
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned int) 2137495562)) : (arr_3 [i_0] [i_0 - 1] [i_0]))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                                arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_4 [i_3] [i_0] [i_1] [i_0]), (arr_2 [i_4] [i_2]))))) ? (max((((/* implicit */int) var_2)), (((arr_1 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-122)))))) : (((/* implicit */int) var_6))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (max((((((/* implicit */_Bool) var_8)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))))));
                                arr_12 [i_0] [i_4] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_9) | (320577517))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+(320577541)));
}
