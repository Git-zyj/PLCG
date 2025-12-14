/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193684
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_12 -= ((/* implicit */signed char) arr_1 [(_Bool)1] [10ULL]);
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) max(((+(((((/* implicit */int) arr_1 [(unsigned char)2] [i_0])) + (((/* implicit */int) var_8)))))), (((/* implicit */int) ((_Bool) -5527343351897613500LL)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (unsigned char)255)))) * (((/* implicit */int) (unsigned char)251))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) arr_6 [i_1 + 1]);
    }
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_15 *= ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
        arr_11 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_10 [i_2] [(_Bool)1]))))));
    }
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 24; i_6 += 2) 
                    {
                        var_16 -= (~(((/* implicit */int) ((unsigned char) var_9))));
                        arr_21 [i_3] [(short)23] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)241))))) ? (((max((((/* implicit */int) arr_20 [i_3 + 2] [i_3])), (arr_17 [i_3]))) + (((/* implicit */int) (unsigned char)33)))) : ((+(((/* implicit */int) arr_13 [i_5]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned int) ((short) arr_19 [i_4] [i_4] [i_4] [i_5] [i_7]));
                        var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_5] [i_7]))))) ? (((/* implicit */int) arr_18 [i_3 + 2] [i_7] [i_5] [i_3])) : (((/* implicit */int) (_Bool)1)))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned char)35))));
                        var_20 *= (!((!(arr_16 [i_3 + 1] [i_4] [i_5]))));
                    }
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (short)23972)))), (((/* implicit */int) ((unsigned short) arr_12 [i_3] [i_3]))))))));
                    var_22 ^= ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((arr_24 [i_3] [(signed char)16] [i_4] [(unsigned short)14] [i_3] [i_3 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (arr_20 [i_3] [i_5])))) < (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [(_Bool)1] [20])) - (((/* implicit */int) arr_13 [i_3]))))))));
                    var_23 = ((/* implicit */unsigned char) (!((_Bool)1)));
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */short) (-((+((+(((/* implicit */int) var_2))))))));
}
