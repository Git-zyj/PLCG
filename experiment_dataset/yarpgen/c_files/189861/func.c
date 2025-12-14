/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189861
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21566))) : (var_6))))));
        var_13 = ((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (4294967295U)));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    arr_12 [(short)10] [i_3 + 1] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_2] [i_3] [i_4]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 0)) : (arr_8 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (0U) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23285))))))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((arr_7 [i_0] [i_2] [i_3]) % (arr_7 [i_0] [0] [i_0]))))));
                    arr_13 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1794177324)) ? (((/* implicit */int) (short)-5081)) : (((/* implicit */int) (short)5081))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
                    {
                        {
                            var_17 = ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]))) ^ (((arr_7 [i_0] [i_2] [i_3 - 1]) >> (((var_4) - (13041110212693079014ULL))))));
                            arr_19 [i_0] [i_0] [i_6] [i_5] [i_3] [i_0] [i_2] = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) 0U)))));
                            var_18 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (var_7) : (-520686322))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0]))) : (var_6)))) ? (((/* implicit */unsigned long long int) arr_23 [i_0] [i_2] [i_7])) : (var_11))))));
                        }
                    } 
                } 
                var_21 = ((((/* implicit */_Bool) arr_22 [i_7] [i_7 - 2] [i_7])) ? (((/* implicit */int) arr_22 [i_0] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_22 [i_0] [i_7 - 1] [i_7])));
            }
            var_22 = ((/* implicit */unsigned int) (unsigned short)65535);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13852698991555339569ULL)) ? (8041470852803512577LL) : (5697278896880519045LL))))));
            arr_31 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_7)))) ? (var_3) : (var_7));
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((var_8) / (((/* implicit */unsigned long long int) arr_15 [8] [i_0] [i_0] [4ULL])))) | (((/* implicit */unsigned long long int) ((int) var_2))))))));
        var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) 3363662640395774534LL)) ? (var_3) : (0)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(473600102)))) ? (((arr_32 [i_10] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3607224132845045672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_10]))) > (var_10))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_32 [i_10] [i_10])), ((unsigned char)229)))))));
        arr_35 [(short)21] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_34 [i_10]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_32 [i_10] [i_10])), ((unsigned short)1))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_9)))) < (var_11)))))));
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) var_9))));
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) : (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1007888633)) >= (var_10)))))))))));
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) var_2)))))));
}
