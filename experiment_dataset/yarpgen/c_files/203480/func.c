/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203480
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
    var_17 = ((/* implicit */unsigned char) -6369031281611320508LL);
    var_18 = ((/* implicit */_Bool) var_13);
    var_19 = ((/* implicit */unsigned short) (-(var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = (_Bool)0;
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_21 -= ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)9988)), (var_14)))), (var_11)));
                    arr_10 [i_0] [i_2] [i_2] = ((((long long int) ((((/* implicit */_Bool) 5740232748652387853LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((var_2), (var_12)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)8648)), (var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))) : (var_7)))));
                        arr_13 [i_0] [i_2] [10] = ((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) 128527468))))) <= (var_5));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 + 1] [i_4] [i_4 + 2] [(short)7] [i_2]))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (signed char)-74))));
                            arr_16 [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)0);
                            var_25 *= ((/* implicit */short) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 + 1] [i_4 - 1])) == (((/* implicit */int) arr_4 [i_3 - 2] [i_4 + 1]))))))));
                            var_26 *= ((/* implicit */short) (-((+(((/* implicit */int) arr_9 [i_3 - 2] [i_4 + 2]))))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_27 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (arr_17 [12U] [i_1] [0] [i_3] [(short)6])))) ? (var_5) : (((/* implicit */long long int) (-(var_1)))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)12528)))));
                            var_28 = ((/* implicit */long long int) (+(((int) var_11))));
                            arr_21 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (var_16)));
                            var_29 += ((/* implicit */long long int) (((~(var_16))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) < (var_4)))))));
                            var_30 = ((/* implicit */unsigned int) var_15);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_29 [i_7] [i_6] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_4 [i_7] [i_0])))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_12))));
                        }
                    } 
                } 
            }
        } 
    } 
}
