/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234962
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) (-((~((-(((/* implicit */int) arr_5 [(signed char)7]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] |= ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2898784670U));
                            var_13 = (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (arr_10 [i_2] [i_1] [i_1] [i_2] [i_3] [i_3])))) : (var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_15 [i_4] [i_4]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_4] [i_5 + 1] [i_8] [i_8] [i_8] [i_5 - 2] = ((/* implicit */long long int) (~((~(212700951712033953ULL)))));
                                arr_29 [i_8] = ((/* implicit */unsigned int) var_5);
                                var_14 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_23 [i_4] [i_5 - 1] [i_6 + 1] [i_7] [i_8]))))) ? (((/* implicit */unsigned long long int) (+(8930558239801135439LL)))) : (((((/* implicit */_Bool) 1851828673U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [5ULL] [5ULL]))) : (arr_20 [i_4] [i_5] [i_4])))))));
                                arr_30 [i_8] [i_8] [i_6] [i_8] [i_4] = ((/* implicit */unsigned int) (+(min((var_10), (((/* implicit */unsigned long long int) var_6))))));
                            }
                        } 
                    } 
                    arr_31 [i_4] [i_4] [i_6 - 2] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [(signed char)5] [i_5] [i_6]))));
                    var_15 = ((/* implicit */unsigned char) min((min((var_8), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) 2443138598U))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) var_5);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (signed char)65);
        arr_36 [i_9] [i_9] = ((/* implicit */_Bool) min((arr_22 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
        arr_37 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) : (3214496631U)));
        var_18 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (9883722303410730087ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(-1LL))), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_6)) ? (arr_33 [i_10]) : (((/* implicit */unsigned long long int) arr_10 [(short)8] [i_10] [i_10] [i_10] [i_10] [(short)8])))) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) var_4))));
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    arr_47 [i_12] [2U] [i_12] &= (-(((((/* implicit */_Bool) (+(3631385475U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [12U] [(signed char)3] [i_12] [i_11] [(short)2])) ? (arr_7 [17U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11])))))) : (var_5))));
                    var_21 = ((/* implicit */signed char) var_10);
                    arr_48 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)187)))), (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)101)), (var_9))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(1074146261019945482ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        for (short i_15 = 3; i_15 < 9; i_15 += 2) 
                        {
                            {
                                arr_53 [i_11] [i_11] = ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (8LL));
                                arr_54 [(signed char)7] [i_11] [1ULL] = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) 4041339508503141516LL)))) ? (((((/* implicit */_Bool) arr_52 [i_14] [i_14] [(short)3] [i_14] [(signed char)8])) ? (7ULL) : (((/* implicit */unsigned long long int) arr_41 [i_11] [i_12])))) : (((((/* implicit */_Bool) arr_27 [i_15] [8ULL] [i_13] [i_12] [i_11])) ? (((/* implicit */unsigned long long int) 84842425U)) : (var_0)))))));
                                var_22 = ((/* implicit */unsigned long long int) (signed char)-16);
                                arr_55 [i_11] [i_11] = ((/* implicit */unsigned short) min((max((-2604492608478280273LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_21 [i_11] [8LL] [i_13]))))))), (arr_27 [i_11] [i_12] [i_13] [i_12] [i_15 - 3])));
                                var_23 = min(((~(min((var_4), (((/* implicit */unsigned int) arr_49 [i_11] [7ULL] [i_13] [i_13] [i_15 - 1] [0LL])))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 4540361504295957687ULL))))))));
                            }
                        } 
                    } 
                    var_24 |= max((((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) arr_24 [i_11] [i_12] [i_12] [11U] [i_13])), (3883396873040758063ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_44 [i_11] [i_13])), (var_5)))))), (max(((~(var_8))), (((/* implicit */unsigned long long int) (~(-9LL)))))));
                }
            } 
        } 
        arr_56 [i_11] = ((/* implicit */long long int) 6677792475692927994ULL);
    }
}
