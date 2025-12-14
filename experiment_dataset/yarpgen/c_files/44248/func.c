/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44248
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned short) var_9);
                            arr_11 [i_0] [i_0] [i_3] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) arr_2 [i_0] [i_0])));
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (max((((/* implicit */int) ((arr_2 [i_2] [i_1]) < (((/* implicit */int) var_6))))), (((int) arr_2 [i_0] [i_0]))))));
                            arr_12 [i_2] [i_3] [i_2] [0ULL] = ((/* implicit */unsigned int) var_1);
                        }
                    } 
                } 
                var_12 = ((/* implicit */short) ((min((((/* implicit */int) ((unsigned short) var_1))), (var_5))) << (((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))) + (1078118963)))));
                arr_13 [i_0] = ((/* implicit */unsigned int) (~(0ULL)));
                arr_14 [i_0] = ((/* implicit */long long int) (((!(arr_4 [i_1] [7U] [i_0]))) ? (((unsigned int) ((735861299) | (((/* implicit */int) (short)-23958))))) : (min((((((/* implicit */_Bool) var_1)) ? (var_2) : (var_9))), (max((((/* implicit */unsigned int) var_4)), (arr_8 [(signed char)9] [i_0] [i_1] [i_1] [i_1] [(signed char)9])))))));
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
