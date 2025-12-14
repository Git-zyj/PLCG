/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217577
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
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (6488061378403898419LL) : (min((var_7), (-7973357524358749620LL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) 0LL);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_12 [i_2] [i_1] [4ULL])) : (((/* implicit */int) (unsigned short)7743))))) / (((arr_10 [i_0] [i_1] [(unsigned char)0] [i_3] [i_4]) ? (6488061378403898419LL) : (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) max((((arr_4 [(unsigned char)3] [i_1]) ^ (((/* implicit */int) (unsigned short)57802)))), (((/* implicit */int) ((unsigned char) 776758166)))))))))));
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_0] = var_6;
                            arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [2U] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (short)12232)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 + 2])) || (((/* implicit */_Bool) arr_7 [(_Bool)1] [9LL] [1])))))));
                        }
                        arr_17 [i_0] [i_3] [i_2] [i_3] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_1])))) * (var_11));
                        arr_18 [i_3] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) min(((unsigned short)2048), (((/* implicit */unsigned short) (unsigned char)255))))) >> (((-1879696146) + (1879696172)))))));
                    }
                    var_20 = ((/* implicit */long long int) var_14);
                    arr_19 [(unsigned char)4] [(unsigned char)4] [i_2] [9LL] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (max((var_6), (((/* implicit */long long int) arr_1 [i_2]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((long long int) var_15))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                arr_25 [i_5] [i_5] = ((/* implicit */short) ((arr_21 [i_5]) ? (((long long int) max((-6394180243063770720LL), (((/* implicit */long long int) (unsigned short)7733))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)2048)) - (((/* implicit */int) arr_23 [i_5])))) >= (((/* implicit */int) min((arr_22 [(unsigned char)1]), (((/* implicit */unsigned short) arr_21 [i_5])))))))))));
                var_22 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) 2147483647)) >= (min(((-(7260295870247752655LL))), (((/* implicit */long long int) (unsigned short)57792))))));
                arr_26 [i_5] [i_5] = (-(((((((/* implicit */unsigned long long int) var_16)) % (15928807101971075885ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_24 [i_5] [9LL] [i_5])) : (((/* implicit */int) arr_21 [i_5]))))))));
                arr_27 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) arr_21 [i_6]);
            }
        } 
    } 
}
