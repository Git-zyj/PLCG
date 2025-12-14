/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27972
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_8))));
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5810343292310963623ULL)) ? (7294048218537591392ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((11152695855171960202ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))))))))));
        var_13 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (4790250823980087632ULL) : (((/* implicit */unsigned long long int) 906572265U))))))))));
        var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((15933020449553772416ULL), (((/* implicit */unsigned long long int) var_2))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2513723624155779199ULL), (((/* implicit */unsigned long long int) (short)19978))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)123)), (arr_4 [i_1])))))))));
        arr_6 [i_1 + 1] = ((/* implicit */short) ((_Bool) 448515669U));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (var_8)))))) ? (15933020449553772416ULL) : (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_10))))))));
        arr_7 [i_1 + 3] = ((/* implicit */short) (((+((~(var_8))))) << (((var_8) - (12148851235023162088ULL)))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)215)) % (((/* implicit */int) (short)15))));
    }
    for (int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [2ULL] [i_2 + 2]))));
            arr_16 [i_2] = ((/* implicit */unsigned long long int) arr_9 [8ULL] [i_3]);
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : ((+(7648279562995993782LL))))))));
            var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2 + 2])) + (0)));
        }
        arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned short) arr_11 [i_2 - 1] [i_2 + 4])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_1)))))))) ? (max((((/* implicit */unsigned long long int) (short)30756)), (7766490965217843278ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)233)) << (((((/* implicit */int) (short)22643)) - (22641))))), (((((/* implicit */int) arr_8 [i_2 + 4] [i_2])) ^ (((/* implicit */int) (unsigned short)16320)))))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) arr_8 [i_2] [i_2])), (var_4))), (((/* implicit */unsigned short) arr_10 [i_2 + 1])))))) / (7294048218537591392ULL)))));
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | ((+(((/* implicit */int) var_5))))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)15642)), (1055886516U)))), ((~(10457014476764842487ULL)))))));
        var_22 += ((/* implicit */unsigned short) max((arr_13 [i_2] [i_2]), (((/* implicit */short) ((max((15933020449553772416ULL), (((/* implicit */unsigned long long int) var_7)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22446))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_23 += ((/* implicit */long long int) (unsigned char)9);
        var_24 -= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) var_2)) != (var_3))))));
    }
    var_25 ^= ((/* implicit */unsigned short) var_10);
}
