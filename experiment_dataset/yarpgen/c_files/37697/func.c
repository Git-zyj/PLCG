/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37697
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_10 = 9223372036854775807LL;
                        var_11 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) < (((/* implicit */int) var_3))));
        arr_12 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_7))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 2904350775U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [18ULL])) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_4])) | (((/* implicit */int) var_1))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65526)) + (((/* implicit */int) var_3)))))));
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_14 += ((/* implicit */signed char) ((long long int) ((unsigned char) arr_4 [i_5] [i_5] [i_5])));
        var_15 = (-(((((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_5])), (arr_1 [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57360))) < (var_5))))) : (min((((/* implicit */unsigned int) var_9)), (3576614416U))))));
        var_16 *= ((/* implicit */_Bool) (unsigned short)3876);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) | (((/* implicit */int) arr_4 [i_6 + 1] [i_5] [i_5]))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)8177)) != (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))));
            arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_6 + 1])) < (((/* implicit */int) arr_19 [i_6 + 1]))));
            /* LoopSeq 1 */
            for (short i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((short) (unsigned short)8185));
                arr_27 [(signed char)14] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!((_Bool)0)));
            }
        }
        /* vectorizable */
        for (unsigned short i_8 = 4; i_8 < 19; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 + 2] [i_9] [i_8 + 1] [i_8 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_8 - 3] [i_9] [i_8] [i_8 - 2])))))));
                var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                var_21 |= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_8 - 4])) == (((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 1] [5ULL] [i_8 + 2]))));
            }
            var_22 = ((/* implicit */int) ((unsigned int) arr_21 [i_5] [i_8 - 4] [19LL]));
            arr_34 [i_5] [(signed char)10] = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_29 [i_5] [i_8] [i_8])))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            arr_37 [i_5] [i_10] [i_5] |= ((/* implicit */unsigned char) arr_6 [i_5] [(unsigned short)23] [i_5] [i_10]);
            arr_38 [i_5] [i_5] = ((((/* implicit */int) ((4551336785577603012LL) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))) | (arr_1 [i_5]));
            var_23 = ((/* implicit */short) (_Bool)1);
        }
        arr_39 [(signed char)12] &= ((/* implicit */unsigned int) ((arr_0 [(_Bool)1] [i_5]) ? (((arr_0 [i_5] [i_5]) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_0 [(short)9] [i_5])))) : (((/* implicit */int) max((arr_0 [i_5] [i_5]), (arr_0 [i_5] [i_5]))))));
    }
    var_24 = ((/* implicit */_Bool) 4763920438738086416ULL);
    var_25 = ((/* implicit */unsigned char) ((var_0) == (((/* implicit */int) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2)))))))));
    var_26 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8175))));
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_6)), ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))))))))));
}
