/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21416
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
    var_14 = ((/* implicit */int) min((var_14), (min(((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_6)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_13))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) - (3914297448U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 380669857U)) ? (((/* implicit */int) arr_2 [16LL] [(unsigned char)11] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_4 [i_0 + 1] [i_0 - 1])), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-8553258972080036577LL), (((/* implicit */long long int) 4256434444U))))) ? (((unsigned long long int) ((unsigned char) -812675647))) : (((((unsigned long long int) arr_2 [4ULL] [i_1] [i_1])) << (((((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_0 + 1])) - (119)))))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_8 [i_3] [i_4]);
                        var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_10 [i_0 + 1])), (((((/* implicit */_Bool) 759666517481805415ULL)) ? (((1741685995) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)120))))));
                        arr_13 [(signed char)19] [(signed char)19] [(short)18] [i_3] [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_12)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) var_1);
            arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6230528021672284287ULL)) ? (3153148856320662344LL) : (0LL))))));
        }
        arr_15 [i_0] = ((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [(unsigned char)5] [i_0 - 1] [i_0] [6] [(short)16]), (arr_12 [(signed char)9] [i_0 - 1] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 8553258972080036576LL)) ? (380669848U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19897)))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        arr_18 [(signed char)10] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_5]))));
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_5] [i_5] [18]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((((/* implicit */_Bool) (unsigned short)45056)) ? (-2129306632) : (((/* implicit */int) arr_20 [i_6])))) : ((~(((/* implicit */int) (short)15))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (var_13)));
        arr_21 [i_6] = max((min((9533648302114854496ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))))))) == (var_10)))));
    }
}
