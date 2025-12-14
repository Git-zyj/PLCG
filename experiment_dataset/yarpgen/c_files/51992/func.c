/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51992
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_17 &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1)))))));
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))) < (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) arr_5 [5] [(unsigned short)4] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_1]) : (arr_4 [i_0])))))));
            var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)172))) ? (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_12)))))))));
            arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (arr_1 [i_0])))) ? (max((var_5), (((/* implicit */unsigned int) var_4)))) : (((arr_4 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))));
        }
        arr_7 [i_0] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0] [18U])))) * (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_3 [i_0]))))))));
        var_20 = ((/* implicit */_Bool) (-(((max((((/* implicit */int) arr_3 [i_0])), (var_6))) << (((/* implicit */int) max((var_16), (arr_3 [i_0]))))))));
        var_21 = (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [(_Bool)1])) == (var_9)))), (min((var_6), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                arr_14 [i_2] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3] [i_3] [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (4290449955927006680ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_10 [i_2] [i_3] [i_3])) / (arr_1 [i_3]))) <= (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_2])))))))));
                arr_15 [i_3] = ((/* implicit */_Bool) min(((-(((var_6) - (((/* implicit */int) var_14)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) ? (((/* implicit */int) var_16)) : (var_9))) >= ((~(((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 398692280)) ? (14156294117782544931ULL) : (((/* implicit */unsigned long long int) 508111793))));
}
