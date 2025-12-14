/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238794
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
    var_19 ^= ((/* implicit */signed char) (~((-(((/* implicit */int) max((var_17), (((/* implicit */short) (signed char)-49)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_20 ^= ((/* implicit */short) 1503935441);
                        var_21 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_8 [i_0] [i_2 + 3])) || (((/* implicit */_Bool) arr_8 [(unsigned char)17] [i_2 - 2]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) max((((unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_5 [i_1])) : (arr_4 [i_2 + 1] [i_0] [i_0])))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-8438168733361040321LL)))))))));
                }
                for (long long int i_4 = 4; i_4 < 23; i_4 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) var_15);
                    var_24 = ((/* implicit */short) ((((/* implicit */int) var_16)) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-96))))) ? (((arr_10 [(unsigned short)13] [i_1] [i_4]) ? (((/* implicit */int) (signed char)38)) : (1640197196))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16383ULL))))))) - (1640197188)))));
                    arr_11 [i_4 + 2] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_14 [16] [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) (-(min(((-(((/* implicit */int) (signed char)47)))), (arr_4 [i_0] [i_0] [i_0])))));
                    arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((max((max((16054632731964008012ULL), (((/* implicit */unsigned long long int) (signed char)-37)))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) (unsigned short)46228))))))), (((/* implicit */unsigned long long int) var_5))));
                    var_25 &= ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8438168733361040317LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46213))))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_6]))));
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47209)) ? (16054632731964008012ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28903))))))));
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_6]))));
                    var_28 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                }
                var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)51191))))));
                var_30 = ((/* implicit */short) (~(max(((-(var_11))), (arr_2 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
}
