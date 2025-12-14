/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41133
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (var_8)))) && (((/* implicit */_Bool) var_0))));
    var_15 = ((/* implicit */long long int) ((min((((((/* implicit */long long int) var_5)) - (2238129414305223107LL))), (((/* implicit */long long int) (!(var_10)))))) != (((/* implicit */long long int) max((min((1497437425U), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_8))))))))));
    var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) (+((((((+(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_5))) - (115U)))))));
        var_18 = ((/* implicit */_Bool) ((signed char) (-((+(((/* implicit */int) var_2)))))));
        var_19 = ((((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (signed char)-16)))), (((/* implicit */int) arr_0 [i_0]))))) <= (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_13))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)239))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)112)) || (((/* implicit */_Bool) (short)112)))) || (((/* implicit */_Bool) max((var_7), (min((((/* implicit */short) arr_0 [i_0])), ((short)112))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_10))))))));
        var_22 = ((/* implicit */_Bool) min(((~(arr_3 [i_1]))), (max((((/* implicit */unsigned long long int) var_6)), (4366881544818657935ULL)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2])))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_8)))))));
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)123)) || (((/* implicit */_Bool) arr_4 [i_2] [i_2])))) && (((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) var_1)))))) && ((((_Bool)1) || ((_Bool)1)))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_6)), (arr_5 [i_2] [i_2])))), (max((((/* implicit */unsigned long long int) var_8)), (15617572706185954043ULL)))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-((+(-1075938028)))));
            arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_12 [i_2]);
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_23 = ((unsigned long long int) (~(((/* implicit */int) arr_6 [i_4]))));
            arr_19 [i_2] [i_4] [i_2] = ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) - (((var_13) - (((/* implicit */unsigned int) var_3)))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_0)))))));
            var_24 = ((/* implicit */unsigned int) (((+((-(((/* implicit */int) arr_12 [i_4])))))) >= (((/* implicit */int) var_2))));
        }
    }
    var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_5)))))))));
}
