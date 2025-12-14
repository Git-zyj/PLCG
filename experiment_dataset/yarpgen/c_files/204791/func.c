/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204791
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
    var_11 &= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (arr_4 [i_0] [i_1 - 2]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((131072U), (((/* implicit */unsigned int) arr_3 [i_1 - 1] [(unsigned char)10] [(unsigned char)14])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)25)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [(signed char)6] [i_1] [i_1] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(4294836223U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [(unsigned short)11]) && (((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) | (var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_4] [i_3]), (((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_9 [(short)6] [i_1] [i_2] [i_4])) > (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [(unsigned short)3])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)7])) + (((/* implicit */int) var_8)))))))))));
                                arr_14 [i_4] [i_1 + 1] [i_3] [17] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (!(((((-1741943776) % (((/* implicit */int) (unsigned short)62599)))) > (((/* implicit */int) ((((/* implicit */_Bool) 131069U)) && (((/* implicit */_Bool) var_3)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) (unsigned short)52906))))) * ((+(((/* implicit */int) var_8)))))) > (((/* implicit */int) var_9))));
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)384))));
}
