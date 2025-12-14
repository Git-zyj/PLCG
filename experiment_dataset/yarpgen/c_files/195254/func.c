/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195254
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) <= (13358999816141392257ULL)))) % (((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) -7826397073818149840LL)))))))) ? ((~(var_4))) : (((((/* implicit */int) var_0)) ^ (((((/* implicit */_Bool) 5347546149885226574ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_12))))))))));
    var_15 = ((/* implicit */unsigned short) (+(var_7)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((arr_2 [i_0] [i_0]) || (((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5)))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)37388)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (+(-341340854)))) || (((/* implicit */_Bool) (short)30445)))))));
        var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
        var_18 = ((((((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_10)))) < (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8105634U))))) : (var_6));
        var_19 &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) var_9))))) > (((/* implicit */int) arr_2 [(_Bool)1] [i_0]))));
    }
    var_20 = ((/* implicit */long long int) max(((+(var_2))), (11264574221713194368ULL)));
}
