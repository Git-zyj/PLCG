/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245036
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
    var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((_Bool) max(((unsigned short)60164), (((/* implicit */unsigned short) (_Bool)0)))))) : (var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26732)) ? (((/* implicit */int) (unsigned short)38803)) : (((int) 7))));
                                var_18 = ((/* implicit */unsigned short) 31);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])) == (arr_2 [i_2])))) & (((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_6 [i_0] [i_3] [i_0])) % (((/* implicit */int) (unsigned char)9))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (min((((((/* implicit */int) (unsigned char)248)) & (((/* implicit */int) (unsigned char)57)))), (arr_7 [5ULL]))) : (((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)201)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((int) ((_Bool) max((4064158027U), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_1]))))));
                    arr_16 [i_0] [i_2] = ((/* implicit */int) 1ULL);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (max(((unsigned char)25), (((/* implicit */unsigned char) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5382))))))))));
                    var_21 = ((/* implicit */unsigned char) var_11);
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_22 = ((/* implicit */int) max((var_22), (var_15)));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 2; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) != (3132140281496771962ULL))))));
                                arr_26 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((0) % (((/* implicit */int) (short)13833))));
                                var_24 = ((/* implicit */_Bool) min((var_24), ((_Bool)1)));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (max((arr_10 [i_0 + 1] [i_0] [i_1]), (((/* implicit */long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (var_9))))))) < (((/* implicit */long long int) ((/* implicit */int) ((min((arr_4 [i_0]), (((/* implicit */unsigned int) (unsigned char)235)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0])))))))));
                arr_27 [i_0] = ((/* implicit */unsigned int) ((((((-9223372036854775794LL) + (9223372036854775807LL))) << (((15314603792212779653ULL) - (15314603792212779653ULL))))) % (((/* implicit */long long int) (+(arr_0 [i_0 + 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((3) <= (((/* implicit */int) (unsigned short)13360)))))) <= (9223372036854775794LL))))))));
}
