/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224934
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_12 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_13 = (short)-1;
                            var_14 = (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)27235))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) (~((+(var_6)))));
                arr_13 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22185)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)115))))) : ((~(arr_0 [i_1])))));
            }
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1])) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)10]))));
        }
        var_17 -= ((/* implicit */unsigned char) var_7);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [6LL] [i_0] [i_0] [6LL] [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_16 [i_5] = ((((309737479411533684ULL) % (var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2147483647U)))));
        var_19 ^= ((/* implicit */signed char) ((arr_0 [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_7 [i_6]))) & (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)100))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [(signed char)18]))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-79))));
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_7] [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)62679), (((/* implicit */unsigned short) (signed char)33)))))) : (arr_3 [i_7] [i_7] [i_7])));
        var_23 = (unsigned char)126;
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [i_7] [i_7] [i_7] [0LL])))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)141)))))))))));
    }
    var_25 = ((/* implicit */unsigned int) (-(var_11)));
    var_26 &= ((/* implicit */unsigned short) var_4);
}
