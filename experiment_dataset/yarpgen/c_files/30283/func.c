/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30283
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */int) arr_0 [(_Bool)1]);
        arr_2 [i_0] [i_0] = ((((/* implicit */int) min((arr_1 [i_0]), ((((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0]))))))) % (((((/* implicit */_Bool) (unsigned short)12515)) ? (((/* implicit */int) (unsigned short)17388)) : (((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((arr_1 [i_0]) ? (134209536) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */int) ((short) arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_1])) ? (((/* implicit */int) arr_7 [(unsigned short)7] [i_2])) : (((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) arr_12 [0ULL] [i_2] [i_3] [i_4]))));
                        /* LoopSeq 4 */
                        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            var_19 = ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_5 + 1] [i_5 - 2] [i_5] [i_5 + 1] [i_3])), (((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (-1) : (arr_13 [i_1] [(short)9] [i_4])))))) - (arr_4 [i_4]));
                            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_11 [0ULL] [(short)2] [i_3] [i_2] [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_1] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_6 [2]))))), (((unsigned long long int) arr_10 [i_1] [i_1] [10ULL] [i_1]))))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5 + 2] [0ULL] [i_3] [0ULL] [i_1]))))) : (((/* implicit */int) arr_11 [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 2] [i_5 - 1])))))));
                            arr_17 [i_1] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (arr_13 [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_11 [i_1] [i_2] [(_Bool)1] [i_2] [i_3]))))) ? (arr_16 [i_5] [i_4] [i_5 + 2] [i_4] [i_3]) : (arr_4 [i_5 - 2]))) != (((((/* implicit */_Bool) arr_12 [i_1] [(_Bool)1] [(_Bool)1] [i_1])) ? (arr_16 [i_4] [i_2] [(unsigned short)11] [i_4] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))))));
                            var_21 *= ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [(unsigned short)11] [i_4]));
                        }
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_2] [(unsigned short)5] [i_4] [i_6 + 2] = ((/* implicit */_Bool) 532760641);
                            var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) * (arr_20 [i_1] [i_2] [(unsigned short)10] [(_Bool)1] [i_4] [(unsigned short)9])))) ? (((/* implicit */unsigned long long int) arr_9 [i_6 + 3] [i_6] [i_6 + 3] [1])) : (arr_16 [i_6 - 3] [(unsigned short)0] [i_6 - 3] [(unsigned short)0] [i_6 - 3])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_23 = arr_11 [i_1] [i_1] [i_3] [i_4] [i_7];
                            arr_24 [i_1] [i_4] [i_3] [i_4] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17388)) ? (((/* implicit */int) (unsigned short)28265)) : (((/* implicit */int) (unsigned short)48147))))) ? (((((/* implicit */int) (!(arr_11 [i_1] [i_2] [11ULL] [i_4] [i_7])))) - (((/* implicit */int) ((unsigned short) arr_19 [i_2] [i_2] [i_2] [i_4]))))) : (((/* implicit */int) max((arr_8 [i_1] [i_1] [i_3] [i_4]), (arr_8 [i_2] [i_3] [i_4] [6])))));
                            var_24 &= ((/* implicit */int) ((short) ((unsigned long long int) arr_7 [i_1] [i_1])));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */int) arr_10 [i_1] [5] [5] [i_8]);
                            arr_27 [4ULL] [i_4] = ((/* implicit */short) ((arr_22 [i_4] [i_2] [i_4] [(_Bool)1] [i_8] [i_8] [i_8]) ? ((+(arr_5 [i_4]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_12 [(_Bool)1] [i_8] [(unsigned short)11] [(unsigned short)2])), ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])))))))));
                            var_26 -= ((/* implicit */unsigned short) ((arr_1 [(unsigned short)4]) ? (((/* implicit */int) arr_22 [i_1] [3ULL] [i_2] [i_2] [(_Bool)1] [i_4] [i_8])) : ((+(((/* implicit */int) (short)24490))))));
                            var_27 = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)41645)) | (((/* implicit */int) arr_25 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1]))))));
                            var_28 = ((/* implicit */unsigned long long int) ((_Bool) arr_22 [i_1] [i_1] [i_2] [(_Bool)1] [i_4] [i_2] [i_8]));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53021)) ? (((/* implicit */unsigned long long int) 536870912)) : (17470886711152096567ULL)));
        var_30 = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]);
        var_31 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [(_Bool)0])) ? (arr_23 [(short)0]) : (((/* implicit */int) arr_3 [i_1]))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59728))) : (4959438604699469378ULL)))) || (((/* implicit */_Bool) 11697216084868997187ULL))))));
    }
    var_32 ^= ((/* implicit */_Bool) var_16);
}
