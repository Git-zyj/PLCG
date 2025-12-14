/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44625
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */long long int) ((_Bool) (unsigned char)12));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1] [5LL]) : (arr_0 [i_2] [i_2])))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_3 [i_1]))))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((max((((/* implicit */unsigned long long int) var_3)), (var_12))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */long long int) arr_9 [i_1])))))))) ? (((/* implicit */int) ((((int) arr_3 [i_1])) == ((+(((/* implicit */int) arr_3 [i_1]))))))) : (((int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)3] [i_0])) || (((/* implicit */_Bool) var_14)))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (arr_0 [i_0] [i_1]))) << (((((((/* implicit */_Bool) var_1)) ? (var_5) : (arr_4 [i_0] [i_0] [i_0]))) + (179339324))))) > (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */_Bool) arr_6 [9] [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    }
                    var_19 += ((/* implicit */_Bool) var_8);
                    var_20 = ((/* implicit */long long int) ((signed char) ((short) arr_8 [i_0] [i_2 + 1] [i_2])));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~((~(((/* implicit */int) var_10)))))) : ((~(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */int) var_14))))))));
}
