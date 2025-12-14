/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27948
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
    var_11 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - ((~(var_3)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 1] [(signed char)18] [i_1] [i_2] [i_1] [(signed char)18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0 + 1] [(signed char)11] [(signed char)11]))))) ? (arr_5 [i_0 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1] [17] [i_1])), (arr_0 [i_2 + 1])))))));
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_4])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17208))))) : (4081409566U)))) ? (((((/* implicit */_Bool) arr_3 [i_4] [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_0 + 1] [i_4])) : (((/* implicit */int) (unsigned char)237)))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)237)))))))));
                                var_13 = ((/* implicit */long long int) (((-(((139611588448485376LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25134))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15623)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_1 [i_0]))))) ? (arr_9 [i_0] [i_0 + 1] [i_2 - 1] [(unsigned short)9]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
                                var_14 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [0ULL] [i_1 + 1] [i_2] [i_3] [(unsigned short)12] [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) == ((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((max((arr_4 [i_0 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) -139611588448485396LL)))) / (((unsigned long long int) 3635171398545245399ULL))));
                    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-4))));
                    var_17 -= ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_4 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)2] [(unsigned char)2] [i_2]))))) < (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0 + 1])), (5603669))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_2);
}
