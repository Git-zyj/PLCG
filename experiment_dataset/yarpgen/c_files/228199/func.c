/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228199
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_17)), (var_7)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) var_0)), (11401003639551210176ULL)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = min((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_3)) : (7045740434158341440ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_1 - 1]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_4]) && (((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2329593849U))))));
                            var_19 = ((/* implicit */long long int) min((((arr_7 [i_1 - 1]) * (((/* implicit */unsigned long long int) 281337537757184LL)))), (arr_8 [i_0] [i_2] [i_4])));
                            var_20 = min((((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (((((/* implicit */_Bool) max((arr_10 [i_4] [i_3] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) 7U))))) ? (min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) -959888741221311747LL)))) : (((4934991859753598591ULL) * (((/* implicit */unsigned long long int) 1491462106U)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 1; i_5 < 23; i_5 += 2) 
        {
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 11401003639551210162ULL))))))), (((((/* implicit */_Bool) 13511752213955953025ULL)) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 7045740434158341439ULL)) || (((/* implicit */_Bool) 442922277218824269LL)))))))));
            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 11401003639551210174ULL)) ? (max((var_7), (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (11401003639551210176ULL))))) >> (((max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */int) (unsigned char)49)) * (((/* implicit */int) (unsigned char)227)))))) - (11078)))));
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            arr_21 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_18 [i_0])))))) : ((~(arr_18 [i_0])))));
            arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (1737616190U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))), (arr_7 [i_0])))) ? ((-(((/* implicit */int) (unsigned char)216)))) : (((/* implicit */int) ((max((-1111894200796908915LL), (7541943898521230881LL))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967289U)))))))))));
            var_22 ^= ((/* implicit */long long int) (-(arr_18 [i_0])));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 722247107)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (_Bool)1))));
            arr_23 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (var_5)));
        }
    }
}
