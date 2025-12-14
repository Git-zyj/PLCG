/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236466
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned long long int) arr_1 [0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)54926))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_10)))))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) arr_5 [13ULL] [i_1] [i_2] [i_2]);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */int) (unsigned short)10609)) + (((/* implicit */int) (unsigned short)54927))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) var_1);
                    arr_13 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_4] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)54940)))))));
                    var_17 = ((/* implicit */unsigned int) var_9);
                    arr_14 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) arr_11 [12ULL] [i_3] [i_4]))), (((((/* implicit */_Bool) (unsigned short)54914)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (14037360239186390580ULL)))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((int) 25322776U)), (((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */int) arr_16 [i_5])) : ((~(((/* implicit */int) arr_15 [i_5]))))));
        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)23967)) ? (1856526515203874569ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29007)))));
        var_20 = ((/* implicit */_Bool) min((min((1137001133), (((/* implicit */int) arr_16 [i_5])))), (((((/* implicit */int) (unsigned short)10609)) & (((/* implicit */int) arr_16 [i_5]))))));
        arr_17 [i_5] = ((/* implicit */long long int) (+((~(max((((/* implicit */int) (unsigned char)165)), (-635599750)))))));
    }
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)10605))) ? (2974044016U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
        arr_20 [i_6] [i_6] = ((/* implicit */int) ((var_7) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) arr_18 [i_6])))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_28 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned short)54934))) / (((/* implicit */int) arr_18 [i_6]))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8]))));
                    var_23 = ((signed char) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7])) ? (arr_21 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111)))));
                    var_24 += ((/* implicit */signed char) min((((((/* implicit */int) var_5)) + (((/* implicit */int) ((short) var_11))))), ((~(((/* implicit */int) arr_24 [i_6] [i_7] [i_6]))))));
                    arr_29 [i_6] [i_8] = ((/* implicit */_Bool) arr_18 [i_6]);
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) (+(-11178971)));
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)17481)) / (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)43))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_0)) / (((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3))))))));
}
