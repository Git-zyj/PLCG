/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36515
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
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) << (((/* implicit */int) (!(var_11))))));
    var_18 += ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned int) (signed char)76));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) arr_11 [i_0]))))) ? ((((_Bool)1) ? (259959801U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))))) : (((/* implicit */unsigned int) ((int) (_Bool)1)))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_2] [i_2] [(_Bool)1] [i_2]) : (arr_8 [i_3] [i_2] [1ULL] [i_0 - 2]))))));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (+(4035007479U)))) | (arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13176)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(259959827U)))) ? (((((/* implicit */_Bool) 3533923533U)) ? (128641375628830153ULL) : (((/* implicit */unsigned long long int) -3596988275736359222LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75)))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_15 [i_4 + 3])), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_14 [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (259959817U)))));
    }
}
