/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45258
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
    var_17 = ((/* implicit */unsigned short) (signed char)-1);
    var_18 = ((/* implicit */short) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) <= (min((var_4), (((/* implicit */unsigned int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_11)), (2203774880U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_4 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) var_4))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)7)) / (((/* implicit */int) (unsigned char)178))));
            var_23 = ((/* implicit */signed char) ((unsigned char) (signed char)-25));
            arr_9 [i_1] [8LL] [i_1] = ((/* implicit */short) 9519312041990538035ULL);
        }
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) var_10);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_9))));
        }
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 3; i_5 < 12; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_26 = ((/* implicit */long long int) arr_17 [i_5]);
                var_27 = ((/* implicit */unsigned int) (+(((int) (_Bool)1))));
                var_28 = ((/* implicit */unsigned int) max(((signed char)98), (((/* implicit */signed char) (_Bool)1))));
            }
            arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-47)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_5] [13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_5])))) : (var_15)));
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            var_29 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (14326255371290791329ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))) : (16032177757673571177ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_4] [i_7])) / ((+(var_0)))))));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                var_30 = var_13;
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 4) 
                {
                    var_31 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9 + 2] [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (634065261U)))), (((((/* implicit */_Bool) arr_24 [i_9] [i_9 - 1] [i_9 - 4] [i_7])) ? (((/* implicit */long long int) arr_24 [i_4] [i_9 - 4] [i_9 - 3] [i_7])) : (arr_0 [i_9 - 4])))));
                    arr_28 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & ((+(arr_27 [i_9 + 1] [i_9 - 3] [i_9 - 1] [i_9 + 2])))));
                }
                for (unsigned short i_10 = 4; i_10 < 12; i_10 += 4) 
                {
                    arr_32 [i_4] [i_4] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) 9223372036854775807ULL))), (((((((/* implicit */int) var_6)) + (2147483647))) >> ((((~(((/* implicit */int) var_1)))) - (6326)))))));
                    var_32 = ((/* implicit */unsigned short) var_13);
                }
                for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (short)-3276))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_19 [i_11 + 3] [i_11] [i_11 + 3] [i_11 + 3])))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) <= (arr_24 [i_4] [i_7] [i_8] [i_7])))), (arr_23 [(unsigned short)7] [i_7])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)108))));
                }
                /* vectorizable */
                for (short i_12 = 3; i_12 < 12; i_12 += 4) 
                {
                    arr_37 [i_7] [i_8] [i_7] = ((/* implicit */short) ((unsigned long long int) arr_35 [i_12 + 1] [i_12 - 1]));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) var_16);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((((/* implicit */_Bool) ((short) var_16))) ? ((+(2065863811U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */int) (signed char)72)) % (arr_24 [i_4] [i_7] [(signed char)9] [i_7])));
                    }
                }
            }
        }
        var_38 = ((/* implicit */_Bool) var_15);
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            var_39 = ((/* implicit */unsigned short) var_7);
            var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (min((17626165575495803746ULL), (((/* implicit */unsigned long long int) (signed char)-5)))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) (short)32745)))))))) ? (((/* implicit */long long int) ((unsigned int) var_15))) : (min((arr_0 [i_14]), (((/* implicit */long long int) (-(((/* implicit */int) (short)-32756))))))));
            var_41 = ((/* implicit */unsigned char) ((min((((unsigned long long int) arr_25 [i_14] [i_14] [i_4] [i_4] [i_4] [i_4])), (((/* implicit */unsigned long long int) ((8927432031719013580ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(signed char)0] [i_14])))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32732), ((short)14613)))))));
        }
        var_42 -= ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */unsigned long long int) (-(((4239179934U) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)44337)) : (((/* implicit */int) arr_25 [1ULL] [i_4] [(_Bool)1] [i_4] [7U] [i_4]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_11))) : ((-(arr_6 [i_4]))))));
    }
    var_43 = ((/* implicit */_Bool) max((((long long int) (~(var_5)))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (var_7))) ? (max((-4316176857996912995LL), (((/* implicit */long long int) var_12)))) : (var_0)))));
}
