/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241372
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
    var_16 = ((/* implicit */unsigned short) var_14);
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((unsigned long long int) (+(((long long int) (signed char)86)))));
        var_19 *= ((/* implicit */unsigned int) 1701838665185279298LL);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((unsigned int) -1701838665185279272LL)) >= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-86))))))))));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned int) 2096128);
                            var_20 = ((/* implicit */unsigned char) (signed char)70);
                            arr_18 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_15 [i_2 - 3] [i_2 + 4] [i_2 + 2] [i_3 - 1] [17ULL])), (arr_8 [i_3 - 2] [i_3 - 2] [i_0] [i_3 + 1])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_0] [i_5] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 + 4] [i_0 + 2] [i_5] [i_5])) ? (arr_3 [i_0] [i_0] [i_0 - 2]) : (arr_3 [i_0 + 1] [i_5] [i_0]))));
            arr_22 [i_0 - 2] [i_0] [10U] = ((/* implicit */unsigned char) max((((_Bool) -1112334738)), (((((/* implicit */int) (unsigned short)37405)) >= (((/* implicit */int) arr_5 [i_0 + 4]))))));
        }
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 1654047335U))));
    var_22 = ((/* implicit */_Bool) var_5);
}
