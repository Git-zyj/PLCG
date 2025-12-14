/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32410
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_6))))));
    var_20 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 6234461191335713389LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (var_7))) : (((/* implicit */long long int) (-(var_15))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (((/* implicit */long long int) (unsigned short)12235))))), (min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)38142))))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 10542782981395807083ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58066))) : (13965758412890571574ULL)));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_5);
            arr_5 [20LL] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) << (((var_15) + (430127004)))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) min(((-(arr_3 [i_1]))), (((/* implicit */long long int) ((int) 15006319249845555815ULL)))));
        }
        var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) (~(((/* implicit */int) var_6))))));
        arr_7 [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_3)))));
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1264452712)));
    }
    for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) max((1478114899U), (((/* implicit */unsigned int) 23))))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_5))))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
        arr_11 [i_2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_10)) / (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1]))))))));
        var_25 += ((/* implicit */unsigned long long int) min((max(((-(var_7))), (((/* implicit */long long int) arr_9 [i_2 + 1])))), (var_0)));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)19)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4313)) ? (((/* implicit */int) var_6)) : (var_15))))));
    }
}
