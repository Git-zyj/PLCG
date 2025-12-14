/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223569
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)4088))))) ? (var_2) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
    var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))));
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) <= (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208)))))))))));
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) (unsigned short)60326)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (var_1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)23729)) / (((/* implicit */int) (short)-13321)))))))));
                                var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((_Bool) var_3)))))));
                                arr_14 [(short)4] [i_1] [i_2 + 1] [i_2] [i_3] [i_3] [12LL] |= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13320))) + (1987209669U)))) ? ((((-(-459765163101711434LL))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0 - 1] [i_1] [i_2] [i_5] [i_6]))))))) : (((((/* implicit */_Bool) (unsigned short)35886)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2732053531808941238LL)))));
                                var_22 = ((/* implicit */unsigned char) ((unsigned long long int) (short)4081));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((((/* implicit */long long int) var_14)) <= (arr_11 [i_0 + 1] [i_2 + 1] [i_2] [i_1]))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (arr_9 [i_0] [(_Bool)1] [i_1] [i_1] [i_2 - 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1876941067U)) : (((((/* implicit */_Bool) -344077706)) ? (((/* implicit */unsigned long long int) 1987209644U)) : (var_0)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_0] [i_8] [5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(arr_24 [i_0])))), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13300))) < (var_10)))), (var_12)))));
                                var_24 = ((/* implicit */signed char) (((~(min((var_0), (((/* implicit */unsigned long long int) arr_23 [6] [i_0] [i_7] [i_7] [i_7])))))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-13320)), (arr_24 [i_0]))))));
                                var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (short)11498)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16292))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
