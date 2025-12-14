/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218693
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
    var_12 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_10))))));
    var_13 += ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) != (8326183485814021361LL)))) << (((((/* implicit */int) ((unsigned short) var_3))) - (33198)))))));
    var_14 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65513)) ? (((/* implicit */int) arr_7 [i_3 + 1] [16U] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))) ? (((((/* implicit */_Bool) -5028236835372534998LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1]))))));
                        var_16 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(-8326183485814021361LL)))) ? (((/* implicit */unsigned long long int) 926546631U)) : (((((/* implicit */_Bool) (unsigned short)64199)) ? (3365382306988292428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49023)))))))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_3 - 3] [i_3 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 3])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_0 [i_0]))));
    }
    /* LoopNest 3 */
    for (short i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    var_19 -= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) 8956001936332993346LL)) ? (var_4) : (var_8)))))), (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) -8326183485814021362LL)) ? (arr_16 [i_4] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                    var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_4]))))), (568729589U)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) min((8326183485814021357LL), (((/* implicit */long long int) arr_11 [i_4]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_4] [11] [i_6] [(unsigned char)18])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_10), ((unsigned short)45539)))))));
                    var_21 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_4] [i_5] [i_6]), (((/* implicit */unsigned short) arr_2 [i_4] [10])))))) : (((((/* implicit */_Bool) 2841396904883778569LL)) ? (4105140926U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63488)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 - 1] [i_6]))) : (max((2841396904883778555LL), (max((-2841396904883778578LL), (arr_3 [i_4] [i_5] [i_4]))))));
                }
            } 
        } 
    } 
}
