/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49916
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
    var_11 = ((/* implicit */int) var_5);
    var_12 ^= ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 2] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) arr_0 [i_0 - 2] [i_1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [(signed char)10] |= ((/* implicit */_Bool) (unsigned char)10);
                                arr_14 [i_0 - 3] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) arr_2 [i_0]);
                                arr_15 [i_0] [i_1] [21LL] [i_3 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), ((unsigned char)9)))) ? (min((arr_9 [i_0] [(short)17] [i_3 - 1] [i_0]), (arr_9 [i_0] [(_Bool)1] [i_3 - 1] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1])) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_0 - 2] [i_2 - 1]))))));
                                arr_16 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2]))))) % (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [8LL] [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [(short)4] [(_Bool)1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4] [i_0 - 3])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (unsigned char)88))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1])))) % (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_3 - 2] [i_4])), (11520694344879053017ULL)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [(signed char)12] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [(_Bool)1])) * ((~(((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0 + 1] [i_0] [i_1]))) : (min((18446744073709551601ULL), (((/* implicit */unsigned long long int) var_2))))))));
            }
        } 
    } 
    var_14 *= ((/* implicit */unsigned char) var_5);
}
