/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46050
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
    var_10 = ((/* implicit */_Bool) (+(var_8)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (!(var_0)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        arr_9 [i_3] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)0))))));
                        arr_10 [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_17 [10LL] [(_Bool)1] [i_1] [i_2] [(_Bool)1] [(_Bool)0] [(_Bool)1] = ((/* implicit */long long int) var_5);
                                arr_18 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [6ULL] [i_4] = var_5;
                                var_11 = ((/* implicit */unsigned char) 6036023489537614072LL);
                                arr_19 [i_0] [i_1] [i_2] [3LL] [i_5] = ((/* implicit */unsigned long long int) arr_0 [i_4 - 2]);
                                arr_20 [i_0] [(unsigned short)8] [i_2] = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_0] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (-38632683) : (((/* implicit */int) var_7)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_0]), (((/* implicit */short) var_3)))))) + (((unsigned int) var_9)))));
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_27 [i_6] [i_7] = ((/* implicit */_Bool) max((1114668252U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ? (arr_23 [i_6] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) ((signed char) arr_14 [i_6] [i_7] [i_7] [7ULL] [i_6]))) : ((~(var_6))))))));
            var_12 += ((/* implicit */unsigned char) ((((3749311468U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7]))))) != (((/* implicit */unsigned int) ((int) (+(var_6)))))));
            var_13 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -2075063793)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967284U)))) ? (((((/* implicit */int) var_4)) & (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_2)))))));
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned char) var_6);
            arr_31 [i_6] = ((/* implicit */unsigned char) arr_5 [i_6]);
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_5);
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_4))));
        }
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((+(((((/* implicit */_Bool) -5142518883234111199LL)) ? (var_9) : (arr_29 [i_6] [i_6] [i_6]))))) : (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_2)))))))))));
    }
    var_16 = ((/* implicit */unsigned char) var_4);
}
