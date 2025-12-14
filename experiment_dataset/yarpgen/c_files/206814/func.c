/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206814
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
    var_16 ^= ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */unsigned long long int) min((min((max((var_0), (((/* implicit */int) var_9)))), ((((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_10)) ? (min((var_1), (((/* implicit */int) (unsigned short)63613)))) : (((/* implicit */int) max(((unsigned short)1924), ((unsigned short)1943))))))));
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)10642)) ? (4398046511103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63596))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_11)), (var_8)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) arr_4 [i_0] [1] [i_0]);
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] [i_1] [(unsigned short)9] = var_11;
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_3)), (((((unsigned long long int) (unsigned short)48919)) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57344))) + (205842513U))))))));
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] [i_1] [i_4] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5524)) & ((~(((/* implicit */int) var_5))))))) & (min((((/* implicit */unsigned long long int) var_6)), ((~(arr_1 [i_0]))))));
                                var_21 = ((/* implicit */unsigned int) min((-2312430784251700226LL), (((/* implicit */long long int) min((arr_0 [i_1] [i_2 + 2]), (((/* implicit */signed char) var_11)))))));
                            }
                            for (unsigned int i_5 = 3; i_5 < 6; i_5 += 3) 
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (unsigned short)52516)) | ((~(((/* implicit */int) (_Bool)0))))))));
                                var_23 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_5)) && ((_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])), (3973007359U)))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 1073739776)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (321959964U))))));
                                arr_15 [i_1] [(_Bool)1] [i_5] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) (unsigned short)63583);
                            }
                            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((65011712), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) || (((((/* implicit */_Bool) arr_13 [i_0 - 1])) || (((/* implicit */_Bool) ((signed char) arr_3 [i_1 + 2])))))));
                                var_26 = ((/* implicit */signed char) ((((min((arr_10 [i_1] [i_1] [i_2] [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 - 1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_2 + 2] [i_3 + 1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16285), (((/* implicit */unsigned short) (_Bool)1))))))));
                            }
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) (((+(((/* implicit */int) var_9)))) - (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_28 &= var_3;
}
