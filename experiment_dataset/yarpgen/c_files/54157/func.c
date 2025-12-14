/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54157
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((((9330862464126196375ULL) != (14123296884479168201ULL))) ? (max((((/* implicit */unsigned long long int) (unsigned char)153)), (((((/* implicit */_Bool) (unsigned short)32439)) ? (9330862464126196375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 - 1]))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2]))) : ((~(((/* implicit */int) (unsigned short)52376))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) var_19);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) arr_1 [i_0 - 3]))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (+(var_16)));
                    arr_17 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)48))));
                    arr_18 [(unsigned char)16] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)47710))));
                }
            } 
        } 
    } 
}
