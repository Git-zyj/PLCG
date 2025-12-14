/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223852
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
    var_16 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */long long int) max((var_18), (((((((/* implicit */int) var_0)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) ? ((~(-7006997957903981501LL))) : (((/* implicit */long long int) min((min((4294967285U), (((/* implicit */unsigned int) (signed char)-100)))), (((/* implicit */unsigned int) ((15333284773134844355ULL) <= (15333284773134844358ULL)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
            var_20 *= ((/* implicit */_Bool) (-(max((min((((/* implicit */int) arr_1 [i_1])), (var_13))), (((/* implicit */int) min((var_14), (arr_2 [(_Bool)1]))))))));
        }
        for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_0 + 2] [i_0 + 2] [i_0] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (arr_3 [i_0 + 3]) : (arr_3 [i_0 + 3]))), (((/* implicit */unsigned long long int) (-(-1216366892309714274LL))))));
            var_21 -= ((/* implicit */long long int) var_15);
            var_22 ^= ((/* implicit */int) min((((unsigned int) var_9)), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_1 [i_2 + 1])))))));
            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned short)52264))) | (((/* implicit */int) var_1)))))));
        }
        for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_0 + 3]))), (((/* implicit */int) max((arr_7 [i_3 + 3] [i_0 - 2] [i_0 + 2]), ((short)-28581))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_25 += ((/* implicit */long long int) (+(((/* implicit */int) (short)-2302))));
                arr_14 [(_Bool)1] [(unsigned short)1] [(_Bool)1] = (-(((/* implicit */int) ((arr_11 [i_0 - 1] [(unsigned char)10] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54)))))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_3 + 1] [i_3 + 2])) ? (((((/* implicit */_Bool) 70368744177600LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 4) 
        {
            var_27 *= ((/* implicit */unsigned short) var_2);
            var_28 = ((/* implicit */unsigned char) ((-1709862613) / (arr_9 [i_0])));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                var_29 = (!(((/* implicit */_Bool) (unsigned char)24)));
                var_30 *= ((/* implicit */_Bool) ((unsigned short) var_3));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        {
                            arr_30 [i_9 + 1] [i_8] [0LL] [2ULL] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_5 + 2] [i_9 - 2])) ? (arr_11 [i_0 + 1] [i_5 + 2] [i_9 - 1]) : (((/* implicit */unsigned long long int) (-(-140673627))))));
                            var_31 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (1216366892309714251LL)));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 1) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned short) ((unsigned char) -7579142985250452622LL));
        var_33 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        var_34 *= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
    }
    var_35 = ((/* implicit */long long int) var_2);
}
