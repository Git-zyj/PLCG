/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192519
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11178)))))))) <= (((((/* implicit */_Bool) (-(-2147483642)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-29900))))) : (var_18)))));
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (var_12) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_2))))) ? (var_14) : (((((/* implicit */_Bool) var_13)) ? (var_14) : (-597899230))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((6003381891450327527LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-14939)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58245)))))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (597899230)))) + (((((/* implicit */long long int) 1616954828U)) + (8964239495787762593LL)))))));
    var_23 = ((/* implicit */unsigned short) (short)-11178);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_19)))))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_2 + 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_9 [4ULL] [i_2 + 2] [i_2 - 2] [i_2 + 2])))) ? (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_2 - 3] [i_2 + 1] [i_2 + 2]) : (((/* implicit */int) (short)9272)))) : ((+(var_17)))));
                            arr_13 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)240))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_2 + 2] [i_3] [i_3] = ((/* implicit */unsigned char) var_19);
                            var_25 |= var_18;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 4; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_4 + 2] [i_5] &= var_18;
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) | (((/* implicit */int) (short)11160))));
                        }
                    } 
                } 
            }
        } 
    } 
}
