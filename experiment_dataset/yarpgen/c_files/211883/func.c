/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211883
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
    var_14 = ((/* implicit */unsigned int) var_7);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((13853783358135044158ULL) >= (13853783358135044169ULL))))) == (((((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (var_13))) << (((var_13) - (7728626554079997680LL)))))));
    var_16 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) (short)32767);
                        arr_13 [i_0] [13] [i_2] [13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_3 + 1]))) ? (min((arr_4 [i_3 + 1]), (arr_4 [i_3 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 + 2]))))))));
                        arr_14 [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) var_13)) ? (arr_10 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_3)))))));
                        var_18 = ((/* implicit */int) arr_5 [i_0] [i_3 + 1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_21 [i_0] [i_4] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4592960715574507446ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_16 [i_0 + 1] [i_0 + 1]), (arr_16 [i_0 - 3] [i_0 - 1])))) + (((/* implicit */int) max((arr_16 [i_0 + 1] [i_0 - 1]), (arr_16 [i_0 - 3] [i_0 - 2]))))));
                }
            } 
        } 
        arr_22 [i_0] = (+(((((arr_10 [i_0] [i_0] [14LL] [i_0 + 1] [i_0] [i_0 - 3]) < (var_10))) ? (arr_7 [i_0] [i_0] [4ULL]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))));
        arr_23 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [1U])) ? (13853783358135044173ULL) : (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (((((/* implicit */int) arr_18 [12])) >> (((((/* implicit */int) var_9)) - (23494))))) : (((/* implicit */int) arr_16 [i_0] [i_0 - 4])))))));
    }
    var_20 = ((/* implicit */short) var_11);
}
