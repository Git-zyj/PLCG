/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213611
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (short)0);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31530)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 4]))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2020504612) : (((/* implicit */int) (short)32756)))) : (((/* implicit */int) min((arr_2 [i_0 + 4]), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [i_0 - 1] [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) max(((short)-32764), ((short)32767)))) : (((((/* implicit */int) (short)-32750)) + (((/* implicit */int) (short)32754))))));
        var_14 += ((/* implicit */short) min((((arr_2 [i_1 + 1]) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (arr_4 [(unsigned short)8] [i_1 + 1]))), (((/* implicit */int) (short)32767))));
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        var_15 = (short)-32761;
        /* LoopSeq 3 */
        for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            var_16 = ((/* implicit */short) -1142335236241895260LL);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) 8123063596540182448ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)4))) : (arr_0 [i_2] [i_2 - 1]))) << (((((((/* implicit */int) (short)-24973)) % (((/* implicit */int) var_10)))) + (51))))))));
            var_18 -= ((/* implicit */short) ((_Bool) arr_8 [(short)7] [i_2] [i_3 + 2]));
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_19 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) arr_6 [i_2 + 1])) : (((/* implicit */int) (short)24972))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (33554416) : (((/* implicit */int) arr_15 [i_2] [i_6 + 1] [i_6 + 2] [i_6 - 1])))))));
                        var_21 = ((/* implicit */signed char) (short)32743);
                        var_22 &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65530))));
                        var_23 = ((signed char) 524288);
                        var_24 = ((/* implicit */long long int) (short)8275);
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */short) ((arr_22 [i_2] [i_2 - 2] [i_2 + 1] [i_8 + 1] [i_8]) ? (((/* implicit */int) arr_25 [i_2 + 1] [i_2 + 1] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) : (((/* implicit */int) (short)32741))));
                        arr_27 [i_2] [i_2] [(_Bool)0] [i_2 - 1] [i_9] = ((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2] [8] [i_2]);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)24986)) || (((/* implicit */_Bool) (short)-32737)))))));
                    }
                    var_27 = ((/* implicit */signed char) (((_Bool)1) ? (34420494) : (((/* implicit */int) (short)21523))));
                    var_28 = ((short) ((signed char) arr_19 [i_2] [4]));
                    arr_28 [i_2] [i_9] [(short)8] [(short)3] = ((/* implicit */_Bool) var_0);
                }
                var_29 ^= ((/* implicit */int) (short)24986);
                var_30 = arr_2 [i_8 + 1];
            }
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (short)-6533)) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_19 [(short)5] [i_2 - 1]))));
            var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_26 [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)16384))))));
            var_33 = ((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7]);
            arr_29 [i_2] [(short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 - 2])) : (((((/* implicit */_Bool) 830035098851531986LL)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (_Bool)1))))));
        }
        var_34 = ((/* implicit */signed char) (+(((long long int) var_9))));
        arr_30 [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_2] [i_2] [i_2 + 1]))));
    }
}
