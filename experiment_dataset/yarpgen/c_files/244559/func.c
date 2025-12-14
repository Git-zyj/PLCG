/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244559
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
    var_13 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))))) * (((/* implicit */int) ((var_1) < (((/* implicit */int) var_12)))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 2]))))));
                                var_16 = ((/* implicit */unsigned char) var_6);
                                var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) / (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) arr_6 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 3]))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned short)11]))))))));
                                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((unsigned int) (unsigned char)13))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) : (min((((/* implicit */unsigned long long int) 2046114085)), (var_7)))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6 + 2]))));
                                var_21 = ((/* implicit */unsigned char) (-(var_7)));
                            }
                        }
                    } 
                } 
                arr_15 [(unsigned short)10] = ((/* implicit */_Bool) ((var_3) % (var_8)));
            }
        } 
    } 
}
