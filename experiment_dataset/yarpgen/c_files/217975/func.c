/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217975
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
    var_14 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (var_7))))))), (((((((/* implicit */_Bool) 5571017464165267469ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7643258803599419432LL))) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (16872158076026891051ULL))) - (18446744073618909871ULL)))))));
    var_15 ^= (!((!(((/* implicit */_Bool) var_9)))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)-23234), (((/* implicit */short) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(((((/* implicit */_Bool) (short)-23234)) ? (-7643258803599419443LL) : (((/* implicit */long long int) 636483664)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(min((arr_3 [i_0]), (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)100)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */short) ((unsigned char) (short)32754));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-23395)) + (2147483647))) << ((((-(var_8))) - (2168650815U)))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) arr_5 [i_2 + 1] [i_2] [i_2]);
            arr_11 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_8 [i_0])))))));
            var_18 = ((/* implicit */signed char) ((min((((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_8 [i_0])))) < (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
        }
        for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(max((arr_0 [(unsigned char)8] [(unsigned char)8]), (((((/* implicit */int) arr_1 [(unsigned short)20])) - (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))))))));
            var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (short)5283)) : (((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (_Bool)1)), (-1163603464)))));
                            arr_24 [i_0] [i_6] = ((/* implicit */unsigned short) ((long long int) ((-7643258803599419432LL) / (((/* implicit */long long int) var_0)))));
                            arr_25 [i_0] [i_6] [i_4] [i_5 + 1] [i_6 - 2] [i_6] |= ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
            } 
        }
        arr_26 [i_0] = ((/* implicit */_Bool) (unsigned char)134);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0)))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
    {
        arr_29 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (max((((((/* implicit */_Bool) (short)23243)) ? (((/* implicit */unsigned long long int) arr_21 [i_7])) : (var_11))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_23 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [0LL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7 + 2] [i_7] [i_7]))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 3682360926U)) : (var_12))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)18806)))))))));
    }
    var_24 |= (unsigned char)97;
}
