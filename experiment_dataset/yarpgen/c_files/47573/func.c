/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47573
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7099450841785387108ULL)) ? (811160567U) : (0U)))) ? (((/* implicit */int) (unsigned short)45398)) : (max((4194302), (((/* implicit */int) (unsigned short)45401))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_10 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!((_Bool)1)))), (min((var_6), (((/* implicit */unsigned short) arr_4 [i_3] [i_3] [i_3])))))))));
                            arr_14 [(unsigned short)16] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2 + 2] [i_2] [i_2 - 1]))) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(short)17] [i_2] [i_2 - 1])) && (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2 - 1] [i_2])))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_1] &= ((/* implicit */signed char) (((~(((((/* implicit */int) arr_10 [i_3])) << (((((/* implicit */int) var_2)) - (47181))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) 0U))) : (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0])))))));
                            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_10 [i_2]))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)60077))))) : (min((arr_11 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1] [i_1 - 1]), (((unsigned int) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (-(max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((long long int) var_9)))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((var_0), (((/* implicit */long long int) (unsigned char)240)))))) || (((/* implicit */_Bool) min((((/* implicit */int) max((arr_0 [i_4] [i_4]), (((/* implicit */unsigned char) arr_10 [i_4]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) var_2))))))))))));
        arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(((((/* implicit */_Bool) arr_9 [i_4] [(unsigned short)8] [i_4])) ? (arr_17 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)18]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_18 [i_4]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12629))))) : (((/* implicit */int) arr_1 [i_4]))))) | (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)210)))), ((~(var_7)))))));
    }
}
