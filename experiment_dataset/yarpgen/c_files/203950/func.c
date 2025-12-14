/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203950
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
    var_17 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            var_18 &= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1] [i_1 - 1]))));
            arr_4 [i_0] [i_1] = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]);
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */int) ((unsigned short) (short)10767));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_14 [i_3] [i_3] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))) : (((arr_9 [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (arr_11 [i_0] [i_0])))))));
                            var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)55757)))) | (((14315441747121361750ULL) ^ (arr_1 [i_4]))))) | (((/* implicit */unsigned long long int) (~(arr_6 [i_0] [i_1] [i_4]))))));
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_12 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2])), ((short)31821)))), (((arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [(_Bool)1] [i_2 - 3] [i_2 + 1] [i_2]))))));
                        }
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */_Bool) (-((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        arr_15 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
}
