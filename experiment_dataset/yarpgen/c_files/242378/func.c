/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242378
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-117))));
                        var_18 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) var_15)) * (((30) & (((/* implicit */int) arr_9 [i_0])))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_11)) - (46)))))) == (((unsigned long long int) (signed char)117)))))))) : (((/* implicit */short) ((((((/* implicit */int) var_15)) * (((30) & (((/* implicit */int) arr_9 [i_0])))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((arr_1 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_11)) - (46))) - (2)))))) == (((unsigned long long int) (signed char)117))))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (signed char)109);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7260570068266538268LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_10 [i_0] [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) 5093481380160957238ULL)) ? (272678883688448LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) -11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16498544037496076635ULL)))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4 - 2] [i_4 - 1])) ? ((+(((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) arr_14 [i_4 - 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)23756)) & (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) (_Bool)1)) << (((arr_8 [i_7]) + (7474308890201889256LL)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_4 - 2])) == (((/* implicit */int) arr_9 [i_4]))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) var_8);
}
