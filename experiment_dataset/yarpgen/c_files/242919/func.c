/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242919
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(var_8)));
                    var_21 = ((/* implicit */signed char) ((((arr_3 [i_0]) > (var_10))) || (((/* implicit */_Bool) (signed char)12))));
                    arr_11 [i_2] = ((/* implicit */int) ((min((983040U), (((/* implicit */unsigned int) (unsigned short)16275)))) << (((((/* implicit */int) (unsigned short)15211)) - (15181)))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((/* implicit */int) var_14)))))));
                    var_23 = ((/* implicit */int) var_19);
                }
                arr_12 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 3])), (var_19))), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                var_24 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_5)))) && (((/* implicit */_Bool) var_5))))), ((((!(((/* implicit */_Bool) (unsigned char)56)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) var_4))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_14 [i_3]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))));
        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : ((~(var_13))))) != (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned long long int) arr_14 [i_3])) : (var_17)))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_27 = (-(var_16));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) 2184384286U);
                var_29 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) == (274877644800ULL)));
                var_30 *= ((((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!((!((_Bool)1))))))));
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (983040U)));
                        arr_32 [i_4] = ((/* implicit */unsigned short) arr_29 [i_4] [12] [13] [i_9]);
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) & (274877644789ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9295)))))))));
    var_34 = ((/* implicit */int) min(((-(min((var_8), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29571)) ? (((/* implicit */int) (unsigned short)14)) : (-724348370))))));
    var_35 *= var_3;
}
