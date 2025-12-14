/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238727
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
    var_20 = ((/* implicit */int) max((4097453317381468823ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1055612832)) ? (830366093) : (((/* implicit */int) (signed char)59)))), (max((var_15), (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-27)), (14349290756328082800ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */int) var_1)), (-830366077))))))));
                    var_22 -= (((+(max((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])), (3490659578990707119ULL))))) == (((var_14) << (((((/* implicit */int) arr_2 [i_2])) - (82))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */long long int) var_19);
                                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) 14349290756328082793ULL)) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 2])))) && ((!(arr_7 [i_1 + 1] [i_1 - 2] [i_4 + 1] [i_4 - 1])))));
                                var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 2] [(unsigned short)12] [i_1])) - (((/* implicit */int) (signed char)18)))), (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)16] [16ULL] [i_1 + 1] [i_1 - 1] [(_Bool)1] [i_1])) >= (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 3] [i_1 - 1] [i_1] [i_1] [(short)16])))))))));
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (max((-1901880851), (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_1] [i_0] [(_Bool)1])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_12 [(unsigned char)13])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_24 [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_6] [i_5] [i_7] [i_5])) ? (((((-357791721) + (2147483647))) << (((((/* implicit */int) arr_19 [i_5] [(unsigned char)9] [i_5])) - (51184))))) : ((~(830366093))));
                    arr_25 [i_5] [(unsigned char)1] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((arr_22 [i_6] [i_6] [(_Bool)1]), (arr_23 [i_5] [i_5] [i_7]))))) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((16720639319826235544ULL), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)6] [(short)16]))))))))));
                }
            } 
        } 
    } 
}
