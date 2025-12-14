/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237029
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
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_4])) : (((/* implicit */int) arr_3 [i_1 - 3] [i_0]))))) == (arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0] [i_4])))));
                                var_17 &= ((/* implicit */unsigned short) (+(((long long int) max((((/* implicit */unsigned int) var_14)), (3445546336U))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) ? (8521215115264LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (672094274U))))))) ? ((-((-(-1252901334414133269LL))))) : (arr_2 [i_1 - 1] [i_1 - 1])));
                    var_19 = ((/* implicit */unsigned int) arr_1 [5LL] [i_1]);
                    var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) min((9007197107257344LL), (((/* implicit */long long int) (unsigned short)27907))));
                                var_22 -= ((/* implicit */unsigned short) ((((var_10) != (((/* implicit */long long int) 2571034421U)))) ? (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) arr_5 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5]))))) : (((arr_5 [i_5 - 1] [i_5 - 1] [i_2] [i_5]) ? (-9223372036854775781LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1] [i_2] [i_5 + 1])))))));
                                arr_18 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((_Bool) 8521215115264LL)) ? (arr_17 [i_0] [i_5 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [4U] [i_1 - 1] [4U] [i_1 - 1] [i_5 + 1])) + ((+(((/* implicit */int) (unsigned short)27893)))))))));
                            }
                        } 
                    } 
                }
                arr_19 [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_0]);
                var_23 += ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                arr_20 [i_0] [i_1] [i_1 - 3] = ((/* implicit */unsigned short) (~(((arr_4 [i_1 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2336408358U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((2615965779U), (((/* implicit */unsigned int) var_7))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)8857), (((/* implicit */unsigned short) var_9))))))));
    var_25 = ((/* implicit */unsigned short) ((unsigned int) var_12));
}
