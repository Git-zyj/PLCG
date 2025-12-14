/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42854
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
    var_19 = (-(((/* implicit */int) var_13)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 += ((/* implicit */unsigned char) 18234792416681483800ULL);
            arr_5 [i_1] [i_1] [i_0] = ((18234792416681483780ULL) * (((/* implicit */unsigned long long int) ((3518408554U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_7))));
            var_23 = var_15;
        }
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(signed char)4]))) : (arr_1 [i_0])))) ? ((+(-8863799862223360009LL))) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [4U])) != (((/* implicit */int) var_8))))))))));
            var_24 ^= ((/* implicit */signed char) var_13);
        }
    }
    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_11 [i_3 - 2]), ((short)26394)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3])) >> (((-8863799862223360016LL) + (8863799862223360038LL)))))) : (var_12)));
                        arr_20 [20U] [i_4] = ((/* implicit */short) arr_18 [i_4] [i_6]);
                        var_26 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4]))) + (var_9))), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4])))))));
                        arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) (signed char)-3);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 6562346166323969950ULL)) ? (((/* implicit */unsigned int) 1113780552)) : (1133952981U)));
        arr_22 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28388))) : ((+(((((/* implicit */_Bool) 12U)) ? (((/* implicit */long long int) 601579316)) : (8444249301319680LL)))))));
        var_28 = ((/* implicit */unsigned long long int) (short)23698);
    }
    var_29 = var_17;
}
