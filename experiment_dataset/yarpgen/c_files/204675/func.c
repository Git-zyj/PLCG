/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204675
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_7))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_14))))))) ? (((int) ((unsigned char) 37544868U))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-92)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned int) max((arr_0 [i_0]), (min((((/* implicit */int) (_Bool)1)), (-637993477)))))))));
        arr_4 [(short)7] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */_Bool) 37544864U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5960216514805182578LL)))))) ? (max((37544882U), (((/* implicit */unsigned int) (signed char)59)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((short) var_3)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    var_21 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)9316)))))));
        var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 37544871U)) ? (4257422413U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */unsigned short) (-(arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) arr_8 [i_2]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_13 [i_2] = ((/* implicit */unsigned long long int) 4257422424U);
            arr_14 [i_2] = ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_2]));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)62))));
            arr_16 [i_2] = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_2]));
            arr_17 [i_2] [(short)16] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_2] [(unsigned short)18])) : (((/* implicit */int) var_12))));
        }
        arr_18 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1340033072U)) ? (((/* implicit */unsigned int) -1817778478)) : (2954934224U)));
    }
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
    {
        arr_22 [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 5U)) ? (min((var_5), (((/* implicit */unsigned long long int) arr_19 [i_4 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 15307193825316557886ULL))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_0))))) : (((arr_8 [i_4 + 2]) ? (var_1) : (((/* implicit */long long int) 2954934223U)))))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1817778484)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
        arr_23 [i_4] = ((unsigned long long int) max((((/* implicit */unsigned char) arr_8 [(signed char)10])), (arr_12 [i_4])));
        arr_24 [i_4] = ((/* implicit */short) max((arr_19 [4U]), ((-(arr_19 [i_4 - 1])))));
    }
}
