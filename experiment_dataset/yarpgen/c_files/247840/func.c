/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247840
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) << ((((+(((/* implicit */int) var_3)))) - (193)))))) ? ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) -688951647)) : (34359738367LL))))) : (((/* implicit */long long int) (+(var_13))))));
    var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max(((unsigned char)9), ((unsigned char)255)))), (((unsigned long long int) (unsigned char)247)))) << (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (-406906960861084611LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) var_15)))))))) / (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 406906960861084606LL)) || (((/* implicit */_Bool) 406906960861084617LL))))) + (((int) var_12)))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_4 [i_0]))));
                            var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) -34359738346LL)) ? (arr_11 [i_1 - 1] [i_1 - 2] [i_1]) : (arr_11 [i_1 - 1] [i_1 + 1] [i_1])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_21 = ((/* implicit */_Bool) 406906960861084606LL);
            arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
        arr_18 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483637) >> (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) -406906960861084606LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (-406906960861084607LL) : (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])))))))));
    }
}
