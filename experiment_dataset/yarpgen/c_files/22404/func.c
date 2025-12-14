/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22404
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) -3429474063237480238LL);
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 3429474063237480237LL))) ? (((/* implicit */long long int) (-(2238158384U)))) : (((3429474063237480237LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-45)), (3540448409U)))) : (((long long int) 2056808912U))));
        }
        for (short i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2 - 1] [1U])) : (arr_1 [i_2 + 1] [2U])));
                            var_18 = ((/* implicit */unsigned char) ((arr_1 [i_2 + 1] [i_3 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20893)))));
                            var_19 = ((/* implicit */unsigned char) 6462271427966448582LL);
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1059475766U))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_21 *= ((/* implicit */int) (+(((((/* implicit */_Bool) (short)32747)) ? (((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))) : (arr_4 [i_0])))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2238158384U)) ? (-1854725332) : (((/* implicit */int) (_Bool)1))))) + (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_2 + 1] [i_2] [i_2] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_6] [(_Bool)1])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_8])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                            var_24 += (-(((/* implicit */int) min(((_Bool)0), ((_Bool)1)))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7])) || ((_Bool)1)))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [8LL] [8LL] [i_6])) : (((/* implicit */int) arr_20 [i_8] [i_7 + 2] [i_7] [(_Bool)1] [(signed char)8] [(unsigned char)6] [i_0])))) / (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)9] [i_6])) ? (((/* implicit */int) (short)31626)) : (((/* implicit */int) (short)32767))))))));
                            var_26 = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) 2147483647)) ? (arr_21 [(unsigned char)3] [(unsigned char)3]) : (((/* implicit */unsigned long long int) -8026263704857536922LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -22366675))))))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_28 = ((min((((((/* implicit */_Bool) var_4)) ? (1820948804U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) (_Bool)1)))) % (((/* implicit */unsigned int) 2147483647)));
                            var_29 *= ((/* implicit */unsigned char) -768250546);
                        }
                    } 
                } 
            }
            var_30 &= ((/* implicit */short) max((((/* implicit */int) ((signed char) (_Bool)1))), (((int) arr_11 [i_0] [i_2 - 1]))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) 4064U))));
        }
        for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_12 [i_12])))));
            var_33 = ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)45)), ((short)28)));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7507098382084516159LL)) ? (((/* implicit */int) arr_0 [6U])) : (((/* implicit */int) (unsigned char)188))))), (max((1023U), (((/* implicit */unsigned int) arr_0 [i_12]))))))) ? (((((_Bool) -3429474063237480238LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 768250550))))) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_0] [i_0])))))) : (((/* implicit */int) ((_Bool) -1695919216)))));
        }
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_0] [(_Bool)1] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (_Bool)0))))));
    }
    var_36 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) (short)0)))))), (var_1)));
}
