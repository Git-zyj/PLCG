/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32063
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned long long int) (_Bool)0)))));
        var_16 = ((/* implicit */unsigned int) (short)-11136);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 = ((/* implicit */int) arr_5 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-95))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 17; i_3 += 2) 
            {
                arr_11 [i_3] [i_1] = ((/* implicit */unsigned int) (signed char)127);
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_4] [(_Bool)1] [i_5]))) : (7894575262326005111ULL)));
                        var_19 -= ((/* implicit */unsigned short) arr_7 [i_2] [(unsigned short)3]);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned int) ((signed char) var_11));
                        arr_20 [i_2] [i_4] |= ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_3 + 3] [i_3 - 2] [i_3 - 2] [i_3 - 1] [12U] [i_3] [12U]))));
                        arr_21 [i_2] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 4294967285U)) : (arr_6 [i_1] [i_1]))))));
                        var_21 = ((/* implicit */int) ((((long long int) 10420217966288077032ULL)) & (((/* implicit */long long int) 4294967270U))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        var_22 &= ((/* implicit */short) var_6);
                        arr_24 [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */long long int) ((short) (~((((_Bool)0) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) var_3)))))));
                    }
                    arr_25 [i_1] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) var_12);
                }
                for (int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((3246196481U), (((/* implicit */unsigned int) (_Bool)1)))))));
                    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) min((max(((unsigned short)26192), (((/* implicit */unsigned short) (signed char)-8)))), (arr_9 [i_3])))), ((-(((/* implicit */int) var_3))))));
                    var_25 = ((/* implicit */unsigned short) var_3);
                    arr_28 [i_2] = ((/* implicit */int) var_8);
                }
            }
        }
        var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (_Bool)1))));
                    arr_35 [i_1] [i_1] [i_10 - 3] = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) (_Bool)0))))));
                    arr_36 [i_1] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * ((((+(((/* implicit */int) var_6)))) >> (((((/* implicit */int) arr_19 [i_10] [(unsigned short)16] [(unsigned short)16] [i_9])) - (31443)))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) (signed char)-46);
    var_29 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    var_30 *= (signed char)-6;
}
