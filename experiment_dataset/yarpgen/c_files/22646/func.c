/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22646
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
    var_14 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (5536505707440412308LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_7 [i_0] [i_0 - 2] [i_0 + 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (5536505707440412304LL)))) ? (((((/* implicit */_Bool) var_0)) ? (-5536505707440412304LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))), (-5536505707440412308LL)));
                    arr_8 [i_2 + 1] [i_0] [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_7)) ? (arr_0 [i_2] [i_0]) : (var_8))), (((/* implicit */unsigned long long int) var_7))))));
                    arr_9 [i_0] = ((/* implicit */long long int) min((arr_2 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4328807740380049713ULL)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) arr_4 [i_2])))) + (((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_3 + 2] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */unsigned long long int) 5536505707440412301LL)) - (var_8))));
                        arr_13 [i_0] [i_3] [i_0] [i_0 + 1] [i_3] = ((/* implicit */long long int) arr_2 [i_3] [i_3]);
                        arr_14 [i_2] [i_3] = ((/* implicit */signed char) ((5536505707440412310LL) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (signed char)-9))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((long long int) 16777215ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)-105))))) : (var_6)))));
                        arr_18 [i_1] [i_4] [i_1] = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (max((var_1), (((/* implicit */long long int) var_4))))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (arr_3 [i_0]))))));
                    }
                }
                arr_19 [i_0] [i_0 - 2] [i_0] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) ((signed char) var_10))), ((~(var_3)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)77)), (5536505707440412322LL)));
    /* LoopSeq 2 */
    for (signed char i_5 = 1; i_5 < 8; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] [i_5] = (-((+(((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5]))))))));
        arr_24 [i_5] = ((((long long int) arr_0 [i_5] [i_5])) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_0))))))));
        arr_25 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned long long int) 2487513084280994627LL)) : (min((((/* implicit */unsigned long long int) -8066946394781948334LL)), (((unsigned long long int) var_6))))));
        arr_26 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (-(10707390696995088547ULL)))))));
        arr_27 [i_5] = min((arr_22 [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_5 - 1]))))) ? (((/* implicit */int) min((var_13), ((signed char)100)))) : (((/* implicit */int) var_11))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 8; i_6 += 3) /* same iter space */
    {
        arr_30 [8LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) arr_5 [i_6])))))));
        arr_31 [i_6] [i_6] = ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) 8196491527666335548LL)) : (7739353376714463069ULL))) : (((/* implicit */unsigned long long int) (-(-5536505707440412322LL)))));
    }
    var_16 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) (signed char)-18))))), (max((7739353376714463069ULL), (((/* implicit */unsigned long long int) var_7)))))) - (((unsigned long long int) ((((/* implicit */_Bool) (signed char)9)) ? (-2241819875672595905LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-111))))))));
}
