/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24945
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) 2974964135790973606ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (-1635950078975837373LL))))), (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0] [i_1])), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)58860)))))))));
                var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_8 [i_2] [i_2])))), (((/* implicit */int) arr_8 [i_2] [i_2]))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (max((var_3), ((unsigned short)6675)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 7; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [(signed char)0])) + (((/* implicit */int) (unsigned short)6673)))) < (((/* implicit */int) arr_1 [i_3] [i_3]))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 7; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5] = (_Bool)0;
                    arr_19 [i_3] [i_4] [i_5] = ((/* implicit */int) var_10);
                    arr_20 [i_3] [i_5] [(unsigned short)2] = ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_1 [i_4 + 2] [i_3 + 1])) : (((((/* implicit */int) (unsigned char)41)) - (((/* implicit */int) (unsigned short)58850)))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) -9223372036854775802LL);
    }
    for (unsigned char i_6 = 2; i_6 < 7; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (short)-25525)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0)))));
        arr_25 [i_6] = ((/* implicit */_Bool) arr_22 [i_6]);
        var_18 = ((/* implicit */_Bool) var_10);
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_21 [i_6] [i_6])) << (((/* implicit */int) max((arr_7 [i_6]), (((/* implicit */short) (_Bool)1))))))) > (((/* implicit */int) ((unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_7 [i_6])))))));
        arr_26 [i_6 + 3] [10ULL] = arr_8 [7LL] [0];
    }
}
