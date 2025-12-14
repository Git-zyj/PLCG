/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231418
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) * (var_10)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((unsigned short) arr_0 [i_0] [i_0]);
        var_15 |= arr_0 [0ULL] [i_0];
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))))))) ? (((/* implicit */int) (signed char)-49)) : (((arr_0 [0U] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (short)-4096);
        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((unsigned short) (unsigned char)142))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [20ULL] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_6 [i_1])));
                        var_18 = ((/* implicit */unsigned char) (signed char)-49);
                    }
                } 
            } 
            var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-25))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))))) : (((/* implicit */int) (unsigned char)120)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((long long int) arr_7 [i_5] [i_5] [10LL])))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((short) (short)12288)))));
            var_22 = ((/* implicit */short) (unsigned char)127);
        }
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_15 [i_1 + 1]), (((/* implicit */unsigned short) var_1))))), (arr_6 [i_1 + 1])));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                {
                    arr_21 [i_1] [i_6] = (unsigned short)0;
                    var_24 = ((/* implicit */long long int) (short)4115);
                }
            } 
        } 
    }
}
