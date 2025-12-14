/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216412
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned char) (+(var_9)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (arr_2 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-4927)) > (((/* implicit */int) (unsigned short)34951)))))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_0 [i_0])) / (-1725293493750349669LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) - (((/* implicit */int) var_11))));
                    var_19 *= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))));
        var_21 = ((/* implicit */long long int) var_3);
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_3])))) + (var_3)));
        var_22 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(var_0)))) ? (arr_10 [i_3] [i_3]) : (-265817221883528886LL)))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9] [i_3]))) / (var_1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_11 [i_3] [i_3])))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) min(((+(((((/* implicit */int) arr_13 [i_4])) + (((/* implicit */int) (unsigned short)58440)))))), (((((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) arr_13 [i_4])))) << (((var_14) - (2074442087U)))))));
        var_24 = ((/* implicit */unsigned short) ((long long int) (signed char)-20));
        var_25 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)14967)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
        var_26 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [i_4]) : (arr_16 [i_4]))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_15 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 4; i_7 < 14; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(max(((+(arr_27 [i_8]))), (((/* implicit */unsigned int) arr_22 [i_6] [i_8])))))))));
                                var_28 = ((/* implicit */unsigned char) ((unsigned long long int) arr_18 [11LL]));
                            }
                        } 
                    } 
                } 
                var_29 &= ((/* implicit */short) var_9);
            }
        } 
    } 
}
