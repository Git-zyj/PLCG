/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228125
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
    var_19 = (+(((long long int) (!(((/* implicit */_Bool) var_18))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
            var_20 = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) (_Bool)1))))));
            var_21 = var_0;
        }
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
            var_22 -= ((/* implicit */_Bool) var_9);
        }
        var_23 = ((/* implicit */_Bool) var_2);
    }
    for (short i_3 = 1; i_3 < 6; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((var_4), (((/* implicit */short) arr_2 [i_3 + 1] [(unsigned char)2])))), (((/* implicit */short) max((var_6), (((/* implicit */unsigned char) var_0))))))))));
        arr_14 [i_3 + 2] = ((/* implicit */long long int) ((var_0) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_18)) + (((/* implicit */int) arr_7 [i_3])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [12LL] [i_3 + 1] [12LL])) : (((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) ((unsigned char) var_14)))))));
        var_24 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [(signed char)12])) ? (((/* implicit */int) (!(var_16)))) : (((/* implicit */int) var_8)))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) ((unsigned short) var_18))))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_25 [i_4] [i_4] [i_5] [i_5] [(signed char)12] [i_7] &= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)73))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((max((((/* implicit */long long int) var_17)), (var_5))) | (((long long int) var_7)))) >> ((((-(((/* implicit */int) var_17)))) + (118))))))));
                        arr_26 [i_4] [i_7] [i_6] [i_4] [i_6 - 4] = ((/* implicit */signed char) (+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14003501079030804651ULL)))));
                        var_26 = ((/* implicit */unsigned short) ((18040335196847401604ULL) << (((14003501079030804648ULL) - (14003501079030804589ULL)))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) max((var_16), (var_8)))) < (((/* implicit */int) ((signed char) var_1)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (((unsigned short) var_10)))))));
}
