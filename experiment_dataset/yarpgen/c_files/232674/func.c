/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232674
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (arr_1 [i_1 - 2]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)1)))) : (((/* implicit */int) ((unsigned short) var_15))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) var_3);
                var_18 = ((/* implicit */int) ((((((/* implicit */int) (signed char)-122)) >= (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (max((arr_3 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1] [i_1 - 1]))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] |= ((/* implicit */short) ((arr_4 [i_0] [i_0] [i_0]) ^ (((long long int) arr_9 [i_4]))));
                                var_19 = ((/* implicit */unsigned int) (signed char)127);
                                var_20 ^= var_13;
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */_Bool) arr_12 [i_2 + 1] [i_1 - 1]);
                    var_22 = arr_11 [i_0] [i_0] [i_2] [i_0];
                    var_23 = ((/* implicit */_Bool) var_12);
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_19 [6LL] [6LL] [i_5])))))) : (max((var_16), (((/* implicit */unsigned int) var_10)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_12))))) > (((unsigned int) var_7)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_4) : (var_4)))))));
                                arr_26 [(unsigned short)15] [(_Bool)1] [i_5] [i_6] [(_Bool)1] [i_6] [i_5] = ((/* implicit */unsigned long long int) (signed char)-122);
                            }
                        } 
                    } 
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), ((!(((arr_22 [8] [i_0] [i_1 - 1] [i_1 - 2] [6LL] [i_1 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    var_27 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) 461231205U)) ? (arr_24 [i_8] [i_0] [i_1] [i_1 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))))) + (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65280)) ? (var_16) : (arr_12 [17U] [10U]))), (((/* implicit */unsigned int) ((-6142975349089637378LL) == (((/* implicit */long long int) var_0))))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_28 -= ((/* implicit */unsigned char) var_4);
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_10), (((/* implicit */short) arr_9 [i_0]))))) : (((/* implicit */int) (unsigned short)65280)))))));
                }
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) max((((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : ((+(var_3))))), (((/* implicit */unsigned long long int) (unsigned short)65280)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((((/* implicit */int) var_10)) % (((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_12)) : ((((+(var_7))) >> (((/* implicit */int) var_14))))));
    var_32 = ((/* implicit */unsigned int) var_14);
}
