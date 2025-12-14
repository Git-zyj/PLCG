/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240815
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) (((-((+(((/* implicit */int) (short)29508)))))) & (min((-566326794), (((/* implicit */int) (unsigned char)198))))));
            arr_6 [i_1] [i_1] [i_1] = max(((-(((/* implicit */int) ((17136502086754871477ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51)))))))), ((+(((/* implicit */int) (short)9460)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((max((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) >= (1310241986954680141ULL)))))) & ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)29508)) : (((/* implicit */int) arr_4 [(unsigned char)9] [(unsigned char)9] [i_2])))))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_13 [i_0] [i_0] [4] [i_0] [i_3] [i_3] [i_4])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) -2027346201)))))))) != (((int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_1 [i_2])))))));
                            var_18 = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))))), (((unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)20)) : (var_11))))));
                            arr_15 [i_2] [i_0] [i_2] [i_1] [(_Bool)1] [(_Bool)1] |= var_1;
                            arr_16 [i_2] [(signed char)6] [i_2] [i_4] [i_4] = (!(((/* implicit */_Bool) (unsigned char)119)));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) arr_23 [i_0 - 1] [i_5 - 3] [i_6] [i_7 + 1]);
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_5] [i_5]))))) >= (((/* implicit */int) (!((_Bool)1))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) ((unsigned char) var_0));
        }
        /* LoopNest 3 */
        for (short i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_35 [i_8] [i_8 + 2] [i_9] [i_10] = ((/* implicit */unsigned char) ((short) min(((~(arr_22 [i_10] [i_8] [i_9]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-24534)), (-1756720508)))))));
                        var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_8 + 2])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (239)))))) ? (((max((var_5), (((/* implicit */unsigned long long int) arr_11 [i_0] [0LL] [0LL] [0LL] [i_0])))) % (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) ((int) (unsigned char)214))) & (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1310241986954680145ULL)))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-13))));
        var_24 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) != (17136502086754871465ULL)));
    }
    var_25 = ((/* implicit */short) max(((~(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (_Bool)1))))))), ((((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)255)) ? (var_2) : (var_2))) - (1785503101)))))));
}
