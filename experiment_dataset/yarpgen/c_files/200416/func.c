/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200416
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((79035390461733510LL) ^ (var_8))))))) + (((/* implicit */int) (_Bool)1))));
    var_11 |= ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-(var_4))))) : (((var_6) ? ((-(1454188646981034490ULL))) : (((((/* implicit */_Bool) -79035390461733491LL)) ? (16760125066280167510ULL) : (13414169628724121258ULL))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)0);
        var_12 *= var_7;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_8))));
        var_14 = ((/* implicit */_Bool) var_2);
        var_15 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_0 [(unsigned short)13])), (((((/* implicit */_Bool) -5750298305334385796LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [1U] [i_1]))) : ((-(79035390461733491LL)))))));
        var_16 |= ((/* implicit */unsigned long long int) 7280313845069093949LL);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((signed char) -79035390461733492LL)))));
    }
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) (~(((unsigned int) arr_7 [i_2 + 2]))));
        arr_8 [i_2] = var_4;
        var_19 = ((/* implicit */unsigned long long int) min((79035390461733491LL), (((/* implicit */long long int) arr_6 [i_2 + 1]))));
        arr_9 [i_2] |= ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_2 + 4])), (var_9))))));
        var_20 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((_Bool) (signed char)-124)))))));
    }
    var_21 -= ((/* implicit */int) var_9);
    var_22 |= ((/* implicit */unsigned long long int) var_6);
}
