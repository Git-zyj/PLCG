/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204355
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) (_Bool)1)), (var_9))) : (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_6))))))) < (((((/* implicit */_Bool) max((1307719523U), (var_3)))) ? (((((/* implicit */_Bool) (unsigned short)16380)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) max((((((/* implicit */_Bool) (unsigned short)49171)) ? (var_15) : (1307719523U))), (min((var_11), (((/* implicit */unsigned int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [(_Bool)1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 25U)) * (14808051877285044832ULL))), (((/* implicit */unsigned long long int) 2439144264U))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)113))));
        var_21 = arr_0 [9U];
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 1307719533U))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_3 [i_1])))) == (((/* implicit */int) ((14U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [(unsigned short)2]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((((arr_1 [i_2]) % (arr_1 [i_2]))), ((~(arr_1 [i_2])))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            var_25 *= ((/* implicit */_Bool) arr_4 [8] [i_2]);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)67)) << (((/* implicit */int) (_Bool)1))))), (min((1307719526U), (arr_8 [i_2] [(_Bool)1] [i_4]))))));
                var_27 -= ((/* implicit */int) var_18);
                arr_12 [i_2] [15U] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_3 + 1]) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 + 1]))) : (((unsigned int) arr_1 [i_3 - 1]))));
                arr_13 [16U] [i_4] |= ((/* implicit */unsigned char) (((-(max((((/* implicit */unsigned long long int) var_9)), (var_12))))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_17) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (-1280129099))))));
                var_28 -= min(((-(((((/* implicit */_Bool) 25U)) ? (1855823013U) : (var_11))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [12])), (524032))))))));
            }
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_29 *= ((_Bool) min((arr_6 [i_7] [i_3 - 1]), (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) % (((/* implicit */int) min((((((/* implicit */_Bool) 614589466U)) || ((_Bool)0))), ((!(var_14)))))))))));
                        }
                    } 
                } 
                arr_22 [i_2] = min(((((!(((/* implicit */_Bool) 1125899906842496ULL)))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) (unsigned short)16379)) : (((/* implicit */int) arr_9 [i_5]))))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (var_8) : (5U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 614589457U)) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_5])) : (((/* implicit */int) arr_6 [i_2] [i_5]))))) || (((/* implicit */_Bool) min((arr_8 [i_5] [(signed char)10] [(signed char)10]), (((/* implicit */unsigned int) arr_17 [i_2] [i_3] [i_5] [i_5])))))))));
            }
            var_31 = ((/* implicit */int) ((3638692196424506796ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-2)), (162562815U)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))) & (var_17))))))))));
        }
    }
}
