/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220084
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) arr_1 [i_0]))), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
        var_16 *= ((/* implicit */long long int) var_13);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) (unsigned short)28998)) ? (1787125092) : (((/* implicit */int) (unsigned short)36537)))))), (((/* implicit */int) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8])))))))))));
            arr_7 [(short)2] [i_0] [(short)2] &= ((/* implicit */unsigned short) var_14);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_3] [7LL] [i_3] [i_0] = ((((/* implicit */int) arr_14 [1ULL] [(short)6] [i_0] [i_2 - 4] [i_3 + 2] [i_2 + 1])) + (arr_6 [i_1] [i_1] [i_4]));
                            arr_17 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) -1181406818115236821LL);
                            var_18 += ((/* implicit */int) (((-(arr_6 [i_3 + 1] [i_3 + 3] [i_3]))) > (((/* implicit */int) ((((/* implicit */int) (short)-5617)) <= (((/* implicit */int) (signed char)92)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)92)) || (((/* implicit */_Bool) var_14))))))))));
                    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9210906156672960338ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_10 [(short)5] [1ULL]))))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_7))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_21 *= ((/* implicit */signed char) 5507545850623505991ULL);
                    var_22 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((int) var_3)));
                }
            }
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
            {
                var_23 += ((/* implicit */_Bool) var_6);
                arr_25 [1ULL] [i_1] [i_7] = ((/* implicit */signed char) var_7);
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_32 [(signed char)5] = ((/* implicit */long long int) var_9);
                            var_24 = ((/* implicit */unsigned short) -1727605328);
                        }
                    } 
                } 
                var_25 -= ((/* implicit */long long int) var_2);
            }
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) var_14)))) / (((/* implicit */int) var_9))))), ((-(arr_31 [i_0] [i_0] [i_1] [(short)9] [i_1] [i_1]))))))));
        }
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            arr_36 [i_11] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)21183)) < ((~(((/* implicit */int) (short)8518))))));
            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)167)))))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)-24506), (((/* implicit */short) (unsigned char)9))))) || (((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (unsigned short)12481)))))));
            var_29 = arr_18 [i_0] [(unsigned char)5] [i_11] [i_0] [(unsigned short)10] [(unsigned char)8];
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            arr_40 [(unsigned char)9] [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (17168905920398288876ULL)));
            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0] [i_12] [i_12]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((_Bool)1))))))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)222))) - (arr_19 [i_12] [i_12] [5U] [i_0] [i_0])))));
        }
    }
    var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
    var_32 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32762))) : (((((/* implicit */_Bool) var_6)) ? ((~(9235837917036591277ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13)))))));
    var_33 &= var_9;
}
