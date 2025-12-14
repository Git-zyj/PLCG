/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204407
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
    var_17 |= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) (+(var_12)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33570)) ? (((/* implicit */long long int) 4208111353U)) : (1981223948455050038LL)))))))) | (arr_5 [i_0] [i_0] [i_0])));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */int) (!(((arr_2 [i_0]) || (arr_2 [i_0])))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) | (arr_5 [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((16122539677286042974ULL), (((/* implicit */unsigned long long int) 4208111353U)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 86855942U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_0]))))) == ((+(arr_5 [i_1] [i_0] [i_0]))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16122539677286042973ULL)) ? (((/* implicit */int) (unsigned short)23592)) : (((/* implicit */int) (_Bool)1))))))), (((((arr_2 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (4052660016926942127ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3 - 2])) % (((/* implicit */int) (_Bool)1))));
            arr_13 [i_2 + 1] [i_2] [i_3 - 2] = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))))), (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 - 1]))) : (var_10))))));
            var_22 = ((/* implicit */unsigned short) min((2324204396423508663ULL), (((/* implicit */unsigned long long int) -15))));
            var_23 = ((/* implicit */unsigned long long int) var_4);
        }
        var_24 = ((/* implicit */int) arr_11 [i_2 - 1]);
    }
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_5)), (var_12)));
}
