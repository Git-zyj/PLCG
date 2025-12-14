/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226090
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3775982629403901342ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))))))));
        arr_3 [i_0] = ((/* implicit */short) ((982557994U) / (1073741824U)));
        arr_4 [i_0 - 1] = (unsigned short)21771;
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))))))));
        arr_6 [6U] = (((-(((/* implicit */int) arr_1 [i_0 - 1])))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
    var_18 = ((/* implicit */_Bool) 1048320);
    var_19 -= ((/* implicit */unsigned char) (signed char)127);
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((((/* implicit */long long int) 1073741815U)) % (2147475456LL)))));
        arr_9 [i_1] [i_1] |= ((/* implicit */_Bool) -1048316);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_21 -= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)97)), (((((/* implicit */int) ((unsigned char) var_14))) << (((var_12) - (1120759376)))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned long long int) -2147475457LL)) | (arr_12 [(_Bool)1]))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1073741815U) < (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))) : (((15117557747891134925ULL) / (arr_12 [i_2])))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((15117557747891134932ULL) != (((/* implicit */unsigned long long int) 2797825010U)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) min((arr_0 [i_3] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2199023255551ULL)))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            var_23 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 3284185923U)))));
            var_24 &= ((/* implicit */short) arr_0 [i_3] [i_3]);
            var_25 *= ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_3]));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_9))));
            var_27 *= ((/* implicit */unsigned short) arr_17 [i_3] [i_3]);
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_23 [i_5] = var_4;
            arr_24 [i_5] = ((/* implicit */unsigned char) ((long long int) var_4));
            arr_25 [i_5] = ((/* implicit */_Bool) arr_20 [i_5]);
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) arr_16 [i_3])) : (((/* implicit */int) arr_16 [i_3])))) >= (((((/* implicit */_Bool) arr_19 [(signed char)0] [(unsigned short)0] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_3])))))))));
        var_29 = ((/* implicit */long long int) arr_1 [i_3]);
        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-45))))) : (3221225471U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3] [i_3])))))));
    }
}
