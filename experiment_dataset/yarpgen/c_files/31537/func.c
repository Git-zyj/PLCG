/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31537
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
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [(short)15])) ? (max((((/* implicit */int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) 1001874786U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-11585))))), (((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)147))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)147))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned int) ((short) 67108863));
                            arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ^ (3144903613U)))) ? (((18132948883548880015ULL) >> (((((/* implicit */int) var_4)) - (23082))))) : (((/* implicit */unsigned long long int) ((((var_9) + (2147483647))) >> (((((/* implicit */int) (unsigned char)51)) - (34))))))));
            }
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) arr_10 [i_5] [10U])))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (!((_Bool)1))))) ? (((((/* implicit */_Bool) (short)-16957)) ? ((~(((/* implicit */int) (unsigned short)39799)))) : (((((/* implicit */int) arr_16 [i_0] [i_5] [i_0])) >> (((2379516312U) - (2379516294U))))))) : (((/* implicit */int) (unsigned char)208))));
                        var_19 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)39799))))));
                        arr_24 [i_0] [i_0] [i_5] [i_0] [i_7] = ((/* implicit */unsigned short) ((signed char) 3144903613U));
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_5] [(short)8] [i_7]))) != (6391598135383088104ULL))))) != (2097151U)));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) arr_11 [i_0] [i_5] [i_0] [i_5])));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 12055145938326463528ULL))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)205)) | (((/* implicit */int) arr_21 [i_8 - 1]))));
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 16; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    {
                        arr_34 [i_0] [i_8 - 1] [(_Bool)1] [(short)9] = ((/* implicit */long long int) (_Bool)0);
                        var_24 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)55))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)151)) < (((/* implicit */int) (short)-20473))))) : (var_5)))) > (((((/* implicit */unsigned long long int) ((arr_28 [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104)))))) * (((((/* implicit */_Bool) arr_11 [i_10] [(unsigned char)14] [(unsigned char)14] [i_0])) ? (6391598135383088088ULL) : (((/* implicit */unsigned long long int) -1015260910)))))));
                    }
                } 
            } 
            var_25 += ((/* implicit */short) (-((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2800))) + (var_0)))))));
            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_8] [i_8])))))) * (((((/* implicit */_Bool) arr_25 [i_0] [11LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1]))) : (6391598135383088088ULL)))))));
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_37 [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((short) var_1))))));
            arr_38 [i_0] = (+(((/* implicit */int) ((arr_28 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_11] [i_0] [i_11] [i_11])) < (var_5)))))))));
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned char)105))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        arr_41 [i_12] [i_12] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_9) > (((/* implicit */int) var_1))))))) - (((arr_0 [i_12] [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        var_28 -= ((/* implicit */unsigned char) var_6);
        arr_42 [(signed char)4] [i_12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned int) arr_20 [(unsigned short)2] [(signed char)16])) : (var_13)))) ? ((-(((/* implicit */int) (unsigned char)108)))) : (var_5))), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) != (-879618841)))), (((short) (signed char)97)))))));
    }
    var_29 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_5)) == (var_6)));
}
