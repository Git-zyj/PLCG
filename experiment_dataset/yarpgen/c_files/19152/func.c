/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19152
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))) || (((/* implicit */_Bool) var_7))));
                    arr_7 [i_0] [i_0] = arr_5 [i_0] [i_0];
                    var_18 = ((/* implicit */unsigned short) ((((0LL) * (0LL))) > (0LL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_3] [8ULL] [i_5] = ((/* implicit */unsigned int) (((+(var_14))) % (((/* implicit */long long int) ((((/* implicit */int) (short)-29978)) & (((/* implicit */int) var_7)))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                            arr_21 [i_0] [i_3 + 1] [i_3 + 1] [i_4] [i_4] [i_6] [i_6] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                            arr_22 [i_6] [i_5] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_3 + 4] [i_0]);
                            var_19 = ((/* implicit */unsigned int) var_6);
                        }
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((arr_16 [10LL] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        arr_28 [i_7] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_7] [i_7] [i_7])))) && (((/* implicit */_Bool) arr_5 [i_7] [i_7])))) && (((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_12)), (var_3)))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */long long int) arr_27 [i_7])), (var_3))) : (max((((/* implicit */long long int) var_5)), (var_6))))) < (((/* implicit */long long int) ((/* implicit */int) ((min((arr_12 [(unsigned char)10] [(unsigned char)10]), (((/* implicit */long long int) 3233487833U)))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7] [i_7] [i_7]))) : (arr_5 [6LL] [i_7]))))))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_11);
}
