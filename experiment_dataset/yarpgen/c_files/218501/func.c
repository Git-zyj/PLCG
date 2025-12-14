/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218501
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (max((((/* implicit */int) var_15)), (var_1)))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-11))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_13)))))));
    var_17 = max((((unsigned int) ((signed char) 442127900U))), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_3)) : (639128585)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_1]))))))) : (((/* implicit */int) ((unsigned char) arr_6 [9U] [9U] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_1] [i_4] [i_2] [i_2] = (-(var_12));
                                arr_14 [8ULL] [i_1] [8ULL] [8ULL] [i_4] [i_4] [8ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [7U] [i_1])))) ? (((unsigned int) max((((/* implicit */unsigned long long int) 442127902U)), (arr_0 [i_3])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [(unsigned short)22])) ? (((/* implicit */int) ((unsigned short) var_13))) : ((~(((/* implicit */int) arr_3 [i_1] [(signed char)1] [i_1])))))))));
                                var_19 = ((/* implicit */unsigned char) (signed char)1);
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28209))))) : (((long long int) arr_19 [i_7] [i_1]))));
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) var_1))), (max((max((((/* implicit */int) arr_12 [i_0] [i_1] [i_5] [i_6 + 1] [i_5])), (arr_2 [i_5] [i_5]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)28209)) : (((/* implicit */int) var_11))))))));
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((arr_3 [i_5 - 2] [i_7] [i_7]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_5 + 2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [(short)4]))))));
                                arr_22 [i_0] [i_1] [i_5 - 2] [i_6] [i_7] [i_5] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_5 - 2] [i_6 + 2] [i_5 + 2]))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */int) ((_Bool) arr_20 [14U] [14U] [i_0]))) == (((/* implicit */int) ((((/* implicit */int) (signed char)1)) == (((/* implicit */int) (unsigned short)28209)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) 8692167577212731923LL);
    /* LoopNest 3 */
    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 2; i_10 < 9; i_10 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 10; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) (+(((3852839395U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)120)))))));
                        var_26 |= ((/* implicit */unsigned long long int) ((unsigned int) (signed char)15));
                    }
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_27 = (~(((/* implicit */int) arr_3 [i_8 - 1] [19] [(short)20])));
                        var_28 = ((/* implicit */unsigned char) max(((unsigned short)37304), (((/* implicit */unsigned short) (short)9121))));
                    }
                }
            } 
        } 
    } 
}
