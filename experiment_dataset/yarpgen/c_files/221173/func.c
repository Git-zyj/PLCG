/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221173
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
    var_14 &= var_3;
    var_15 = ((/* implicit */unsigned short) ((int) var_4));
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 486697794160638315ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_17 = max((((/* implicit */int) ((arr_1 [i_0 + 2] [(signed char)8]) != (arr_1 [i_0 - 1] [i_0 + 2])))), (((int) arr_1 [i_0 + 3] [i_0])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
            var_19 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : ((+(-38564476)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_10 [i_3 + 2] [i_1] [i_3 + 2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_3] [i_3] [i_3 - 2] [11]), (arr_6 [i_3] [i_3] [i_3 + 3] [i_3 + 3])))) ? (max((arr_3 [i_0 - 3] [i_0] [i_0]), (((((/* implicit */unsigned long long int) arr_7 [i_1] [i_3 + 3])) ^ (13471010394812928360ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        var_20 = ((/* implicit */short) arr_4 [i_0] [i_0]);
                    }
                } 
            } 
            arr_11 [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) var_5);
        }
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_14 [i_0] [i_0 - 3] [i_0 - 3] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
            var_21 += ((/* implicit */unsigned short) ((((arr_1 [i_0 + 2] [i_4]) + (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_4] [i_4])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 3] [i_0 - 3] [1]))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 8; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) arr_1 [i_0] [i_4]);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((max((arr_9 [i_0 + 2]), (arr_9 [i_6]))), (max((arr_9 [i_6]), (((/* implicit */int) var_8)))))))));
                        }
                    } 
                } 
            } 
            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) var_2))));
        }
        arr_24 [(unsigned short)4] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_15 [i_0] [i_0 + 2]))));
        var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))));
    }
}
