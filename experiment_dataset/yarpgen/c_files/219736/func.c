/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219736
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) (~(min((((/* implicit */int) ((unsigned short) (signed char)-3))), ((~(((/* implicit */int) arr_0 [i_0 + 2]))))))));
        arr_3 [i_0] = (_Bool)1;
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 262112)) ? (min((((/* implicit */long long int) -262112)), (4854284634830732259LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))), (((/* implicit */long long int) min((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? ((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 4]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 + 1])))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1]))))), (max((min((-4241013817057026363LL), (((/* implicit */long long int) (_Bool)1)))), (min((((/* implicit */long long int) var_9)), (3650929367393648175LL)))))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))), (min((((/* implicit */int) arr_5 [i_1])), (var_2)))));
        arr_11 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_4 [i_1 + 4]))))));
    }
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262112)) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_13 [i_2])))))))) ? (min((11LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) min((((/* implicit */int) ((signed char) (unsigned short)0))), (((arr_13 [(unsigned short)11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_2])))))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_14 [i_2 - 1] [(_Bool)1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 2; i_4 < 22; i_4 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) (-((-(-12LL)))));
                arr_22 [i_2] [i_2] [i_2] [i_2] = (_Bool)1;
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_25 [(signed char)6] [i_2] = ((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1]);
                var_14 -= ((((/* implicit */int) (!((_Bool)1)))) < (((/* implicit */int) (_Bool)0)));
                var_15 = ((/* implicit */unsigned short) min((((_Bool) min((arr_12 [i_2]), (((/* implicit */signed char) var_3))))), (((((/* implicit */int) max((var_0), (var_7)))) < (((/* implicit */int) (_Bool)1))))));
            }
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_28 [i_2] [i_6 - 1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_4))))), (8363479605793745283LL)));
            arr_29 [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((var_7) ? (((/* implicit */int) arr_15 [i_2] [i_6] [i_2])) : (((/* implicit */int) (signed char)0)))))) ? ((~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) ((_Bool) (unsigned short)5304)))));
            arr_30 [i_2] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_26 [i_2] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_17 [i_6])))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-1)))) ^ ((~(((/* implicit */int) (_Bool)1))))))) : (5LL)));
            arr_31 [i_2 + 1] [i_2] = ((signed char) (_Bool)1);
        }
        arr_32 [i_2] = ((/* implicit */_Bool) 4854284634830732259LL);
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_2 - 2]))) + (-4353577776500750563LL))))));
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_35 [i_7] = (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
        arr_36 [i_7] [i_7] = ((/* implicit */_Bool) (~((~(-7017363875291693622LL)))));
        arr_37 [i_7] = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) (unsigned short)27437))), ((-(((/* implicit */int) arr_34 [i_7]))))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (min((var_10), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)0)))))))));
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
    var_19 = ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_1)));
}
