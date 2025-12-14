/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224558
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
    var_20 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_19)), (((arr_3 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)39344))));
                var_23 -= ((unsigned long long int) ((unsigned char) ((unsigned int) var_4)));
                var_24 -= ((/* implicit */unsigned char) 0U);
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) min((2584287836535308671ULL), (((/* implicit */unsigned long long int) 0U))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) var_14);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_11))));
                    var_27 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), ((~(((((/* implicit */_Bool) (unsigned short)20490)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))) : (292843257281437506ULL)))))));
                    var_28 -= ((/* implicit */unsigned char) min((((unsigned long long int) (unsigned char)16)), (77400730991783396ULL)));
                    var_29 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned short)34146)), ((+(16777215ULL))))), (var_7)));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */unsigned int) var_16);
    }
}
