/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34740
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
    var_18 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) % (((/* implicit */int) (unsigned char)161))));
    var_19 -= ((/* implicit */unsigned short) 9223372036854775807LL);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_8 [19] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_2 - 1] [i_2 - 1]);
                        var_20 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) * (9043323067670877663ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))))));
                        var_21 ^= ((/* implicit */_Bool) arr_6 [(unsigned short)20] [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 2) 
                    {
                        arr_13 [i_0] [21ULL] [4U] [11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [(signed char)15] [i_2] [i_4] [i_2] [i_4]))))) ? (((unsigned long long int) arr_11 [i_0] [(signed char)6] [(short)0] [7])) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_2] [i_4])))) >> (((((/* implicit */int) min((arr_4 [i_1] [(signed char)9] [i_1]), ((_Bool)0)))) >> (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_9 [i_4] [i_2] [12ULL] [2U] [i_1] [i_0])))))));
                        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_0 [i_1] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [(unsigned char)8] [i_2])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -853771492))))) : (((/* implicit */int) ((_Bool) ((var_7) || (((/* implicit */_Bool) arr_11 [i_0] [(signed char)22] [(_Bool)1] [i_4]))))))));
                        arr_14 [18LL] [i_1] [5ULL] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) min((arr_3 [i_4] [i_4 + 2] [i_2 - 1]), (((/* implicit */unsigned char) var_8)))));
                    }
                    arr_15 [i_0] [0ULL] [i_2] [(_Bool)1] = ((/* implicit */short) -3499467439387580534LL);
                    arr_16 [i_0] [(short)10] [i_2] [i_0] = ((/* implicit */unsigned long long int) (signed char)127);
                    arr_17 [i_0] = ((/* implicit */unsigned short) (~(((11U) / (((unsigned int) arr_0 [i_0] [i_1]))))));
                    arr_18 [(_Bool)1] [i_1] [1ULL] = ((/* implicit */signed char) (+((+(max((arr_2 [(_Bool)1]), (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
