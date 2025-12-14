/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208061
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
    var_14 = var_0;
    var_15 = ((/* implicit */signed char) min((var_13), (((/* implicit */short) var_5))));
    var_16 = ((/* implicit */int) var_4);
    var_17 = ((/* implicit */unsigned short) max(((+(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) var_2))), (min((((/* implicit */unsigned long long int) var_12)), (var_2)))))) ? (((1361204910U) - (((/* implicit */unsigned int) -2115662762)))) : ((~(((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_0])))))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)7)), (11319485880725015682ULL)))) ? (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))) : (((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))) || (((/* implicit */_Bool) (~(arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((8714846610256541492ULL), (((/* implicit */unsigned long long int) 587450943)))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (7127258192984535955ULL) : (((/* implicit */unsigned long long int) 1053683035)))))))));
        /* LoopSeq 3 */
        for (int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min(((-(((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (4012470843010373875ULL))))), (max((((((/* implicit */_Bool) var_12)) ? (var_11) : (3781083231334533914ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_8)), (arr_7 [i_2] [i_1]))))))));
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) arr_7 [i_1 + 1] [i_2 + 1]);
        }
        for (int i_3 = 3; i_3 < 19; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(var_6)))) : ((-(1053683035))))), ((-(((/* implicit */int) max((var_12), (((/* implicit */short) var_5)))))))));
                arr_15 [i_1] [i_3 - 2] [i_3] [i_1] = ((/* implicit */unsigned short) var_4);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_12))))), (((unsigned long long int) arr_14 [i_4]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_4 [i_1]))))), (((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65532))))))) : ((+(max((((/* implicit */unsigned long long int) (unsigned char)248)), (var_2)))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_1]))))) >= (max((arr_3 [i_1]), (arr_11 [i_1] [i_4])))));
                var_24 |= ((/* implicit */signed char) ((unsigned char) min((min((1053683039), (((/* implicit */int) (unsigned char)245)))), ((~(-1866527502))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) ((short) arr_6 [i_1 - 3] [i_1]));
                    var_26 = ((/* implicit */int) var_12);
                }
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_7 [i_3] [i_7])) - (-1053683031)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 2] [i_1 + 1] [i_1 - 3] [i_1 + 1]))) : (min((((/* implicit */unsigned long long int) ((unsigned int) arr_12 [(short)8]))), (((arr_6 [i_1] [16]) - (((/* implicit */unsigned long long int) var_7))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        arr_27 [i_1] [i_3 - 3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 4057381605U)) : (var_11)))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_5))))));
                        var_28 = ((/* implicit */unsigned char) arr_19 [i_3] [i_5] [i_7] [i_8]);
                        var_29 -= ((((((/* implicit */_Bool) arr_6 [i_5] [0U])) ? (((/* implicit */int) arr_17 [i_7] [i_8 + 1])) : (((/* implicit */int) arr_22 [i_8] [(unsigned short)2] [(unsigned short)2] [i_1 - 3])))) * (((int) (unsigned char)248)));
                        var_30 = ((arr_24 [i_1]) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) arr_24 [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        arr_30 [i_1] [i_1] [i_5] [i_7] [i_9] = ((/* implicit */unsigned short) arr_17 [i_3 - 2] [i_3]);
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_5] [i_3 - 3] [i_1 - 2])))))));
                        var_32 = ((/* implicit */unsigned short) ((unsigned int) var_1));
                    }
                }
                var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)112)), (max((((/* implicit */short) (unsigned char)33)), ((short)-21225)))));
                arr_31 [i_1 - 1] [i_3] [i_1] = ((/* implicit */unsigned int) min(((-(arr_14 [i_1 + 1]))), (((((/* implicit */_Bool) max((arr_25 [i_1] [i_1] [i_1 + 1] [i_3 + 1] [i_5]), (((/* implicit */unsigned long long int) var_10))))) ? (((var_3) << (((var_9) - (14228911917215720617ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)248)))))))));
                arr_32 [i_1 - 1] [i_3] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (1658436167U) : (((/* implicit */unsigned int) 1053683030))))) != (arr_13 [i_3 - 2])));
            }
            arr_33 [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) var_1));
            var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) arr_3 [(unsigned short)6])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_18 [i_1 - 3]))))))) : (((((/* implicit */_Bool) ((arr_3 [12ULL]) << (((((/* implicit */int) var_13)) - (32709)))))) ? (((/* implicit */int) arr_19 [i_1 - 3] [i_1 - 2] [i_3] [i_3 - 1])) : ((~(((/* implicit */int) var_10))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            var_35 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (arr_35 [i_10]))))) : ((-(arr_3 [i_10])))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) arr_21 [i_1] [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_10]))) : (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10] [i_1 - 3] [i_1 - 3])))))))));
            var_36 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((-156856370) / (((/* implicit */int) (unsigned char)219))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10] [i_1] [i_1] [i_1 - 3])) ? (16) : (((/* implicit */int) arr_24 [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) * (5944794712362574324ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_10])))))));
        }
        var_37 = ((unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1053683039)), (7403120941416321991ULL))))));
    }
}
