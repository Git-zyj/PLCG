/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45553
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
    var_17 += ((/* implicit */unsigned short) max((var_10), (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)18082))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47553)) ? (((/* implicit */unsigned int) 667261629)) : (4294967269U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((~(var_8))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((11137662889923575444ULL) <= (((/* implicit */unsigned long long int) arr_2 [i_0] [4U]))))), (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((signed char) (((~(var_5))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (var_1)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (arr_4 [i_1] [i_1])))), (arr_5 [i_1])));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_19 = arr_4 [i_1] [i_2 + 1];
            var_20 = ((/* implicit */unsigned short) max((arr_10 [(_Bool)1] [i_2] [i_1]), (((/* implicit */short) ((min((((/* implicit */long long int) 595974542U)), (arr_8 [i_1]))) <= (((/* implicit */long long int) -667261630)))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_17 [i_2] [i_2] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4] [i_5])) ? (min((var_5), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])))) : (((((((/* implicit */_Bool) arr_5 [6])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_13 [i_4] [i_2] [i_3]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 667261630)) : (arr_11 [i_1] [i_1] [i_3]))))))));
                            arr_18 [i_2] [i_2 - 1] [i_2] [i_2] [10U] [i_2] = ((/* implicit */unsigned char) (((~(var_10))) | (((/* implicit */int) ((667261636) < (-667261623))))));
                            arr_19 [i_1] [i_2] [i_3 - 1] [i_4 + 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (short)28397);
                        }
                    } 
                } 
            } 
            arr_20 [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((((/* implicit */int) (unsigned short)743)) / (arr_4 [i_2] [i_1]))) + ((+(((/* implicit */int) (signed char)-29))))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_24 [i_1] [i_6] = ((/* implicit */long long int) arr_15 [i_1] [i_1] [6] [i_6] [i_6]);
            arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_1])) < (var_14)));
        }
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            arr_29 [i_7] [i_7] = ((/* implicit */short) var_7);
            arr_30 [i_1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((+(4938223737877179343LL))), (((/* implicit */long long int) ((signed char) 667261622))))))));
            arr_31 [i_7] [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22299)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [i_1] [i_7])))) ? (((arr_13 [i_1] [i_1] [i_7]) * (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) arr_9 [i_7 + 1] [(_Bool)1] [3])))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (1716757461U)))), (max((var_5), (((/* implicit */unsigned long long int) var_11))))))));
        }
        arr_32 [i_1] = ((((/* implicit */_Bool) (short)3434)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned int) arr_10 [i_1] [(_Bool)1] [(unsigned short)10])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -667261626)))))))));
    }
    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
    {
        arr_35 [5LL] = ((/* implicit */unsigned short) ((unsigned char) var_14));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8]))) & (var_7)))) < ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8]))) : (min((((/* implicit */unsigned long long int) var_9)), (var_5)))))));
        arr_36 [i_8] [i_8] = ((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8]);
        /* LoopSeq 2 */
        for (int i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            arr_39 [i_8] [i_9] = ((/* implicit */long long int) ((((unsigned int) max((3622309862U), (((/* implicit */unsigned int) var_0))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
            arr_40 [i_9] = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) arr_4 [i_9 - 1] [i_9 + 1])) | (arr_9 [i_9 + 1] [i_9 + 1] [i_9 - 1]))));
            arr_41 [i_8] [i_9] [i_9] = ((/* implicit */short) (~((((~(arr_38 [i_9 - 1] [(_Bool)1] [i_8]))) & (max((arr_8 [i_9]), (((/* implicit */long long int) (signed char)16))))))));
            arr_42 [17] = ((/* implicit */unsigned short) arr_4 [i_9 + 1] [i_9 + 1]);
        }
        for (int i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                arr_48 [i_8] [i_8] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) max((arr_16 [i_8] [i_10] [i_8] [i_11]), (((/* implicit */int) var_3)))))) + (((((/* implicit */_Bool) (~(2147483620)))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_8]), (var_15)))) : (((((/* implicit */unsigned long long int) 3U)) & (var_8)))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_4))));
                var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483611)) <= (10278759896851482091ULL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_10] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8119)) <= (-667261628)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1624274946011504169LL)) || (((/* implicit */_Bool) 872720731U)))))))));
            }
            for (unsigned short i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_8 [i_8]) + (-4938223737877179343LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) | (arr_13 [i_8] [i_10 - 1] [i_12 - 2])))));
                arr_51 [i_10] = ((/* implicit */unsigned short) (~(max((((((/* implicit */unsigned long long int) arr_16 [i_10] [i_12] [i_10] [(_Bool)1])) - (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))))));
            }
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                arr_54 [i_10] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_46 [i_13] [i_10])) | (var_16)))) | ((+(var_5))))));
                arr_55 [i_8] [i_10] [i_10] = ((/* implicit */unsigned char) 2445391398U);
            }
            for (unsigned char i_14 = 2; i_14 < 15; i_14 += 4) 
            {
                arr_59 [i_8] [i_10] [i_10] [i_14] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned int) arr_26 [i_8] [i_8] [i_14 - 1])), (var_2))));
                arr_60 [i_14] |= ((/* implicit */unsigned short) min((((var_8) & (((/* implicit */unsigned long long int) arr_11 [i_10 + 2] [i_14] [17])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25502)) ? (((((/* implicit */_Bool) (short)3828)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_8] [(_Bool)1] [i_10] [i_14])))) : (var_14))))));
            }
            arr_61 [i_8] [i_10] [i_10] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) && (((/* implicit */_Bool) arr_47 [i_8] [i_8] [i_10 + 2] [i_10 + 1]))))), (-2147483622)));
            var_25 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_11 [i_8] [i_8] [i_8]))) - (var_14)));
            var_26 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_57 [i_8] [i_8] [i_8] [i_8]) ? (var_11) : (((/* implicit */int) arr_33 [9] [i_10]))))) ? (arr_13 [i_10 + 1] [i_10 + 2] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_13))))))) <= (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */long long int) (-(var_2)))) : (arr_37 [i_10 + 2] [i_10 - 1] [i_10 - 1]))))));
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 15; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                {
                    arr_68 [i_8] [i_8] [i_16] [i_8] = ((/* implicit */short) (_Bool)1);
                    var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_8] [i_15] [i_16])) ? (((long long int) ((((/* implicit */int) arr_49 [i_8] [i_15] [i_16])) <= (((/* implicit */int) var_9))))) : (((((((/* implicit */_Bool) arr_21 [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_8] [i_15]))) : (var_12))) & (max((var_16), (((/* implicit */long long int) (unsigned short)313))))))));
                    arr_69 [i_16] = ((/* implicit */short) ((((/* implicit */int) min((arr_63 [i_8]), (arr_14 [i_8] [i_8] [i_8] [i_16 + 1])))) + (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_15])) : (((/* implicit */int) arr_33 [(unsigned char)17] [i_15]))))))));
                }
            } 
        } 
    }
}
