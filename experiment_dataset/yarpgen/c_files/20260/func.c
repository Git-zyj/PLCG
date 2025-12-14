/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20260
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */int) (signed char)31))))), (((arr_3 [i_1] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 3]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) (unsigned short)23545))), (((((/* implicit */int) arr_1 [i_0])) ^ (arr_2 [i_0] [i_0]))))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (max((max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)18813)))), (((/* implicit */int) (short)32767)))) : ((~(((/* implicit */int) arr_3 [i_1] [10] [i_1 + 2]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((-969605944), (-2051901769)));
                            var_21 = ((/* implicit */short) ((arr_7 [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)46722)) : (0))))))) : ((((!(((/* implicit */_Bool) arr_0 [i_1 + 3] [i_0])))) ? ((((_Bool)0) ? (var_6) : (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) max(((unsigned short)46722), (((/* implicit */unsigned short) var_1)))))))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned short) (_Bool)1);
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)2])))) ? (((/* implicit */int) max((arr_3 [i_0] [i_3] [i_4]), ((_Bool)1)))) : (((/* implicit */int) arr_13 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)31362))))))) : (arr_0 [i_0] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_1 + 4] [(signed char)6] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) -48296631);
                                var_24 += max((((/* implicit */int) ((short) arr_9 [i_3] [i_3] [i_1 + 3] [i_4]))), (-969605944));
                                arr_15 [i_1] [i_1] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */int) arr_1 [i_1]);
                            }
                            for (signed char i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                            {
                                arr_18 [i_1] [i_1] = ((arr_11 [i_1] [i_1]) - (((((/* implicit */int) (unsigned short)46722)) - (((/* implicit */int) (_Bool)1)))));
                                var_25 = ((/* implicit */unsigned short) ((short) 1524618657));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1 - 1])) ? (((((/* implicit */_Bool) arr_13 [i_1 + 3])) ? (((/* implicit */int) (signed char)24)) : (var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 + 4])))))));
                                var_27 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) -968587956)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])) : (2147483647))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_16)), (min((min((var_3), (((/* implicit */unsigned long long int) (unsigned char)167)))), (((/* implicit */unsigned long long int) (short)63))))));
    var_29 += ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_22 [i_6] = ((/* implicit */short) (unsigned short)9845);
        arr_23 [11] = ((/* implicit */unsigned char) (+(arr_20 [i_6])));
        var_30 = ((/* implicit */unsigned char) (~(((unsigned long long int) var_16))));
    }
}
