/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45286
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [4ULL] = ((/* implicit */unsigned short) 7240453507054838675ULL);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) < (var_4)))), ((-(var_9)))))) >= (7240453507054838675ULL)));
        var_16 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)36))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) var_0);
        arr_7 [7LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) << (((((((((/* implicit */_Bool) (~(0U)))) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) (signed char)0)))) + (77))) - (18)))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1]))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32743))) <= ((((_Bool)0) ? (11206290566654712940ULL) : (11206290566654712929ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_3 + 1]) : (((/* implicit */unsigned long long int) -1818758735))))));
                        arr_15 [i_1] [i_2] [i_2] = ((/* implicit */signed char) min(((-(7240453507054838675ULL))), (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        } 
    }
    var_19 = (-((~(min((var_14), (((/* implicit */unsigned long long int) (signed char)127)))))));
}
