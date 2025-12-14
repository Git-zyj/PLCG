/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19767
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
    var_12 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 15; i_3 += 3) 
                    {
                        var_14 = ((long long int) max((arr_11 [i_0] [i_1] [i_1] [i_0]), (arr_11 [i_0] [9LL] [i_2] [i_3])));
                        arr_12 [i_1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                        arr_13 [i_0] [i_0] [5] [i_3 + 3] = ((/* implicit */unsigned long long int) arr_8 [(unsigned short)3] [i_1] [i_1]);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        arr_17 [i_2] = ((/* implicit */_Bool) min(((+(arr_4 [i_0] [i_1]))), (((/* implicit */long long int) (unsigned short)8990))));
                        var_15 = ((/* implicit */signed char) ((short) ((signed char) 3998110074086623179LL)));
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] [11LL] = 5764435107052874223LL;
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */long long int) 4294967282U)) : (arr_2 [i_0] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-90)), (arr_0 [i_0]))))) : (arr_15 [i_4] [i_2] [i_2] [i_1] [i_0] [(unsigned short)1])))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) min((max(((unsigned short)23156), (((/* implicit */unsigned short) (short)-22925)))), (((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_2])))))));
                    }
                    var_16 += ((/* implicit */unsigned short) arr_7 [i_0]);
                }
            } 
        } 
    } 
}
