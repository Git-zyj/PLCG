/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189657
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */_Bool) arr_4 [i_1]);
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -7511555536750617981LL)), (max((max((16228224659541074889ULL), (((/* implicit */unsigned long long int) (short)13436)))), (((/* implicit */unsigned long long int) var_11)))))))));
                                arr_13 [i_1] = ((((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_0] [i_0])) || (((/* implicit */_Bool) var_1))))) * ((-(((/* implicit */int) arr_7 [i_3])))))) + (((((/* implicit */int) var_10)) + (((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) -7511555536750617981LL);
                        var_16 = ((/* implicit */unsigned short) (!(((_Bool) arr_10 [i_0] [i_0 + 1] [i_5 - 2] [i_5]))));
                        /* LoopSeq 3 */
                        for (short i_6 = 4; i_6 < 8; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_2] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_11)))) * (((/* implicit */int) (unsigned char)202))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_5 - 2]), (arr_7 [i_5 - 2]))))) : (7511555536750617995LL)));
                            var_17 = ((/* implicit */unsigned long long int) (short)-30648);
                            arr_21 [i_6] = ((/* implicit */short) arr_8 [5LL] [i_1] [i_2] [i_0]);
                        }
                        for (short i_7 = 4; i_7 < 8; i_7 += 1) /* same iter space */
                        {
                            var_18 = var_3;
                            var_19 = ((/* implicit */long long int) ((((((7511555536750617959LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52)))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_5] [i_7 + 2])))));
                            var_20 = ((/* implicit */unsigned short) -787001994);
                            var_21 = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) arr_12 [i_7] [7] [i_7] [2LL] [i_7 - 4] [i_7] [5LL])) <= (((/* implicit */int) arr_23 [i_7 - 2] [i_7] [i_7] [i_7 - 4] [i_7 + 1]))))), (arr_12 [i_7 + 3] [i_7] [i_7] [(short)4] [i_7 + 3] [i_7] [i_7])));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8]))) & (8619398525368171802ULL))))) && (((/* implicit */_Bool) ((7511555536750618006LL) / (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (2147483647)))))))));
                            var_23 = ((/* implicit */unsigned char) ((unsigned long long int) min((min(((unsigned short)46121), (((/* implicit */unsigned short) var_11)))), (((/* implicit */unsigned short) arr_10 [i_0 + 1] [i_0 + 1] [i_5 + 2] [i_5 - 2])))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(8619398525368171802ULL))), (((/* implicit */unsigned long long int) -9039748327156695047LL))))) ? (arr_16 [i_8] [i_0 + 1] [5LL] [i_2] [i_1] [i_0 + 1]) : (((((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_0] [(short)0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))) ^ (((((/* implicit */_Bool) (short)-29190)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2303591209400008704LL)))))));
                        }
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46148))) ^ (-7511555536750617981LL)))))) && (((((/* implicit */int) max((var_10), (((/* implicit */short) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) != (((int) (short)22266))))));
                        arr_33 [i_9] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_1]))));
                    }
                    var_26 = ((/* implicit */_Bool) ((unsigned char) arr_14 [i_0] [i_1] [i_2]));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((var_9) && (var_8)));
}
