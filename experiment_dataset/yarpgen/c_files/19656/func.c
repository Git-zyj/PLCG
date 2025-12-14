/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19656
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((+(((/* implicit */int) var_13)))) % (((/* implicit */int) var_7))))) == (min((((/* implicit */long long int) ((var_10) - (var_9)))), (min((arr_2 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_18 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0])) ^ (((/* implicit */int) var_6))))) && ((!(((/* implicit */_Bool) -3850521881439937471LL)))))))));
                                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_14 [i_0])) + (((/* implicit */int) (_Bool)1))))));
                                var_17 += ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_1 [i_3])) | (((/* implicit */int) var_15))))));
                            }
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) min((max((((/* implicit */unsigned char) (_Bool)0)), (var_6))), (max(((unsigned char)41), (((/* implicit */unsigned char) var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (!(var_14)))) < (((var_3) - (var_9)))))) >> ((((~(((/* implicit */int) (!(((/* implicit */_Bool) -2946795379261870986LL))))))) + (5)))));
}
