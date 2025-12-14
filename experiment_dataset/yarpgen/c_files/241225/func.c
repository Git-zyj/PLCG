/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241225
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
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_11)))))) <= (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))), (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */unsigned long long int) var_4)) + (var_6))) : (max((var_13), (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(unsigned short)14] [i_2] &= max((var_0), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) var_7)), (var_8)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7)))) < (min((var_4), (var_4))))))))));
                            var_17 *= ((/* implicit */short) ((((((/* implicit */long long int) var_1)) == (var_4))) ? (max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_9))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_13))))) : (((((/* implicit */_Bool) min((var_7), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_12)) : (var_0)))))));
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 = ((((/* implicit */unsigned long long int) max((((int) var_5)), (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) var_2))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) var_8))))) ? (min((var_13), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5)))))));
                        var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((var_13) >= (var_13))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) : (var_5)))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) & (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) var_4))))))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)26890)) : (((/* implicit */int) ((_Bool) (unsigned char)16)))))), (max((((/* implicit */unsigned long long int) (unsigned short)43074)), (2220758965359827057ULL)))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_7)) : (var_13))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_8))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
