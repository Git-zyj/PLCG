/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208798
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_2)))), ((signed char)-123))))) & ((-(((var_5) & (var_2)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [9ULL] = ((((var_2) >> (((((/* implicit */int) arr_2 [i_0])) - (36033))))) >> (((((((/* implicit */_Bool) (unsigned short)55799)) ? (((/* implicit */int) (unsigned short)24125)) : (((/* implicit */int) (short)32767)))) - (24111))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((var_8) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) <= (min((((/* implicit */long long int) var_3)), (arr_1 [i_0] [i_1])))))), (max(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) (((-(arr_0 [i_0]))) >> ((((~(var_2))) - (625490952U)))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) : (max((((var_3) / (((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) ((unsigned short) var_8)))))));
                                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_9 [i_0] [i_0] [i_2] [(_Bool)1] [i_4])), ((short)-31580)));
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_11 [i_0] [(signed char)7] [i_2] [i_3] [i_4])))) ? (((arr_0 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32747))))) : (4294967295U))) & ((~(var_2)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (signed char i_7 = 3; i_7 < 14; i_7 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) | (2386094047158924819LL))) < (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_0))))))));
                    var_18 = ((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_7] [i_6]);
                    var_19 += ((/* implicit */unsigned int) 1762141707);
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned int) var_3)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_4);
}
