/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194457
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)9369))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_6 [0] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)26336)) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
            var_19 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
            arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 1]))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((((/* implicit */int) (short)26352)) & (((/* implicit */int) (unsigned char)196)))) : (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned short)21953))))));
        arr_12 [i_2] = ((/* implicit */long long int) var_7);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) arr_14 [i_4 - 1] [i_3] [i_5 - 1])) & (((/* implicit */int) arr_14 [i_4 - 3] [(unsigned char)8] [i_5 + 1])))))));
                        var_22 = ((/* implicit */unsigned long long int) var_7);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_4 + 1] [i_3] [i_5 + 1])) >> (((((/* implicit */int) (short)-13840)) + (13863)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_6 = 3; i_6 < 10; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned short i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        {
                            arr_31 [i_6] [i_3] [i_6] [i_7 + 2] [i_6] = ((/* implicit */unsigned char) (~(((var_3) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_9 [i_3] [i_7]))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_8])) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_6])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)192)))))));
            var_26 += ((long long int) (unsigned char)0);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                var_27 = ((/* implicit */long long int) arr_32 [i_10]);
                var_28 = ((/* implicit */long long int) (!(((arr_15 [i_2] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
            }
            var_29 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) (unsigned char)83)));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26340)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))))))));
            arr_38 [i_2] [i_2] = var_7;
        }
        var_31 ^= ((/* implicit */unsigned short) arr_33 [i_2]);
    }
    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)5)) % (((/* implicit */int) (short)-28161))))) + (min((arr_22 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) arr_18 [i_12] [(unsigned short)10] [i_12] [i_12])))))))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (short)26348)) ? (((/* implicit */int) arr_4 [i_12])) : (((/* implicit */int) (short)1809))))))) ? (max((((/* implicit */unsigned int) var_16)), (4294967290U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_12] [i_12] [i_12]))) & (min((5U), (((/* implicit */unsigned int) var_5)))))))))));
        var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_0)))))) ? (((/* implicit */int) ((short) (unsigned short)9369))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned short)7] [i_12] [(unsigned short)7]))))) % (((/* implicit */int) ((short) (short)-14930)))))));
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */int) (short)26340)) != (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) var_3))))), ((-(((/* implicit */int) var_13)))))))))));
    }
    var_36 |= (short)-3875;
    var_37 = ((/* implicit */unsigned char) var_1);
}
