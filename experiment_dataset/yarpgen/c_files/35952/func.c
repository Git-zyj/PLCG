/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35952
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_1 [(unsigned char)2])))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10177))) : (2322691867U)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (1972275428U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))), (((/* implicit */unsigned int) (_Bool)0))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1]))))) + (((arr_3 [i_1]) ? (2322691853U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))));
        var_20 = ((/* implicit */int) ((((/* implicit */int) min((max(((short)32767), (((/* implicit */short) (signed char)-116)))), (arr_4 [9] [i_1])))) < (((((/* implicit */int) arr_4 [i_1] [2U])) / (((/* implicit */int) arr_4 [i_1] [i_1]))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_6)), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)147)) ? (2322691867U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
    var_22 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) ((1972275431U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_12))))))) : (((unsigned long long int) ((((/* implicit */int) var_16)) + (((/* implicit */int) (short)12937)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(arr_17 [i_2] [i_4]))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4] [i_3])))))))) ? (min((((/* implicit */long long int) arr_13 [i_5] [i_3 - 3] [i_3])), (8355728331196769986LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2])) + (max((((/* implicit */int) (unsigned char)75)), (arr_6 [(short)8] [i_4])))))))))));
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 3] [i_5 + 1]))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_15 [i_2] [i_3 + 3] [i_5 - 1] [i_5 - 1]), (((/* implicit */short) (unsigned char)81))))) % ((+(((/* implicit */int) arr_15 [i_3 + 2] [i_3 + 2] [i_5 - 1] [i_5 - 1]))))));
                            var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -868721264862391660LL)) ? (max((-868721264862391660LL), (((/* implicit */long long int) arr_13 [i_4] [i_3] [i_2])))) : (((/* implicit */long long int) max((1972275430U), (((/* implicit */unsigned int) arr_7 [i_4])))))))));
                            arr_18 [i_2] [i_2] [i_3] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (unsigned char)181);
                        }
                    } 
                } 
                arr_19 [i_2] [i_3] = ((/* implicit */short) (unsigned char)207);
            }
        } 
    } 
}
