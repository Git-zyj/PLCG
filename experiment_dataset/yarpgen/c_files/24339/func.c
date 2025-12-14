/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24339
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
    var_17 *= ((/* implicit */_Bool) var_4);
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (var_15)))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_16))))))) : (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63633))))) - (min((((/* implicit */long long int) (_Bool)1)), (var_7)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */_Bool) (+(var_1)));
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_5))))) << (((min((((/* implicit */unsigned int) var_12)), (arr_2 [i_0] [i_0] [16]))) - (204U)))))) != (var_14)));
                arr_6 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_13), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */short) arr_4 [i_0] [(signed char)9])))))) < (max((arr_0 [i_1] [(_Bool)1]), (((/* implicit */unsigned int) arr_1 [i_0]))))))) : ((-(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)63636))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (var_2)));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_21 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32753))) % (4165121433U)));
                    arr_14 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63633)) && ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [(_Bool)1] [i_2] [8U] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */short) arr_12 [(_Bool)1] [i_2 - 3])), (var_5)));
                                arr_22 [i_2] [i_3] [i_3] [i_3] [i_2] [9] = ((/* implicit */unsigned int) (~(1876160687789114416LL)));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((134217696U), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_20 [(unsigned char)8] [i_3] [i_4] [(unsigned char)8] [i_6 + 2])))) | (((((/* implicit */_Bool) arr_12 [i_4] [(_Bool)1])) ? (arr_1 [i_4]) : (arr_1 [i_3]))))))));
                                arr_23 [(signed char)12] [i_3] [i_4] [i_4] [4] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((var_16) || (((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
