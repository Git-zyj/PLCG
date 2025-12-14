/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225973
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
    var_19 = ((/* implicit */unsigned short) ((int) max(((short)18404), (((/* implicit */short) (signed char)-126)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18404)) ? (-976601577) : (((/* implicit */int) (signed char)52))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (((((/* implicit */_Bool) (unsigned char)90)) ? (8670321331196160945ULL) : (((/* implicit */unsigned long long int) 5841284926749276934LL))))))));
                    arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 2]))))) ? (var_12) : (min((((/* implicit */unsigned long long int) (unsigned char)65)), (var_1))));
                    arr_7 [(short)9] [i_1] [(unsigned short)12] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_4 [i_0] [i_1 - 3] [i_0]), (((/* implicit */unsigned char) arr_3 [i_0] [i_1 - 3]))))), (var_18)));
                    var_21 = ((/* implicit */signed char) arr_5 [(signed char)13]);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31300)) ? (-1270356069) : (-1949812355)));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_9)), (arr_2 [i_0]))), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_4)))))));
        arr_9 [i_0] [i_0] = ((/* implicit */short) var_18);
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_3])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_3])))));
        var_24 += ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_4))));
        var_25 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_3] [i_3]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [(short)12] [i_3] [i_3])), (arr_12 [i_3] [i_3]))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_13);
}
