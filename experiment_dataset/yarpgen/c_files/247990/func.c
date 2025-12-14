/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247990
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_1 + 2] [i_0] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) : (-6860813612852171483LL))) * (((/* implicit */long long int) max((((/* implicit */int) var_11)), (arr_6 [i_0] [i_1] [i_2] [15U]))))))) : (min(((-(arr_10 [i_2] [i_1 + 1] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (arr_6 [i_0] [i_1] [1U] [i_3]))))))));
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [17ULL] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_0])) ? (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_0]) : (arr_10 [i_0] [i_1 - 2] [i_1] [i_1 + 2] [i_0]))), (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]) : (((/* implicit */unsigned long long int) -6860813612852171466LL))))));
                        arr_13 [i_0] [i_0] = -6860813612852171466LL;
                        arr_14 [i_0] [11ULL] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6860813612852171474LL)) ? (-6860813612852171466LL) : (var_5)))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 - 2] [17U])))))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) -6860813612852171449LL)) : (arr_10 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1] [i_0])))));
                    }
                } 
            } 
        }
        var_12 = ((/* implicit */unsigned int) min((min((arr_9 [i_0]), (((/* implicit */unsigned long long int) var_7)))), (max((((/* implicit */unsigned long long int) arr_0 [5U])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (5651127841746241123ULL)))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_25 [i_6] [i_6] [i_0] [i_4 - 1] [(short)1] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (172578178U))))) : (var_0)))));
                        var_13 = ((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_5 + 1] [i_6]);
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */int) (((~(arr_2 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 172578178U)) || (((/* implicit */_Bool) 4122389120U))))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)4051))))) : (((/* implicit */int) (_Bool)1))));
}
