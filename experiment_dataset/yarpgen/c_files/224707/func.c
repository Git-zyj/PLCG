/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224707
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
    var_16 -= ((/* implicit */unsigned short) (((+(max((var_7), (var_11))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_15)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned short) ((_Bool) max((1984183332493272976LL), (((/* implicit */long long int) (unsigned short)47220)))));
        var_18 |= ((/* implicit */unsigned short) min((((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_15))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)39363)))) / (((/* implicit */int) ((((/* implicit */_Bool) (+(var_11)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (var_13)))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64512))) % (5901425568684084087LL)));
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((var_7) - (2280704628465006081LL)))))) : (((((/* implicit */_Bool) -2849621004579308923LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)15] [(_Bool)1]))))))), (max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (var_15)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((long long int) max((var_4), (((/* implicit */long long int) min((arr_9 [i_1]), (arr_2 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_8))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_19 [i_1] [i_4] [i_3] [i_4] [i_4] [4LL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_3] [i_4] [(_Bool)1] [i_4] [i_4])), (var_11)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_2] [i_2])), (arr_14 [i_1] [i_2] [i_5] [i_4])))))) ? (min((((2849621004579308922LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) arr_9 [i_4 + 2])))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_12))))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((unsigned short) arr_12 [i_2 + 2] [i_2] [i_1]))) ? (max((((/* implicit */long long int) arr_12 [i_2 + 1] [i_2 + 1] [i_2])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_2])) == (((/* implicit */int) arr_12 [i_2 - 1] [1LL] [i_1]))))))))));
                            var_23 = ((/* implicit */long long int) min((((var_9) > (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((max((var_9), (((/* implicit */long long int) arr_7 [i_3] [i_5])))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_20 [i_1] [i_1] = max((((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))) + (var_3))), (((/* implicit */long long int) ((arr_11 [i_1] [i_1]) ? (((/* implicit */int) arr_11 [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_1]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) 2849621004579308923LL)))));
        var_25 ^= ((_Bool) (!(max((var_2), (var_6)))));
        var_26 = (!(((max((var_7), (var_14))) <= (max((1353604439224508451LL), (((/* implicit */long long int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_2))))) != (((/* implicit */int) arr_22 [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64512)) ? (((/* implicit */int) (unsigned short)6746)) : (((/* implicit */int) (unsigned short)54369))))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((long long int) var_11))))));
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [(unsigned short)4] [i_7] [i_9])), (var_14)))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_6] [i_9] [i_6] [i_8 - 1] [i_9]))))))));
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_29 [i_8] [i_9] [i_8 - 1] [(_Bool)0]), (arr_29 [i_8] [i_9] [i_8 + 1] [0LL]))))) % ((-(-5223612821887264088LL)))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (arr_13 [i_6] [i_7] [i_8] [i_9])));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((((/* implicit */int) (unsigned short)2032)) != (((/* implicit */int) arr_17 [0LL] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    arr_35 [i_11] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) min((min(((+(arr_25 [8LL] [i_11]))), ((-(var_7))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5223612821887264086LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((-(((/* implicit */int) (unsigned short)35652))))))) ? (max((min((-8837471804315583090LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_33 += ((/* implicit */unsigned short) ((long long int) ((arr_10 [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_13 - 1] [(_Bool)1]))) : ((+(var_7))))));
                                arr_40 [(_Bool)1] [(_Bool)1] [i_11] [i_10] [i_13] [i_12] [i_11] = ((/* implicit */unsigned short) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_6] [i_10] [i_11] [i_13] [i_13])) && (((/* implicit */_Bool) arr_39 [i_6] [i_10] [i_10] [i_13] [i_13 - 1]))))))));
                                arr_41 [i_6] [i_13] [i_11] [i_12] [(unsigned short)9] = ((((/* implicit */_Bool) ((long long int) ((long long int) var_2)))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */long long int) var_2)), (5223612821887264090LL))));
                            }
                        } 
                    } 
                    arr_42 [i_10] [i_11] = max((min((var_7), (max((((/* implicit */long long int) (_Bool)1)), (3313770054162716084LL))))), (var_11));
                    var_34 &= ((_Bool) 5223612821887264087LL);
                }
            } 
        } 
    }
}
