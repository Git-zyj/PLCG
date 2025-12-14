/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208547
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_14)) : (12110592389705903940ULL))) <= (((/* implicit */unsigned long long int) var_10))))))))));
    var_18 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 365609678)) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */short) ((signed char) ((unsigned int) (!(((/* implicit */_Bool) (short)32746))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_3] [i_3] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_3 + 3])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_3 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_3 - 1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) arr_4 [i_3] [i_3 - 1] [i_3])))));
                                var_19 = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_3]))))) != (var_1))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) var_14))), (min((9223372036854775807LL), (((/* implicit */long long int) var_9))))))) : ((-(((((/* implicit */_Bool) var_7)) ? (10049294512684232509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32752)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)0)))))));
                                arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_4] [i_2] [i_3])) : (var_1)))) ? (((var_11) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_12 [i_0] [i_4] [i_2] [i_4] [i_3 + 2] [i_3] [i_1]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (3551529407U))) ? (max((8397449561025319128ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((unsigned long long int) arr_11 [i_3] [i_4] [i_3] [i_3 + 3] [i_3 - 2])), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_4)))), (arr_5 [i_3 - 2])))))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) arr_9 [i_0 - 2] [2U] [i_2])));
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) 7703430162686581236LL)) ? (arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [11ULL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (short i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        var_24 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned char) arr_6 [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((((/* implicit */_Bool) ((signed char) arr_9 [i_5] [(short)0] [i_5 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) arr_11 [i_5] [(short)2] [i_5] [i_5] [i_5]))))));
        arr_17 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_4 [i_5 - 3] [i_5] [i_5])) : (arr_5 [i_5])))) ? (((unsigned int) arr_5 [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-230), (arr_4 [i_5 + 2] [i_5] [12ULL])))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_4), ((short)7809))))) : (((unsigned int) arr_7 [i_5] [i_5] [i_5] [i_5]))))));
        arr_18 [i_5 + 2] [i_5 - 1] = ((/* implicit */unsigned long long int) (-(max(((-(((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_9))))))));
        arr_19 [i_5] = ((/* implicit */short) var_11);
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_6 [i_5 - 1]))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5 - 3] [i_5]))) : (arr_0 [i_5]))), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_5 + 1] [i_5 - 2] [i_5 - 1]))))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_27 = ((/* implicit */signed char) var_7);
}
