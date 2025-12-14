/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49949
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((/* implicit */int) ((short) (_Bool)0)))))), (var_13)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] &= var_13;
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12837))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) var_12)))))))));
        arr_3 [8ULL] = ((/* implicit */unsigned int) ((signed char) var_4));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_10 [(_Bool)1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12837))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_19) : (((/* implicit */unsigned long long int) 0U))));
                                var_23 = ((/* implicit */unsigned short) (+(var_16)));
                                var_24 |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)12866))));
                                var_25 = ((/* implicit */unsigned short) (((~(((unsigned int) arr_1 [i_3] [(signed char)10])))) <= ((+(3U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(201973057)))) ? (((((/* implicit */_Bool) (short)32763)) ? (((((/* implicit */_Bool) (unsigned short)52680)) ? (((/* implicit */int) (unsigned short)52698)) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) arr_4 [i_0] [8U] [(signed char)0])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (unsigned char)142))));
    }
    for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */short) var_11);
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)46959))))) ? (max((17494588417124270850ULL), (arr_17 [(signed char)10] [i_5]))) : (var_19)))));
    }
    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 1) 
    {
        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)52698)), (((arr_20 [i_6 - 2]) * (((/* implicit */unsigned long long int) 1312442763))))));
        var_29 *= ((/* implicit */unsigned long long int) arr_21 [i_6 + 1]);
    }
    var_30 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
}
