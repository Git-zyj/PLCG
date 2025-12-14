/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236366
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_5)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) var_6);
                                arr_11 [i_0] [9ULL] [i_2] [5U] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)13610), ((short)-13626))))) > (((unsigned long long int) var_4))));
                                var_12 += ((/* implicit */int) ((((((/* implicit */int) (short)13627)) > (((/* implicit */int) (unsigned char)90)))) || (((/* implicit */_Bool) ((var_1) ? (max((var_5), (((/* implicit */unsigned long long int) (unsigned short)23139)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13619)) - (((/* implicit */int) (short)13610))))))))));
                                arr_12 [i_0] [i_1] [i_2] [(signed char)1] [i_4] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2658157912U)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_3 - 1] [(_Bool)1]))) : (var_5)));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) 1636809415U))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_8) : (((/* implicit */unsigned int) ((int) var_6))))) <= ((-(2658157895U)))));
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) -438004769)) ? (var_9) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)42384)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (unsigned short)23151)))))));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [(unsigned short)4] [i_0]))))));
        arr_14 [i_0] = (((((_Bool)1) ? (((/* implicit */int) arr_10 [(unsigned short)12] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (-438004786))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2658157912U))))));
                    var_17 = ((/* implicit */int) var_8);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
    {
        arr_26 [8] = ((/* implicit */unsigned long long int) (unsigned short)33595);
        var_18 ^= ((/* implicit */unsigned int) (unsigned short)15360);
        var_19 = var_9;
    }
}
