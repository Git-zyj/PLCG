/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19835
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
    var_18 = ((/* implicit */unsigned short) var_13);
    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 9223372036854775780LL)), (10869929408411256146ULL))) != (((10869929408411256146ULL) >> (((3038629229U) - (3038629185U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_3 [i_0 - 1])), (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) (short)26041)) : (((/* implicit */int) var_8)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2])))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((int) var_12)))));
                var_22 = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
        arr_8 [i_2] |= ((/* implicit */unsigned short) var_1);
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_11 [10ULL] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned short)43625)), (-13LL))) > (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_3]))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (arr_15 [3]))))) * (((((unsigned long long int) arr_13 [i_3] [i_6] [(_Bool)1])) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_3] [i_3] [i_3])), (arr_23 [i_3] [i_4] [i_5] [i_6] [i_3])))))))));
                                var_24 = ((/* implicit */long long int) 536838144);
                                var_25 |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (arr_23 [i_3] [i_4] [i_3] [i_6] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1043170658)) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) arr_9 [i_3]))))) : (-9223372036854775781LL)))));
                                arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) (((~(min((((/* implicit */long long int) (_Bool)1)), (0LL))))) + (max((((((/* implicit */_Bool) 15710674806274727072ULL)) ? (1LL) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_14))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(((/* implicit */int) arr_13 [i_5] [i_5] [i_5])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            var_27 *= ((short) var_17);
            /* LoopNest 3 */
            for (long long int i_9 = 2; i_9 < 17; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) ((min((min((arr_17 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_11)))), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) arr_10 [i_9])))))) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [(unsigned short)6] [i_9 + 2] [i_9 + 2] [i_3])))));
                            var_29 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(var_10)))) ? (var_9) : (((4194303LL) >> (((/* implicit */int) var_14)))))), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_14))))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_30 = ((/* implicit */short) ((_Bool) ((unsigned short) var_7)));
}
