/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235714
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)47)) ? (278289160U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) > ((+(var_5))))))) == (((unsigned int) (-(var_5))))));
        var_14 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-88)))))))) | (((((/* implicit */unsigned long long int) ((unsigned int) var_0))) | (var_6)))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))) % (max((((/* implicit */long long int) var_9)), (var_1)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_10))))));
            var_16 -= ((signed char) var_6);
            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))) % (var_6)));
            arr_8 [i_1] = (!((_Bool)1));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_18 &= var_7;
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_19 = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)));
            var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0)))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_8)))))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((_Bool) ((unsigned short) (unsigned char)1))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_23 = (!((_Bool)1));
        var_24 = ((/* implicit */unsigned short) ((max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_9)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))));
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) <= (((unsigned int) (_Bool)1))));
        arr_16 [i_4] [i_4] = ((/* implicit */int) max((((signed char) min((var_5), (((/* implicit */unsigned int) var_3))))), (((/* implicit */signed char) ((((unsigned int) var_2)) <= (((unsigned int) var_11)))))));
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned short)18898))));
        arr_19 [i_5] = ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))));
    }
}
