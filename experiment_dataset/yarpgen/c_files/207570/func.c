/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207570
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */unsigned int) arr_1 [i_0])))))) | (((((_Bool) var_9)) ? ((+(arr_1 [i_0]))) : (var_3)))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (max((17ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0])))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_1 - 3] = max((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])))), (((/* implicit */int) var_9)));
            var_11 = (~(((/* implicit */int) max((arr_5 [i_1 + 1] [i_1 - 3]), (((/* implicit */signed char) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_12 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_2))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (var_7)))), (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (((_Bool)1) || (((/* implicit */_Bool) (signed char)116)))))))));
                var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (-1934245061)))) ? (max((-3239017694094835357LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_2])))))) << ((((~(arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 3]))) - (2169197132982741925LL)))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_8)))) ? (((/* implicit */int) max(((short)-5349), (((/* implicit */short) arr_10 [i_0] [i_1 - 1] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 10512975160365249587ULL)) ? (var_3) : (((/* implicit */int) var_6))))))) * (arr_4 [i_1])));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1]))))) ? (arr_9 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((var_3) >= (((/* implicit */int) var_7))))))) <= (((int) ((var_9) ? (((/* implicit */int) arr_7 [(signed char)6] [i_1] [i_3])) : (((/* implicit */int) (short)-30649)))))));
                        }
                    } 
                } 
                var_17 = min((((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_3] [i_1] [i_1 - 2] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_2))))) : (((((/* implicit */_Bool) -3239017694094835328LL)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_1]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)5350)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [(short)1] [i_1 - 2])))), (((((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)15] [i_0])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (signed char)72))))))));
            }
            var_18 -= ((/* implicit */short) max((((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [(short)10] [i_0]))))), (((/* implicit */long long int) var_6))));
        }
    }
    var_19 &= ((/* implicit */unsigned char) var_6);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_3) <= (((/* implicit */int) var_9))))), (var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))) ? (max((var_4), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (var_8)));
}
