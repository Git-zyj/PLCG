/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209657
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
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0])) / (max((arr_8 [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned int) arr_4 [0]))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) / (var_10))), (((/* implicit */long long int) (short)5772))))));
                        var_20 ^= ((/* implicit */int) (signed char)84);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) min(((~(min((arr_11 [i_0] [i_0] [13]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0 - 2])))))), (((/* implicit */unsigned long long int) min(((-(var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_13 [i_0])) : (arr_0 [i_0] [i_0])))))))));
                    var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [(short)8] [i_4 - 1] [i_4 + 1] [i_0 - 1]))))) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 + 2])), ((short)-8522)))));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_4] [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_0 + 2]))) : (((((/* implicit */_Bool) arr_6 [i_5] [(unsigned char)19] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((((var_18) + (2147483647))) >> (((/* implicit */int) (short)3))))) : ((-(1048575ULL))))))))));
                }
            } 
        } 
    }
    for (unsigned char i_6 = 4; i_6 < 22; i_6 += 4) 
    {
        var_24 = ((/* implicit */long long int) (-((~(((/* implicit */int) (signed char)87))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6 - 3])) ^ (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_6 - 1]), (arr_17 [i_6 + 2]))))) : (-8322278985794997234LL)));
        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [(unsigned short)12])) == (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [(_Bool)1]))))) <= (max((536870911U), (((/* implicit */unsigned int) (_Bool)1)))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
    {
        var_27 = (unsigned char)255;
        var_28 = ((/* implicit */short) (signed char)126);
    }
    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)11853)) && (((/* implicit */_Bool) 3627703448U))))))));
    var_30 &= ((/* implicit */unsigned short) var_17);
}
