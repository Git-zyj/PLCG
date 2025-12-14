/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48789
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_2);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_2]))))))), (arr_1 [i_0]))))));
                    arr_8 [(_Bool)0] = ((/* implicit */unsigned long long int) ((short) ((_Bool) (unsigned short)65523)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) (signed char)0);
    }
    var_14 = ((/* implicit */short) ((unsigned short) var_3));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-1))));
        arr_13 [i_3] [(unsigned short)6] |= ((/* implicit */unsigned long long int) (+(var_1)));
        /* LoopNest 3 */
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (unsigned int i_6 = 4; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((((_Bool) ((var_0) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-14535))) : ((-(arr_19 [17ULL] [i_4] [8ULL] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_16 = ((/* implicit */_Bool) arr_20 [i_3 - 2] [i_4] [i_5] [8U]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) min((var_6), (arr_18 [i_3]))))))))));
                        var_18 -= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [(short)2])) : (((/* implicit */int) var_0)))))) - (((/* implicit */int) arr_20 [i_3 - 2] [i_4] [i_5] [i_6]))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))) : (((2097151ULL) - (((/* implicit */unsigned long long int) var_1))))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */short) ((unsigned long long int) var_6));
}
