/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49876
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
    var_20 = ((/* implicit */long long int) max((min((((var_17) % (((/* implicit */unsigned long long int) var_19)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) <= (var_6)))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)36997))));
        arr_2 [i_0] = ((/* implicit */unsigned int) min(((~(6400317245075485043ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)14063))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-((~(max((var_17), (((/* implicit */unsigned long long int) var_19))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_3)))) ? ((~(15890487448566096827ULL))) : (var_3))))));
        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) var_15))))));
        var_24 = ((/* implicit */int) (((+(var_0))) - (((/* implicit */unsigned long long int) (+(var_9))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-4173)) ? (15890487448566096827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14063)))));
        var_25 = ((/* implicit */short) var_12);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) var_17);
        var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_17) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))) != (var_12)));
    }
    var_28 |= ((/* implicit */unsigned int) (-(var_17)));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 6; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (var_7)))), (min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))))))))));
                    var_30 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15)))), (var_3)))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_11);
}
