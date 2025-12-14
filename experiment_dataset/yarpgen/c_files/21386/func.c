/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21386
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-((~(var_5))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = (+(-1215067659));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_2 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [(_Bool)1] [i_1] [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)32)))))));
                        arr_11 [i_2] [(unsigned short)5] [i_1] [i_1] [i_2 - 4] [(unsigned short)5] = max((((arr_5 [i_0] [(unsigned short)3]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_14) || (((/* implicit */_Bool) arr_0 [i_3])))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_14 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_10 [i_2 - 2] [i_2 - 4] [i_2 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 3] [i_2 - 4])))))) : (arr_10 [i_2 - 2] [i_2 - 4] [i_2 - 2])));
                        arr_15 [i_2] [i_2 - 3] [i_1] [i_2] = ((/* implicit */unsigned short) arr_12 [i_1] [i_4] [(unsigned short)3] [i_1] [i_1] [i_0]);
                        var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                    }
                    arr_16 [i_2] [(signed char)3] [1LL] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_2] [0LL])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) < (arr_10 [i_1] [i_1] [i_1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
}
