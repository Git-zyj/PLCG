/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226408
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) 2306885072U);
                var_19 &= ((/* implicit */_Bool) ((max((arr_4 [i_0 + 1]), (arr_4 [i_0 - 2]))) - (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_4 [i_0 - 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((int) (short)-16105));
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 14; i_2 += 4) 
    {
        var_21 |= ((/* implicit */unsigned char) max((12422623582471979763ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (+(max((arr_5 [i_2 + 1] [i_3 + 1] [i_4 + 2]), (((/* implicit */unsigned long long int) var_18))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) + (((/* implicit */int) (unsigned char)202))));
                        var_24 &= ((/* implicit */short) (-((((-(arr_9 [i_2 + 1] [i_2 + 1]))) >> (((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (short)3)))) - (60)))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_6)) - (max((760120959U), (((/* implicit */unsigned int) arr_11 [i_2] [i_2 - 2]))))));
        var_26 = ((((/* implicit */_Bool) max((arr_2 [5]), (arr_2 [i_2])))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned char)255)), (18178713432508302791ULL))), (((/* implicit */unsigned long long int) (signed char)-80))))));
        arr_20 [i_2] [i_2 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_2]), (arr_16 [i_2] [(_Bool)1]))))) & (arr_7 [i_2])))));
    }
}
