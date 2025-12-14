/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224145
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
    var_20 += ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) (_Bool)1)), (6335851402995477204ULL))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((min((min((var_19), (6152176464643684031ULL))), (((/* implicit */unsigned long long int) max(((signed char)113), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
                                var_22 |= min((max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (arr_0 [i_3])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10274061706703371719ULL))))), (((/* implicit */unsigned long long int) max(((short)-32226), (((/* implicit */short) (_Bool)1))))));
                                var_23 = ((/* implicit */unsigned int) min((max((min((var_15), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_4 [i_4] [i_2] [i_1])), ((unsigned char)76)))))), (((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1))))));
                                arr_13 [i_0] [13] [13] [i_3] [i_1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned short) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))), (max((((/* implicit */unsigned int) arr_2 [i_1] [i_3] [0ULL])), (var_0))))), (max((max((((/* implicit */unsigned int) -351914961)), (3277909882U))), (((/* implicit */unsigned int) (_Bool)0))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_7 - 3] = max((min((((/* implicit */int) max(((signed char)-31), (((/* implicit */signed char) (_Bool)1))))), (min((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])), (arr_3 [i_1]))))), (max((((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (_Bool)0))))), (max((((/* implicit */int) arr_11 [i_0] [i_1] [i_5 - 1] [i_6] [i_7 + 2])), (var_17))))));
                                arr_22 [i_0 + 2] [i_1] [(short)8] [i_5] [i_6] [i_7 - 3] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)0), ((_Bool)0)))), (max((max((-1055655315), (((/* implicit */int) (unsigned short)58878)))), (((/* implicit */int) min(((unsigned short)64034), ((unsigned short)6657))))))));
                                arr_23 [i_1 - 1] [i_1] = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
                            }
                        } 
                    } 
                    arr_24 [i_0] [(short)12] [i_5 + 3] &= ((/* implicit */long long int) min((max((max((((/* implicit */unsigned int) (_Bool)1)), (1859967536U))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))))), (max((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-71)), (arr_3 [(signed char)4])))), (max((((/* implicit */unsigned int) arr_3 [(short)4])), (var_7)))))));
                }
                arr_25 [14U] [i_1 - 1] |= ((/* implicit */unsigned long long int) min((max((min((3517837164U), (((/* implicit */unsigned int) (short)-10413)))), (((/* implicit */unsigned int) 412465254)))), (((/* implicit */unsigned int) max((((/* implicit */signed char) min(((_Bool)0), ((_Bool)1)))), (max((((/* implicit */signed char) var_4)), (arr_1 [i_0]))))))));
            }
        } 
    } 
}
