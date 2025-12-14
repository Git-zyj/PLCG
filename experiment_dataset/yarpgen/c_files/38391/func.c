/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38391
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
    var_12 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_0)))), (var_6)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(unsigned char)4] |= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned char) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)5455))))) | (((/* implicit */int) (short)30799)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (short)30799)))), ((-(((/* implicit */int) (unsigned char)255))))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_1] [(_Bool)0] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_4 + 1] [(signed char)6])) : (((/* implicit */int) arr_12 [i_3 - 1] [i_4 + 1] [(short)8])))), (((/* implicit */int) arr_12 [i_3 - 1] [i_4 - 3] [(signed char)8]))));
                        arr_16 [(_Bool)0] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) min((min((max((arr_7 [i_2] [i_2 - 2]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18866))))))), (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (min((((/* implicit */unsigned char) var_4)), (var_1))))))));
                    }
                } 
            } 
        } 
    }
}
