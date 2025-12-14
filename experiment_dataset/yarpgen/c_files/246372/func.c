/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246372
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14223)) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_13)))) : (((/* implicit */int) (unsigned short)12335))))) : (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (10695090175679185781ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_16 |= ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) max((var_13), (var_9)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 - 2] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) == (((((/* implicit */_Bool) ((short) var_11))) ? ((+(arr_0 [i_0]))) : ((+(((/* implicit */int) var_2))))))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 3175075760068741705ULL))))))));
                }
                var_18 = ((/* implicit */unsigned char) ((short) (_Bool)1));
            }
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
            arr_10 [12ULL] [(unsigned short)7] = ((/* implicit */short) var_4);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_13 [i_0] = min((((/* implicit */short) ((unsigned char) ((unsigned short) (short)(-32767 - 1))))), (((short) (!(((/* implicit */_Bool) var_4))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 3175075760068741702ULL))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_4] [i_4 - 1] [i_0 - 3]))))))))));
            arr_14 [i_4 - 1] [6] = ((unsigned char) ((((_Bool) var_4)) ? (min((var_4), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [(short)12] [(short)12] [i_4] [i_4]), (((/* implicit */unsigned short) var_2))))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_5]))));
            arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_18 [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0)))));
            arr_20 [i_0] [i_0 - 2] [i_0 - 3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))));
            var_22 = 15271668313640809911ULL;
        }
        var_23 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-30)) != (((/* implicit */int) (_Bool)1))))))), (var_5)));
    }
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned char) 6404963874256526812ULL);
        var_24 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (var_11) : (var_12))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
    }
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned short) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_10))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_29 [i_7 + 1] = ((/* implicit */signed char) ((int) arr_1 [i_7 + 1]));
    }
}
