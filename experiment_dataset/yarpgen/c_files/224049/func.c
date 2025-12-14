/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224049
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
    var_18 |= ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_14)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) 7276001070782230503ULL);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1)) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_14))))), (arr_6 [i_2] [16LL] [i_0])))));
                    var_20 -= ((/* implicit */unsigned int) var_14);
                }
            } 
        } 
        arr_8 [3] [3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3082576699250917228ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (((unsigned long long int) var_9))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3])), (arr_0 [i_3]))))))));
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_15)), (arr_6 [3] [3] [i_3])))))), ((-(max((((/* implicit */unsigned long long int) var_11)), (15364167374458634373ULL)))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (long long int i_5 = 4; i_5 < 23; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_5 + 1] [(_Bool)1] = ((/* implicit */_Bool) min((((long long int) ((unsigned long long int) (_Bool)0))), (((/* implicit */long long int) var_13))));
                    arr_22 [i_4] [1ULL] = ((/* implicit */unsigned long long int) ((((var_13) <= ((-(((/* implicit */int) var_17)))))) ? ((((_Bool)1) ? (-4323569990667963739LL) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4067117034475316116LL))))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) 770613095))));
                }
            } 
        } 
    } 
}
