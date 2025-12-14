/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216290
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) (unsigned char)218)) << (((((/* implicit */int) (unsigned char)93)) - (77)))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -1LL);
        }
        arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(arr_4 [i_0] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_8))))));
        arr_11 [12LL] = ((/* implicit */_Bool) ((((max((((/* implicit */long long int) (_Bool)1)), (var_1))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))) << (((var_3) / (arr_4 [i_2] [i_2])))));
    }
    for (long long int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_12 [i_3])) | (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((short) (!((_Bool)0)))))));
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        arr_21 [i_3] [i_5] = ((/* implicit */unsigned char) (-(((((var_4) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3]))))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 + 1] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
                        arr_22 [i_5] [i_3] [i_5] = (((_Bool)0) || (((/* implicit */_Bool) -1282636339175403232LL)));
                        arr_23 [i_3] [i_4] [i_4] [i_3] [i_3] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (max((arr_19 [i_3] [(unsigned char)9] [i_5] [(unsigned char)9] [i_3]), (((/* implicit */short) (_Bool)1))))))) % ((~(((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))))));
                        arr_24 [i_5] [i_5] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((short) var_3))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max((((/* implicit */short) var_0)), (arr_15 [(short)17] [(short)17]))))))));
                        arr_25 [i_3] [i_3] [i_4] [(short)14] [i_3] = ((/* implicit */unsigned char) arr_17 [i_3] [i_4] [i_6] [i_6]);
                    }
                } 
            } 
        } 
        arr_26 [i_3] [(unsigned char)12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((var_10) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), ((short)(-32767 - 1)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))));
        arr_27 [i_3] [i_3] = ((/* implicit */short) (~((~(var_10)))));
    }
    var_13 = ((/* implicit */unsigned char) -5600661172446802336LL);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((((((/* implicit */_Bool) (unsigned char)48)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        arr_32 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((long long int) -646907154581429562LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7]))))))));
        arr_33 [i_7] [i_7] = max((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)-500)) : (((/* implicit */int) (unsigned char)254))))) || (((/* implicit */_Bool) ((long long int) var_3))))), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) > (var_3))));
        arr_34 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_9))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (33554431LL)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((646907154581429546LL), (((/* implicit */long long int) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (var_12)))) ? (((/* implicit */int) arr_12 [i_7])) : (((/* implicit */int) var_7))))));
        arr_35 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (min(((unsigned char)148), (((/* implicit */unsigned char) arr_31 [i_7])))))))));
        arr_36 [i_7] = (_Bool)1;
    }
    var_15 = ((/* implicit */long long int) ((((min((((/* implicit */long long int) var_6)), (var_10))) / (var_3))) != (((/* implicit */long long int) ((/* implicit */int) min((((_Bool) var_5)), (var_2)))))));
}
