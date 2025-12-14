/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200635
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
    var_20 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)36645)) ? (((((/* implicit */int) (unsigned char)147)) << (((var_11) - (2020957627))))) : (((/* implicit */int) (unsigned short)28904)))) * (((/* implicit */int) (unsigned short)38382))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)120)), ((unsigned short)28900)))))) ? (((/* implicit */int) (unsigned short)28900)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57071)) < (((/* implicit */int) (unsigned short)27155)))))));
                var_21 *= ((_Bool) var_19);
            }
        } 
    } 
    var_22 = max((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 3689047536U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28894)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535)))))))), ((unsigned short)27153));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) -1481174249)) ? (11478489089815822362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) + (min((((unsigned long long int) 66060288)), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) (unsigned short)65535))))))))))));
}
