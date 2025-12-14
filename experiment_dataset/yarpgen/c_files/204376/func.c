/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204376
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
    var_12 &= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) 4331966587612699704ULL);
        arr_4 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)64)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65527)))) : (((/* implicit */int) ((short) arr_1 [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) != (min((arr_5 [i_0]), (max((((/* implicit */unsigned long long int) (unsigned short)65519)), (arr_0 [i_0])))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
        }
        for (short i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 + 2] [i_2 + 1])))))));
            arr_10 [i_0] = ((/* implicit */long long int) var_6);
            var_15 ^= ((short) (((-(arr_6 [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)11441), ((unsigned short)22563)))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_3]))) : (var_7))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) arr_19 [i_4] [i_3] [i_4])) : (((/* implicit */int) arr_12 [i_3])))))))) - (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_17 [i_3])))) <= (((/* implicit */int) (!(arr_1 [i_0])))))))));
                        arr_20 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)75)), (var_2)))) < (((/* implicit */int) arr_13 [i_0] [i_3]))))));
                        arr_21 [i_5] [i_4] [i_5] [i_3] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_0] [i_5] [(_Bool)1] [i_4] [i_0] [i_0]))))), (min((2799634624U), (((/* implicit */unsigned int) (unsigned short)0)))))))));
                    }
                } 
            } 
            var_17 -= (unsigned short)54095;
            arr_22 [i_0] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0])))))) < (1596318153U)));
            var_18 = (((((!(((/* implicit */_Bool) var_7)))) ? ((~(((/* implicit */int) arr_12 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_2))))))) >> (((max((arr_11 [i_0]), (((((/* implicit */_Bool) (short)-26062)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18390053917277523085ULL))))) - (8826358237852002160ULL))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 16; i_7 += 4) 
                {
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_26 [i_7 - 2] [i_7 + 1] [i_7] [i_7]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)40370);
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_3] [i_0])))))));
                            var_21 *= arr_8 [i_0] [i_0] [i_0];
                            arr_31 [i_3] [i_3] [i_3] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) ((8388607) >= (((/* implicit */int) ((signed char) (unsigned short)54094)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            var_23 = ((/* implicit */short) var_4);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_24 &= arr_29 [i_0] [i_3] [i_6] [i_7] [i_10] [i_0] [i_10];
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_30 [i_0] [i_3] [i_6])), (var_8)))) ? (((/* implicit */int) max((arr_14 [i_7] [i_0]), (((/* implicit */unsigned char) var_4))))) : (((/* implicit */int) var_6)))) + (((/* implicit */int) var_0)))))));
                            arr_37 [i_3] [i_3] [i_6] [i_7] [i_10] [i_10] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_29 [(short)17] [i_3] [i_3] [i_7] [i_7 - 3] [i_6] [i_3])), (arr_33 [i_10] [i_3] [i_0] [14U] [i_7 + 1] [i_7] [i_0])));
                        }
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((((221293606) <= (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_4))))))))));
                    }
                } 
            } 
        }
        for (int i_11 = 1; i_11 < 17; i_11 += 3) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0] [i_11 - 1])), (arr_12 [i_11 + 1])))) ^ (((/* implicit */int) ((short) max((((/* implicit */unsigned short) (unsigned char)75)), ((unsigned short)25165))))))))));
            arr_40 [i_11 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-3634)) ? (1038922943) : (8388616)));
            arr_41 [i_0] [i_11] = ((/* implicit */unsigned short) arr_17 [i_11 - 1]);
            arr_42 [i_0] [i_11] |= ((/* implicit */signed char) (~(((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_11 - 1] [i_11])))))));
        }
        arr_43 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) + (((((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)5] [i_0])) % (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)8]))))) ? ((~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        arr_47 [i_12] = ((/* implicit */unsigned char) (unsigned short)57);
        arr_48 [i_12] = ((/* implicit */unsigned short) arr_46 [i_12]);
        arr_49 [i_12] = ((/* implicit */int) var_8);
    }
    var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-18)), ((unsigned short)25179)));
    var_30 ^= ((/* implicit */short) (-9223372036854775807LL - 1LL));
    var_31 = ((/* implicit */unsigned long long int) var_7);
}
