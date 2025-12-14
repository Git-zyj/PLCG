/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54725
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) max(((short)-2702), ((short)2274)));
        arr_2 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) min((max((6904075879414813460LL), (((/* implicit */long long int) (unsigned short)42367)))), (((/* implicit */long long int) ((var_2) == (((/* implicit */long long int) 1751670722U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (arr_1 [7U])))) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (arr_1 [i_0 + 1]))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_12 ^= ((/* implicit */signed char) var_3);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7190939906858886881LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17077))) : (var_4)))) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) arr_3 [i_1]))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1410732591)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (min((var_9), (var_8))) : (((/* implicit */unsigned long long int) ((arr_4 [i_1]) ? (arr_3 [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34884)))))))), (var_5)))));
        arr_6 [i_1] = ((/* implicit */signed char) (unsigned char)252);
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_3 [i_1]))));
    }
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2558062175U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4514601670565752311LL)))) : (var_9))), (var_5)));
    var_16 = ((/* implicit */unsigned int) (-((+(max((var_2), (var_4)))))));
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned int) (_Bool)1)), (871365492U)))))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))) : (((((/* implicit */long long int) 2543296561U)) % (var_2)))))));
}
