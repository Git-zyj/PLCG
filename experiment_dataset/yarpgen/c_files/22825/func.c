/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22825
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
    var_17 |= ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) max((4262400064U), (32567231U))))))) ? (((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) | (((/* implicit */long long int) min((((/* implicit */int) var_8)), (1653866854)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (4262400066U)))) != (((var_1) | (-7251470220140431517LL))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)12071)), (var_14))), (((/* implicit */long long int) max((var_13), (1653866865))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)255))))) & (16596674666482371959ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)-19))) & (((/* implicit */int) (signed char)-64))))))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15LL)) ? (arr_4 [5] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 - 2])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((arr_4 [i_1 - 1] [i_1 - 3]) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-4)) + (56)))))));
                arr_5 [(short)4] &= ((/* implicit */int) var_11);
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((min((var_14), (28LL))), (((/* implicit */long long int) var_0))));
                            arr_10 [i_2 - 2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) arr_0 [i_2]);
                            arr_11 [i_0] [i_1 - 2] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_12), (((/* implicit */signed char) ((_Bool) var_3)))))), (max(((unsigned short)263), (((/* implicit */unsigned short) (signed char)117))))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (((-(arr_4 [i_0] [8]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)16] [i_1 - 3] [i_1 - 3] [i_1 - 3] [(unsigned short)16]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            arr_16 [i_5 + 1] [i_5] [18U] &= ((/* implicit */int) max((((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (signed char)63))))) | (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))))), (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_7)), (7145267961998816191ULL)))))));
            arr_17 [i_4] [i_5] = min((max((((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) : (-8131639923132447418LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_4] [i_4 + 1] [i_5])) & (((/* implicit */int) var_12))))))), (((/* implicit */long long int) var_13)));
            var_22 *= ((/* implicit */unsigned short) var_1);
        }
        var_23 *= ((/* implicit */unsigned long long int) (((~(((var_15) & (((/* implicit */unsigned long long int) var_1)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)87)))))))));
        var_24 |= ((/* implicit */unsigned char) -1653866858);
    }
    /* vectorizable */
    for (long long int i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        var_25 *= ((unsigned long long int) var_7);
        var_26 -= (((-(var_3))) >= (((unsigned long long int) arr_19 [i_6] [i_6])));
        arr_20 [i_6] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)37250))))) ? (arr_19 [i_6 + 1] [i_6 + 3]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)87)))))));
        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)157)))) : (arr_18 [i_6 - 2] [i_6])));
    }
}
