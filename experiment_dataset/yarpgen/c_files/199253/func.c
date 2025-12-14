/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199253
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)0)))))))) ? (min(((-(((/* implicit */int) var_3)))), (max((-1122081655), (1073741824))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)9)), (3730289672102183999LL)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) /* same iter space */
                {
                    var_18 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)2)) ? (-7904491614152061771LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)23))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_2 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [(short)7]))))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), ((~(arr_0 [i_0] [i_0])))))) ? (((((/* implicit */int) max(((short)-1783), (var_6)))) & ((~(((/* implicit */int) var_3)))))) : (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (signed char)0)))) ^ ((~(((/* implicit */int) (signed char)-3))))))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((72057591890444288ULL) != (((/* implicit */unsigned long long int) 3))));
                    var_20 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3] [i_3 - 2])), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-15539))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), ((unsigned char)244)))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (~(((((((/* implicit */int) (signed char)-2)) != (((/* implicit */int) (signed char)26)))) ? (((((/* implicit */_Bool) arr_14 [i_0] [0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_13))) : (max((var_13), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_4] [i_4]))))))));
                            var_22 = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0])), (arr_3 [i_0])))) ? ((-(((/* implicit */int) (short)1783)))) : (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */int) arr_11 [i_0] [10ULL])))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)252))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (short)-15514)) + (((/* implicit */int) (signed char)0))))));
                arr_16 [i_1] [i_1] [8U] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) == (18374686481819107323ULL)));
            }
        } 
    } 
}
