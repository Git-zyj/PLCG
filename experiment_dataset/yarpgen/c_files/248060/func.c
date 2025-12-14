/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248060
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))))) ? ((((_Bool)0) ? (((/* implicit */int) ((12723155138226303931ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : ((-(((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_10);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)47)) ? (var_12) : (((/* implicit */int) (signed char)-2)))) != ((+(((/* implicit */int) (signed char)-56))))))), (((unsigned long long int) max((arr_0 [i_1 + 1]), (((/* implicit */signed char) var_8)))))));
                        var_17 = ((unsigned long long int) ((unsigned char) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_2])))));
                        arr_12 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-125))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 0LL))) % ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)12))))))));
                        arr_13 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) var_0);
                    }
                    arr_14 [i_2] = (!(((_Bool) (!((_Bool)0)))));
                }
            } 
        } 
    } 
}
