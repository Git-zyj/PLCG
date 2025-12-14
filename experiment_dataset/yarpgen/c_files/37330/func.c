/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37330
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
    var_13 = ((/* implicit */_Bool) (-(((((((/* implicit */long long int) ((/* implicit */int) (signed char)-48))) / (7172091334048532543LL))) * (((/* implicit */long long int) (-(var_12))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */long long int) arr_4 [i_0])) & (7172091334048532543LL)))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3104)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (unsigned char)213))))) ^ (((((/* implicit */_Bool) 7172091334048532565LL)) ? (7172091334048532550LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -249952608))) ? (7172091334048532538LL) : (max((-7172091334048532551LL), (((/* implicit */long long int) (unsigned char)224))))));
                                arr_16 [(short)0] = ((/* implicit */unsigned char) -1358699189);
                                arr_17 [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (2336304026U))), (((/* implicit */unsigned int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1958663270U)))) ^ (((((/* implicit */_Bool) -7172091334048532563LL)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16388))))))) & (404233882U)));
                            }
                            for (int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned long long int) 1958663270U);
                                arr_21 [i_0] [i_1] &= ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-598))) * (404233877U)))));
                                arr_22 [i_5] [i_1] [i_1] [(short)5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25147)) ? (1358699188) : (((/* implicit */int) (short)5390))))) ^ (min((max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_1] [i_2] [i_3] [i_5])))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_5])))))))));
                            }
                            arr_23 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (short)-1862)))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((7172091334048532543LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201)))))) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) ((signed char) arr_14 [i_3] [i_1] [i_2] [i_1] [i_0]))))) ^ (max((1762330429), (((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)37))))))));
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) min((arr_12 [i_0] [i_0] [i_0] [i_3]), ((_Bool)0)))), (((/* implicit */unsigned long long int) max((arr_7 [i_2 + 1] [i_2] [i_2] [i_2 + 1]), (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (9083539879077453712ULL))), (((/* implicit */unsigned long long int) -359515743))))));
    var_18 = ((/* implicit */short) var_3);
}
