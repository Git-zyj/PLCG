/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49169
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_1)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 8736916797811267461ULL)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] [i_2 + 1] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 3])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)8))))) : (arr_1 [i_0])));
                arr_10 [i_0] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (unsigned char)165)) && (((/* implicit */_Bool) arr_4 [i_0])));
                arr_11 [i_0] = ((unsigned char) var_0);
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)150)))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)56902)) <= (((((/* implicit */int) (signed char)-15)) * (((/* implicit */int) (short)3537))))))))))));
                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)44)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(unsigned char)15] [i_0] [i_3]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
                var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) arr_3 [i_0] [i_1] [6LL])), (-309681782286150298LL))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_3]))));
            }
            arr_17 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_0] [i_0])))));
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1] [i_1])), ((unsigned short)28063)))) < (((/* implicit */int) min(((unsigned short)6658), (((/* implicit */unsigned short) (signed char)85)))))))))))));
            var_15 -= ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((unsigned short) 4294967295U)))))));
        }
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */signed char) var_5);
            var_16 = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))) - (((/* implicit */int) (_Bool)1))));
            var_17 = ((/* implicit */unsigned short) 309681782286150299LL);
        }
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)16699), (((/* implicit */short) arr_5 [10ULL]))))) ? ((-(((/* implicit */int) (unsigned char)103)))) : (((/* implicit */int) ((min((-1126376617), (((/* implicit */int) arr_12 [(unsigned char)4] [(unsigned char)4])))) <= (((/* implicit */int) var_10))))))))));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_29 [i_5 + 4] [i_6 + 1] [(unsigned short)13] [15U]), (arr_29 [i_5 - 2] [i_6 + 1] [i_6] [i_6 - 1])))), ((-((-(((/* implicit */int) var_3))))))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            arr_34 [i_8] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_4))))));
                            var_20 |= ((/* implicit */unsigned short) (~((~(4294967274U)))));
                            var_21 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_27 [12LL] [12LL])) & (((/* implicit */int) (unsigned char)135)))) <= (((((/* implicit */int) var_4)) - (((/* implicit */int) var_6)))))) || (var_0)));
                            arr_35 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)50734);
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 2547406153U)) ? (((/* implicit */int) ((-6643130716260703398LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 655005519)) ? (-1310416309) : (1310416322)))));
                            arr_40 [i_5] [i_0] [i_5] [i_5] [i_9] [i_5] [i_0] = ((/* implicit */int) (-(min((4294967286U), (((/* implicit */unsigned int) arr_6 [i_6 + 1] [i_5 + 1] [i_0]))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            arr_45 [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (((-(((/* implicit */int) arr_39 [i_10] [i_10] [(unsigned short)13] [i_10] [(_Bool)1] [i_10] [(unsigned char)14])))) > (((/* implicit */int) (!(((/* implicit */_Bool) 19U))))))))));
                            arr_46 [i_0] [i_5] [i_0] [i_0] [i_10] = (unsigned char)86;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        var_23 ^= ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) (short)21930)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)73)))), (((/* implicit */int) ((arr_23 [i_11] [i_11] [i_11]) < (1541309721013358140LL))))))));
        var_24 = ((/* implicit */short) (-(7193450600830814571ULL)));
        var_25 = (-(((/* implicit */int) ((_Bool) (unsigned char)11))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) 1683878775U))) >> (((var_9) - (1433198213382383821ULL)))));
}
