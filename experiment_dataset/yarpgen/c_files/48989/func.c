/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48989
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((max((3471117135566302416LL), (((/* implicit */long long int) (_Bool)1)))) * (((/* implicit */long long int) ((unsigned int) var_9))))), (((/* implicit */long long int) (signed char)-96)))))));
    var_14 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (signed char)127))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (((-(3471117135566302425LL))) / (((/* implicit */long long int) var_7))));
                    var_15 = ((/* implicit */int) (_Bool)1);
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned char) min((((/* implicit */signed char) min(((_Bool)1), (var_8)))), ((signed char)-114)))), ((unsigned char)232)));
                    var_16 *= min((min((((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)232)))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) <= (var_12)))) <= (((/* implicit */int) (signed char)-96))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) min((-2015703315885079235LL), (((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)96))))), ((signed char)(-127 - 1)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35))))) : (((/* implicit */int) ((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (signed char)127))))) < (((((/* implicit */_Bool) (signed char)113)) ? (3471117135566302416LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_17 [i_3] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                    arr_18 [i_3] [i_3] [i_3] [i_3] = (_Bool)1;
                    arr_19 [i_3] [i_5] = ((/* implicit */short) (signed char)108);
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) >> (((min((((/* implicit */long long int) (signed char)-114)), (var_4))) + (117LL)))));
                        arr_22 [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        var_19 -= var_1;
                        var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)55094)));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_2))));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) (unsigned short)33616);
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) (-(max((min((((/* implicit */long long int) var_5)), (-3679453617310511856LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-10)), (var_0))))))));
        arr_27 [i_7] = (unsigned char)218;
        var_23 = ((/* implicit */unsigned char) (signed char)-99);
        arr_28 [i_7] = (-(((/* implicit */int) (signed char)-121)));
    }
}
