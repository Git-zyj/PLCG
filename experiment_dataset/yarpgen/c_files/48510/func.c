/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48510
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
    var_18 += ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_7 [i_2])));
                    var_20 = ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)-64)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (8413051295856809424LL) : (8601845646112972749LL)))))))) : (var_5)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((short) arr_10 [i_3 - 1])))));
        var_23 = arr_9 [i_3];
        var_24 |= ((/* implicit */short) ((unsigned long long int) arr_11 [i_3 - 2] [i_3 + 1]));
    }
    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) arr_14 [i_4 - 1]))) : (arr_10 [i_4 - 1])));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (~(arr_13 [i_4]))))));
    }
    for (long long int i_5 = 2; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_27 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (8413051295856809443LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 - 2])))))), (var_5)));
        var_28 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (unsigned short)10575)) : (((/* implicit */int) ((short) arr_10 [i_5]))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_17 [(signed char)14] |= ((/* implicit */int) ((_Bool) (~(arr_16 [i_5 - 1]))));
    }
    for (long long int i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (arr_13 [i_6])));
        var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) -1119957232)) ? (5183972833297006414LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22954)))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_24 [14ULL] [14ULL] [(_Bool)1] [14ULL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8 - 1])) ? (arr_16 [i_8 - 1]) : (arr_16 [i_8 - 1])))) ? (arr_16 [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_8 - 1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)94)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -470613446)) ? (((/* implicit */int) (short)23224)) : (((/* implicit */int) arr_22 [i_9] [i_7] [i_9])))))));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((((/* implicit */_Bool) var_4)) ? (arr_18 [i_9 - 1]) : (arr_18 [i_9 - 1])))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))));
                            var_35 ^= ((unsigned long long int) arr_19 [i_6] [i_6 - 2]);
                            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) (short)14429)) <= (arr_9 [i_8])))) : (((/* implicit */int) ((_Bool) (unsigned short)15669)))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                        {
                            var_37 &= ((/* implicit */signed char) ((((unsigned long long int) (signed char)-55)) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_13)))) + (99)))));
                            var_38 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_6 - 1]))));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_15))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((short) arr_32 [i_7] [i_8 - 1] [i_8 - 1] [i_11])))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22196))) : (var_1)))) ? (((unsigned int) (short)23239)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [14] [14] [14] [i_8 - 1] [i_8] [i_8 - 1]))))))));
                            var_42 -= ((/* implicit */unsigned long long int) (signed char)-102);
                        }
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (signed char)79))))))));
                    }
                    for (int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
                    {
                        var_44 += ((/* implicit */unsigned int) ((signed char) var_0));
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_20 [i_6] [i_6] [i_6]), (arr_20 [i_6] [i_6] [(_Bool)1])))))))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2020968399560623391LL)) ? (((/* implicit */int) (_Bool)1)) : (arr_11 [i_7] [i_6])))) - (((((/* implicit */_Bool) (signed char)58)) ? (0LL) : (((/* implicit */long long int) arr_36 [i_6] [i_6] [i_6] [(short)12] [i_6] [(unsigned short)10]))))))) ? (((((/* implicit */_Bool) arr_13 [i_6 - 1])) ? (((/* implicit */unsigned long long int) arr_14 [i_6 - 1])) : (arr_13 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13220))))))));
                    }
                    for (int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) arr_28 [i_6] [(signed char)6] [i_6] [i_6 - 1] [i_8] [i_8])), (arr_26 [i_6] [i_6] [(signed char)14] [i_6 - 2])))))));
                        arr_40 [(unsigned short)4] [i_14] [8U] [(unsigned short)4] [i_14] [i_14] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned int) arr_30 [i_7] [(_Bool)1]))))) >= (((((/* implicit */_Bool) arr_35 [3] [i_6 - 1] [i_6 - 1] [i_8 - 1])) ? (((/* implicit */long long int) arr_26 [i_8 - 1] [i_6 - 2] [i_6] [i_6])) : (arr_27 [i_6 + 1] [13U] [9ULL] [(_Bool)1])))));
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) arr_14 [1ULL]))));
                    }
                    var_49 *= ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_30 [i_6 + 1] [i_6 - 2])))));
                }
            } 
        } 
        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((signed char) (short)1472)))));
    }
}
