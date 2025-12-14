/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36811
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0 - 2])))) >> (((int) (_Bool)1))));
                arr_6 [i_1] [i_1 + 2] = ((/* implicit */short) (~((((_Bool)1) ? (((((/* implicit */_Bool) var_19)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58951))))) : (1593317823U)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [17ULL] [i_2] &= ((/* implicit */short) ((_Bool) (-(arr_7 [i_2]))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */int) (signed char)65)), ((-(((((/* implicit */int) arr_11 [i_2] [i_3] [(signed char)2])) << (((((/* implicit */int) (unsigned char)128)) - (124))))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_22 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) (~(((9223372036854775807LL) >> (((((/* implicit */int) arr_14 [i_3] [i_3])) - (17359)))))))) : (((/* implicit */unsigned short) (~(((9223372036854775807LL) >> (((((((/* implicit */int) arr_14 [i_3] [i_3])) - (17359))) + (38178))))))));
                            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)6584)) : (((/* implicit */int) (unsigned short)8254)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50)))))));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((signed char) (unsigned short)54405))) ? (((((/* implicit */_Bool) var_9)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                    arr_23 [i_3] [i_3] [i_8] = ((/* implicit */unsigned char) arr_15 [i_3] [i_2]);
                }
                for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                {
                    arr_27 [i_3] [i_3] [i_7] [(_Bool)1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_2] [i_3] [i_3]))))) * (((arr_25 [i_3] [(unsigned char)3] [(_Bool)1]) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))))) ? (((((6454968513143407888ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14336))))) >> (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (158123749U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)6377)) : (0)))) ? (2147483647) : (((/* implicit */int) max((var_19), (((/* implicit */unsigned char) arr_20 [i_3]))))))))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_2])))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (_Bool)1))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (_Bool)1)))))) ? (min((max((((/* implicit */int) arr_21 [3])), (1610612736))), (((int) 0)))) : (((/* implicit */int) arr_13 [i_9] [i_3] [i_9]))));
                }
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) (((((-((+(((/* implicit */int) (short)11639)))))) + (2147483647))) >> (max((((/* implicit */int) (_Bool)1)), (min((-1), (((/* implicit */int) (unsigned char)40))))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) % (((/* implicit */int) (signed char)-64)))), (((/* implicit */int) (_Bool)1)))))));
                    arr_32 [i_3] [i_7] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) (_Bool)1)))))));
                }
                var_30 = ((/* implicit */short) var_0);
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)27)))) % (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) arr_28 [i_2] [(unsigned short)15] [i_7])) : (((/* implicit */int) (unsigned short)26053))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)39)))))))) : (628413838)));
            }
            arr_33 [i_3] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) max((max(((short)11), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)72))))))))));
        }
        for (signed char i_11 = 4; i_11 < 18; i_11 += 4) 
        {
            var_32 = ((/* implicit */signed char) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_14 [i_2] [i_11]))))));
            var_33 = ((/* implicit */signed char) 422545908069680914ULL);
        }
        var_34 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_2] [i_2] [i_2]), (((/* implicit */short) (_Bool)1)))))) | ((+(var_7))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)1))))) ? (((((/* implicit */_Bool) (short)5)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [5LL] [i_2])) ? (((/* implicit */int) (unsigned short)32761)) : (((/* implicit */int) (_Bool)1))))))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_11)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_34 [i_2] [i_2])) ? (((/* implicit */int) arr_34 [i_2] [i_2])) : (((/* implicit */int) (signed char)96))))));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))));
}
