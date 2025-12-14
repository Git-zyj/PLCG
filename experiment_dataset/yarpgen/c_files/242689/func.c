/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242689
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_5))));
    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_3))))))) && (var_15)));
    var_18 = (-(var_11));
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), (max(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (unsigned char)165))))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14499)) + (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_13))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                            arr_14 [i_2] [i_3] [i_2] [(unsigned char)7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [5ULL] [i_1]) ? (((/* implicit */int) arr_7 [i_4] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_5 [6ULL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_2] [i_3] [i_0]))))) : (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_2] [i_4 - 1]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(unsigned short)2])) % (((/* implicit */int) (unsigned char)28))));
            arr_15 [i_0] = ((/* implicit */_Bool) var_4);
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_3))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_5]))) > ((+(((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_5] [(unsigned short)4] [i_5])))))));
            var_23 = ((/* implicit */_Bool) max((((unsigned long long int) arr_5 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [5ULL] [(unsigned char)10] [(unsigned char)10] [i_5] [(unsigned char)10])) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)13)))))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_20 [i_0] [i_5]), (arr_20 [i_0] [i_5])))) * (((/* implicit */int) max((arr_20 [i_0] [(_Bool)1]), (arr_20 [i_5] [i_0]))))));
            arr_21 [i_5] [i_0] = ((/* implicit */unsigned short) ((min((arr_0 [(unsigned char)6] [i_5]), (arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) (_Bool)1))), (((arr_20 [i_5] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (var_9)));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            arr_24 [(_Bool)1] [i_6] = arr_5 [(unsigned char)7];
            arr_25 [i_0] [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) (!(arr_20 [i_0] [i_6 - 1])));
        }
    }
    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) arr_28 [i_7] [i_7 - 1]))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) var_10)), (min((var_7), (5323633716549470436ULL)))))))));
    }
}
