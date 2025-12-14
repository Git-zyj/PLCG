/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40763
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((unsigned long long int) var_7)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((4026531840U), (3488473739U))) << (((var_12) + (9017996449803339249LL)))))) && (((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39953)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_12)))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) var_11))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_1))));
                        arr_14 [i_0] = ((unsigned char) (-(((arr_5 [1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39967)))))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)250)))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((var_5) << (((((/* implicit */int) (unsigned short)4545)) - (4528))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_15 [i_4])))) > (((/* implicit */int) (unsigned char)224))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0]);
            arr_21 [i_0] [(unsigned char)0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)19)) | (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [5LL])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned char) ((170601242U) < (arr_0 [(_Bool)1])));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_15 [i_6])) ? (1) : (((/* implicit */int) arr_15 [i_6]))))));
    }
}
