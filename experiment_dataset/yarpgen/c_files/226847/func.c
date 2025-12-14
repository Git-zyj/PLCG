/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226847
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_2))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) / (arr_1 [i_0])));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_16 |= ((/* implicit */unsigned short) arr_1 [(short)10]);
    }
    var_17 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned char i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))) & (((arr_5 [(short)11]) ? (7055971650486349685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))))))) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) var_6)), (var_9))), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1])), (11511100495221751311ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (arr_11 [i_1] [i_1 - 1] [(unsigned char)6] [i_1])))))))))))));
                            arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (min((((/* implicit */unsigned long long int) ((7055971650486349685ULL) != (1619461168236620532ULL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_11 [i_2] [i_3] [i_3] [i_1]))))) : ((+(((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_3] [(unsigned char)4] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) : (arr_9 [i_3] [i_3] [i_3])))))));
                        }
                    } 
                } 
                arr_14 [i_1 - 1] [i_2 - 1] [i_1 - 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_11 [i_1 - 1] [(unsigned char)10] [4ULL] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (short)32256))) - (((/* implicit */int) ((unsigned short) arr_0 [(short)16]))))))));
            }
        } 
    } 
}
