/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244687
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((539392221545883587LL) | (-539392221545883588LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (var_7)))))));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_4))));
        var_12 += (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)64)))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((min((3378749580U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (_Bool)0))))))) >> (((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) >> (((min((((/* implicit */unsigned int) (unsigned char)73)), (2832085592U))) - (52U)))))));
                        var_15 = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((1925363520U) - (1925363490U)))))), ((~(2329206583U))))));
                    }
                } 
            } 
        } 
        var_16 = ((short) (unsigned char)219);
    }
    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((min((-5LL), (var_2))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned char)0)))))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(var_3))))));
    var_19 = var_3;
    var_20 = ((/* implicit */unsigned char) 2066207669764836038ULL);
}
