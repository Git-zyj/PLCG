/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231538
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_12)));
    var_17 = ((/* implicit */short) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((arr_2 [i_0]) << (((((/* implicit */int) arr_1 [i_0])) - (7984))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (arr_2 [i_0]))) > (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) : (((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_11 [i_1] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) > (((unsigned int) var_3))))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_2])), (arr_1 [i_1]))))))));
            var_20 = ((/* implicit */unsigned short) arr_5 [i_1]);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 482834807U))) << (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (arr_2 [i_1]) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((arr_2 [(signed char)16]), (((/* implicit */unsigned int) arr_5 [i_1])))))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            arr_15 [i_1] [8ULL] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) (short)127)))) - (((/* implicit */int) arr_7 [i_3]))));
            var_22 = ((/* implicit */unsigned short) (-(arr_9 [i_1] [i_3] [i_1])));
            var_23 = ((/* implicit */_Bool) arr_1 [i_1]);
        }
        var_24 = ((/* implicit */unsigned short) var_5);
    }
    for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_25 ^= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_4])) == (((((((/* implicit */int) arr_5 [i_4])) + (2147483647))) >> (((var_1) - (212038347))))))) ? ((+(((/* implicit */int) arr_1 [i_4 - 1])))) : (arr_13 [(signed char)4] [i_4] [i_4])));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (signed char i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                {
                    var_26 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_4 - 2])) ? (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_4])))) : (((((/* implicit */int) (short)0)) >> (((/* implicit */int) (_Bool)0)))))) + (((/* implicit */int) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15687064904309341561ULL)) || (((/* implicit */_Bool) (short)32759)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-127)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6 + 1]))) : ((-(arr_26 [i_4] [(_Bool)1] [i_6] [(unsigned char)7]))))) : (((/* implicit */unsigned long long int) (+(arr_12 [i_4 + 1] [(short)10]))))));
                                var_28 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-32)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
