/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204900
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_7))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) ((0ULL) ^ (5701572901348791106ULL)));
        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((var_14), (((/* implicit */unsigned long long int) ((signed char) var_14))))) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (var_0) : (arr_5 [i_1 - 1] [i_1 + 1])));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) : (arr_5 [i_1] [i_1 + 1])));
        var_20 = ((/* implicit */unsigned int) var_1);
        var_21 = ((/* implicit */unsigned int) ((signed char) arr_4 [i_1 - 1] [i_1 - 1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) 0U));
            arr_14 [(short)17] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_3]) : (arr_8 [i_2])));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
        {
            arr_17 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 11836109866824486944ULL)) && ((_Bool)1)));
            var_23 = ((/* implicit */long long int) var_13);
            var_24 |= ((/* implicit */unsigned long long int) arr_12 [i_2]);
            var_25 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_2] [i_4]))));
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < ((~((~(var_4)))))));
        arr_22 [3] = ((/* implicit */long long int) var_11);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (int i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
                        {
                            arr_34 [i_5] [i_7] [i_6] [i_8] [i_9] [i_7] [i_5] = ((/* implicit */short) ((((var_14) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1] [i_7 + 1] [i_8]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)14068))))) ? (((unsigned long long int) arr_23 [i_6] [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)187))))))) : ((~(max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)62774), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_15))) || (((/* implicit */_Bool) max((arr_28 [i_8] [i_8]), (((/* implicit */int) arr_18 [i_9 - 3] [5ULL]))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) - (var_14)))));
                            arr_35 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6] [i_5])) << (((10793096538376435523ULL) - (10793096538376435506ULL)))))) ? (2251448021201372887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (var_13))))))) : (((/* implicit */int) var_11))));
                        }
                        var_28 += ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_9)))), ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14)))))));
}
