/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232269
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 2305842459457880064ULL))))) << ((((~(((/* implicit */int) (short)-19123)))) - (19095))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_15)))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12))))) >> ((((-(var_6))) - (213562800)))))) : (var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) var_14);
                    var_23 = ((/* implicit */int) (((~(arr_8 [i_1] [i_1]))) >> (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (16140901614251671524ULL) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)16])))))) - (216)))));
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)11629)))))) != (13737086892454264428ULL)));
                    var_25 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) >> (((((/* implicit */int) arr_4 [i_3])) - (26699)))));
                    arr_12 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((var_3) / (3080802724063082927ULL))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) / (((/* implicit */int) var_12))))) / (arr_3 [i_0] [i_1])))));
                }
                /* LoopNest 3 */
                for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] [i_0] [i_4 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (~(var_5)))))));
                                var_26 = ((/* implicit */short) (unsigned short)5742);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) 16140901614251671514ULL);
                                arr_31 [i_0] [i_0] [i_1] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                arr_32 [i_0] [i_1] [4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_14))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) - (var_3)));
            }
        } 
    } 
}
