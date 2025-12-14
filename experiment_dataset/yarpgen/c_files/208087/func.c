/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208087
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */signed char) (unsigned short)65525);
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 918561761)) ? (arr_4 [(unsigned char)20] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((int) -918561762)))));
                    var_17 = ((/* implicit */long long int) arr_6 [(signed char)12] [i_1] [(unsigned short)19] [8LL]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (var_6)))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_2))))))) / (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))))))));
    var_19 *= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_12)))), (min((((/* implicit */unsigned int) 918561766)), (var_5))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_13)), (((unsigned short) -918561778)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */signed char) min((min(((+(-918561753))), (((/* implicit */int) arr_2 [i_3])))), (min((((((/* implicit */int) var_2)) | (((/* implicit */int) var_10)))), (((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 4; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] |= min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned short)10] [i_6] [i_5])) ? (((/* implicit */int) var_2)) : (-918561778))))))), (arr_6 [i_3] [i_3] [i_6] [i_6]));
                            arr_26 [(_Bool)1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_20 ^= ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
                            var_21 ^= ((/* implicit */short) ((((((-3123920238905583608LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1]))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [16LL] [11LL] [i_3])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_11))))) ? (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_9))) : (((/* implicit */unsigned int) var_12))))) : ((-(((unsigned long long int) (unsigned short)65535))))));
                            arr_29 [i_3 + 3] [8LL] [i_4] [8LL] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5313087579618831329LL)) ? (((/* implicit */int) (unsigned short)36341)) : (min((-918561767), (((/* implicit */int) (short)19184))))));
                        }
                        arr_30 [i_5] [i_5 - 4] [i_4] [i_5] &= ((/* implicit */short) ((((/* implicit */int) (((-(arr_24 [i_6] [i_5] [4ULL] [i_4] [i_5] [i_3]))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_3] [(signed char)7] [(_Bool)1])), (arr_28 [5U] [i_6] [i_6] [(signed char)7] [(_Bool)1] [(unsigned short)7]))))))) > (((/* implicit */int) ((((/* implicit */long long int) -918561778)) > (4291867627050784673LL))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((-918561767), (((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_15)), (var_13)))) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_9])))), (max(((-(((/* implicit */int) arr_32 [i_5] [i_4] [i_5] [i_9] [(unsigned char)12])))), (((/* implicit */int) ((unsigned char) (signed char)112)))))));
                                arr_36 [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) 918561766)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) (unsigned char)35)));
                            }
                        } 
                    } 
                    arr_37 [11LL] [i_4] [i_5] [11LL] = ((/* implicit */unsigned char) max((((/* implicit */short) var_10)), (((short) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4])) / (((/* implicit */int) var_2)))))));
                    arr_38 [i_4] = ((/* implicit */_Bool) ((int) (+((~(((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned int i_11 = 4; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    arr_41 [i_11] [14U] &= ((/* implicit */_Bool) var_13);
                    var_23 = ((/* implicit */unsigned long long int) var_6);
                    arr_42 [i_4] = ((/* implicit */int) (_Bool)1);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                arr_47 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_12] [(unsigned short)7])) ? (18446744073709551615ULL) : (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (598413485364841408ULL)))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned short i_15 = 1; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_24 &= (+(((/* implicit */int) arr_7 [i_12] [i_12] [i_15 - 1])));
                            var_25 = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
}
