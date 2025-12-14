/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207999
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
    var_19 = ((/* implicit */signed char) var_3);
    var_20 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (signed char)69)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) >= (13302554599937602837ULL)))));
        var_22 = ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) ((((/* implicit */unsigned long long int) 65280)) != (2ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_23 *= (short)2731;
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((min((14665901144289095093ULL), (((/* implicit */unsigned long long int) -167412897465270275LL)))) < (min((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])), ((+(10348041339563996804ULL)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) -1061006321)) % (8098702734145554812ULL))) > (max((8098702734145554812ULL), (((/* implicit */unsigned long long int) (short)-11422)))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((unsigned int) arr_6 [i_3]));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        arr_21 [i_6] [i_6] [i_3] [i_5] [i_4] [i_3] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8474))) + (10348041339563996824ULL)));
                        /* LoopSeq 1 */
                        for (int i_7 = 4; i_7 < 15; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3788963946U))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_3] [i_7] [i_5 - 2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)18)))))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (453748729) : (arr_13 [i_5 - 2])));
                        arr_25 [i_5] = ((/* implicit */short) ((((((/* implicit */int) (short)-8334)) + (2147483647))) << (((arr_3 [i_5 + 3] [i_6]) - (1667729063U)))));
                    }
                } 
            } 
        } 
        arr_26 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4LL)) - ((~(575334852396580864ULL)))));
        arr_27 [i_3] = ((/* implicit */_Bool) ((1235917049511543354ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (unsigned short)31300)) : (((/* implicit */int) (unsigned char)185)))))));
    }
}
