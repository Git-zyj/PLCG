/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201680
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
    var_20 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) == (min((((/* implicit */long long int) (~(var_4)))), (min((((/* implicit */long long int) var_13)), (var_10)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [(signed char)3] [i_1] [i_0]))))) * (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-32763))))) : (((unsigned long long int) arr_6 [i_2] [i_1]))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)27885)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_0 [i_0] [i_0])))))) : (var_14))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) arr_7 [i_2] [(short)2] [i_1])))))))));
                    arr_8 [i_1] [i_2] [(_Bool)0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_1] [i_1])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_17)) ^ (var_14)))))));
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_2] [i_2]), (((/* implicit */short) (signed char)31)))))) % (-3036115858673003270LL)));
                }
            } 
        } 
        var_23 -= ((/* implicit */short) max(((signed char)-126), (((/* implicit */signed char) (_Bool)1))));
        var_24 = ((/* implicit */long long int) ((short) 13813228068387932860ULL));
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) > (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_11 [i_0] = ((/* implicit */short) ((1607822442U) | (4294967269U)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) arr_2 [i_3] [i_3]);
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_18 [i_3] [(short)1] [i_3] |= ((/* implicit */_Bool) arr_2 [i_3] [i_4]);
            var_25 = ((/* implicit */signed char) max((arr_17 [i_3]), (arr_13 [i_3] [i_3])));
            var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 30U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : ((((_Bool)1) ? ((+(34084860461056ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (short)28142)) : (((/* implicit */int) (signed char)-47)))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_22 [i_3] = ((/* implicit */short) (~(var_9)));
            arr_23 [i_3] = arr_21 [i_5] [(signed char)4] [i_5];
            var_27 |= arr_0 [i_5] [i_5];
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            arr_26 [i_3] = ((unsigned int) var_8);
            var_28 = ((/* implicit */_Bool) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18306525229132758327ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2224754912U), (((/* implicit */unsigned int) arr_25 [12U] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_6]))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_6])) ? (27U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
        }
        var_29 -= ((/* implicit */signed char) min(((-((~(arr_19 [i_3] [i_3]))))), (((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_12))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) * (var_7)))))));
        var_30 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) 2970049119U)) ? (34084860461076ULL) : (var_3))))), (max(((((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) max((var_12), (var_6))))))));
    }
    var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1677520053U)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)6))))))) : (((unsigned long long int) var_14)))) + (min((min((var_14), (((/* implicit */unsigned long long int) (short)-20760)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_9)))))));
}
