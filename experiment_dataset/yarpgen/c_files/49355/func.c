/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49355
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) (-(var_9)))) * (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])), (8563306440799980264ULL))))));
                    var_13 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [5U] [i_2] [i_0]))))) >> (((((((/* implicit */int) (short)-32016)) / (((/* implicit */int) (short)511)))) + (80)))))), ((~(-5288495802091503103LL)))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((8563306440799980264ULL), (((/* implicit */unsigned long long int) (short)20167)))))));
                    arr_7 [i_0] [i_1] [(unsigned char)16] [i_2] = ((/* implicit */unsigned int) (~(max((4721976882156425697ULL), (((/* implicit */unsigned long long int) -1724656667844881251LL))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (((((/* implicit */_Bool) 34084860461056LL)) ? (950159916609744412LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5962457847775857563ULL))));
    var_17 = ((((/* implicit */_Bool) 34084860461063LL)) ? (((((/* implicit */_Bool) (unsigned short)54946)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (_Bool)0))))) : (5116130849573695183LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (1564484708) : (((/* implicit */int) (unsigned short)511))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) -1329365301)) ? (((/* implicit */long long int) var_2)) : (var_3))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)255)))))))) % ((~(((/* implicit */int) ((unsigned char) var_2)))))));
}
