/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51250
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
    var_12 = ((/* implicit */int) max((var_6), (var_10)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0]))))) > (var_5)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (-358215795)));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_1 [(_Bool)1])));
        }
    }
    for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 347127091))))), ((signed char)-104)));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8309538085128939193LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)19598)) < (((347127104) / (((/* implicit */int) (unsigned short)45941))))))) : (331925857)));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_1 [i_2])))) ? ((+(1369274269U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_12 [i_2])))))) == (min((((/* implicit */long long int) var_0)), (-7631108202514542036LL)))))) : (((((/* implicit */int) (short)-22482)) % (((/* implicit */int) (short)-9829))))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)45938))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (signed char)-104)), (2593191661U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)29005)))))));
    }
    var_16 = ((/* implicit */short) var_9);
    var_17 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) (unsigned short)33875)) | (((/* implicit */int) var_10))))))));
}
