/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21700
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
    var_15 = ((/* implicit */long long int) (signed char)-119);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (((-(arr_0 [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61655)))));
        arr_4 [2ULL] [2ULL] &= ((/* implicit */long long int) ((((int) arr_1 [i_0])) << (((min((((/* implicit */unsigned int) 1319197715)), (arr_2 [i_0]))) - (1319197711U)))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1])) - (((/* implicit */int) max(((short)24031), (((/* implicit */short) var_14)))))))));
        var_17 = ((/* implicit */unsigned int) ((((((_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)33151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_9))))))));
        var_18 = ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]);
    }
    for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
    {
        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_5 [i_2 - 2] [i_2 - 3])))) ? (574182635771558326ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 3] [i_2 + 1])))));
        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) var_4))))) : ((-(arr_7 [i_2] [i_2])))))) || (((/* implicit */_Bool) var_14))));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_8 [i_3] [i_3])))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)85)), ((short)-26300))))));
        /* LoopSeq 4 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1706987407U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))))));
            var_22 += ((/* implicit */short) (unsigned char)85);
        }
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_23 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) ((unsigned short) 2050925741))), (1951113448U)))));
            arr_21 [i_3] = var_6;
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_24 = ((/* implicit */signed char) (_Bool)1);
            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_23 [i_3] [i_6])) : (((/* implicit */int) arr_23 [i_3] [i_3])))) | (((/* implicit */int) arr_10 [i_3] [i_6 + 1]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_3] [i_3] = ((/* implicit */short) 9U);
            var_26 += ((/* implicit */unsigned long long int) var_14);
            var_27 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_14)), ((+(arr_7 [i_7] [i_3])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    var_28 = ((_Bool) arr_30 [i_3] [i_8 - 1] [i_8 - 1]);
                    arr_33 [(_Bool)1] [i_8 - 1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_0))));
                    arr_34 [i_3] [i_8] [i_7] [i_3] = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                    {
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
                        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)34))));
                        var_30 = ((/* implicit */_Bool) (unsigned char)85);
                        arr_38 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 1])) + (((/* implicit */int) arr_12 [i_9 - 3]))));
                    }
                    for (int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                    {
                        arr_42 [i_3] [i_11] = ((/* implicit */unsigned long long int) (unsigned short)38032);
                        var_31 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                    }
                    var_32 = ((/* implicit */signed char) ((-1) >= (((((/* implicit */_Bool) var_13)) ? (arr_25 [i_3]) : (((/* implicit */int) var_12))))));
                }
                arr_43 [i_7] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_33 = (-(arr_44 [i_12 - 1] [i_3] [i_12 - 1] [i_12 - 1]));
                var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_12 - 1]))));
            }
        }
        arr_48 [(_Bool)1] &= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)7209))))));
    }
}
