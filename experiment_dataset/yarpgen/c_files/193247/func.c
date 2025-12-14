/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193247
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16347)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-67))))) ? ((-(((unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min((var_6), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [(_Bool)0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6522068854806636356LL)) ? (3339265631U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_1)))))) : (((/* implicit */int) ((short) min((((/* implicit */short) var_2)), (arr_10 [i_3] [i_2] [i_1] [i_0])))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [2ULL] [i_3])))) : (((((/* implicit */_Bool) -3091323715710459761LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (3357997466U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 7987875447481536841LL)))))) : ((((!(((/* implicit */_Bool) var_8)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) : (var_4))) : (((unsigned int) (_Bool)1)))))))));
                    }
                } 
            } 
            var_16 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_1 [i_0] [i_0])))))));
            var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)6747)), (32273381U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((long long int) -3972217947943422079LL))))));
            arr_12 [i_1] [i_0] = ((/* implicit */short) max(((~((-(3897081166U))))), (((/* implicit */unsigned int) ((unsigned short) ((_Bool) arr_8 [i_0] [i_1] [i_1]))))));
        }
        arr_13 [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 936969835U)))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((~(((int) var_2)))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */long long int) ((_Bool) var_10)))))) ? (((/* implicit */unsigned int) (+((-(var_0)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(signed char)1] [i_0])), (arr_6 [i_0] [i_0] [i_0])))) ? (min((4235526691U), (((/* implicit */unsigned int) arr_9 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0])), ((unsigned short)14857)))))))));
        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13072))) : (3339265631U)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) var_1)))) : (((var_10) ? (var_3) : (1883132384))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (var_3)))))));
    }
}
